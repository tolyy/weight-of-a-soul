// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "EnemyCharacter.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"

#include "NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"



AEnemyAIController::AEnemyAIController()
{
    PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
    SetPerceptionComponent(*PerceptionComp);

    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    SightConfig->PeripheralVisionAngleDegrees = 110.f;

    PerceptionComp->ConfigureSense(*SightConfig);
    PerceptionComp->SetDominantSense(UAISense_Sight::StaticClass());
    PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyAIController::OnTargetPerceptionUpdated);

    bAttachToPawn = true;
}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
    EnemyRef = Cast<AEnemyCharacter>(InPawn);
    if (!EnemyRef) return;

    // Sync sight radius from the pawn’s AggroRange
    SightConfig->SightRadius = EnemyRef->AggroRange;
    SightConfig->LoseSightRadius = EnemyRef->AggroRange + 200.f;
    PerceptionComp->RequestStimuliListenerUpdate();
}

void AEnemyAIController::BeginPlay()
{
    Super::BeginPlay();
    StartFollowTick();
}

void AEnemyAIController::StartFollowTick()
{
    GetWorldTimerManager().SetTimer(FollowTimerHandle, this, &AEnemyAIController::TickFollow, 0.2f, true);
}

void AEnemyAIController::StopFollowTick()
{
    GetWorldTimerManager().ClearTimer(FollowTimerHandle);
}

void AEnemyAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (!EnemyRef || EnemyRef->bDead) return;

    // Only care about player type; if you have a specific class, check/cast here
    if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
    {
        if (Stimulus.WasSuccessfullySensed())
        {
            PlayerRef = Actor;
            EnemyRef->TargetPlayer = Actor;
            EnemyRef->bIsAggroed = true;

            SetFocus(Actor);
            if (UCharacterMovementComponent* Move = EnemyRef->GetCharacterMovement())
            {
                Move->MaxWalkSpeed = EnemyRef->RunSpeed;
            }
            GetWorldTimerManager().ClearTimer(LoseAggroHandle);
        }
        else
        {
            // schedule a grace-period check before de-aggroing
            GetWorldTimerManager().SetTimer(
                LoseAggroHandle, this, &AEnemyAIController::LoseAggroCheck,
                EnemyRef->LoseAggroTime, false);
        }
    }
}

void AEnemyAIController::LoseAggroCheck()
{
    if (!EnemyRef) return;

    // If still no player sensed, drop aggro
    // (You can also query PerceptionComp->GetActorsPerception(PlayerRef) to verify)
    ClearFocus(EAIFocusPriority::Gameplay);
    EnemyRef->bIsAggroed = false;
    EnemyRef->TargetPlayer = nullptr;
    if (UCharacterMovementComponent* Move = EnemyRef->GetCharacterMovement())
    {
        Move->MaxWalkSpeed = EnemyRef->WalkSpeed;
    }
    StopMovement();

    // Call your patrol from BP if you want:
    // EnemyRef->CallFunctionByNameWithArguments(TEXT("PatrolUpdate"), *GLog, nullptr, true);
}

FVector AEnemyAIController::ComputeFrontSpot2D(const FVector& EnemyLoc, const FVector& PlayerLoc, const FVector& PlayerForward) const
{
    // Decide sign by player forward X (2D side-scroller)
    const float Sign = (PlayerForward.X >= 0.f) ? 1.f : -1.f;
    FVector Spot = PlayerLoc;
    Spot.X += EnemyRef ? (EnemyRef->FrontLeadDist * Sign) : 120.f;

    // Lock to lane: keep enemy’s current Y/Z
    Spot.Y = EnemyLoc.Y;
    Spot.Z = EnemyLoc.Z;
    return Spot;
}

void AEnemyAIController::TickFollow()
{
    if (!EnemyRef || EnemyRef->bDead || !EnemyRef->bIsAggroed || !PlayerRef) return;

    const FVector EnemyLoc = EnemyRef->GetActorLocation();
    const FVector PlayerLoc = PlayerRef->GetActorLocation();
    const FVector PlayerFwd = PlayerRef->GetActorForwardVector();

    // Face player (Yaw only)
    const FRotator FaceRot = (PlayerLoc - EnemyLoc).Rotation();
    FRotator NewRot(0.f, FaceRot.Yaw, 0.f);
    EnemyRef->SetActorRotation(NewRot);

    // Horizontal distance in 2D (X axis)
    const float DistX = FMath::Abs(EnemyLoc.X - PlayerLoc.X);

    if (DistX <= EnemyRef->AttackRange && !EnemyRef->bIsAttacking)
    {
        StopMovement();
        EnemyRef->TryAttack();            // handled in BP
        return;
    }

    // Move to front spot
    FVector Desired = ComputeFrontSpot2D(EnemyLoc, PlayerLoc, PlayerFwd);

    // Project to Navmesh to avoid off-mesh requests
    FNavLocation Projected;
    if (UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
    {
        if (NavSys->ProjectPointToNavigation(Desired, Projected, FVector(100.f, 100.f, 200.f)))
        {
            Desired = Projected.Location;
        }
    }

    const float Acceptance = EnemyRef->AttackRange * 0.4f; // small dead-zone
    MoveToLocation(Desired, Acceptance, true, true, true, false, 0, true);
}