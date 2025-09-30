// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"

#include "EnemyAIController.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class AEnemyCharacter;


UCLASS()
class WEIGHT_OF_A_SOUL_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
    AEnemyAIController();

protected:
    virtual void OnPossess(APawn* InPawn) override;
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    UAIPerceptionComponent* PerceptionComp;

    UPROPERTY()
    UAISenseConfig_Sight* SightConfig;

    UPROPERTY()
    AEnemyCharacter* EnemyRef = nullptr;

    UPROPERTY()
    AActor* PlayerRef = nullptr;

    FTimerHandle FollowTimerHandle;
    FTimerHandle LoseAggroHandle;

    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    void StartFollowTick();
    void StopFollowTick();
    void TickFollow();       // runs every 0.2s
    void LoseAggroCheck();   // delayed de-aggro

    // Helpers
    FVector ComputeFrontSpot2D(const FVector& EnemyLoc, const FVector& PlayerLoc, const FVector& PlayerForward) const;
};
