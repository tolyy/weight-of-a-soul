// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"


class ABP_Player;
UCLASS()
class WEIGHT_OF_A_SOUL_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
    AEnemyCharacter();

    // Tunables (editable in BP)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float WalkSpeed = 250.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float RunSpeed = 600.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float AggroRange = 2000.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float LoseAggroTime = 2.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float AttackRange = 160.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float FrontLeadDist = 120.f;

    UPROPERTY(BlueprintReadWrite, Category = "AI|State") bool bIsAggroed = false;
    UPROPERTY(BlueprintReadWrite, Category = "AI|State") bool bIsAttacking = false;
    UPROPERTY(BlueprintReadWrite, Category = "AI|State") bool bDead = false;

    UPROPERTY(BlueprintReadWrite, Category = "AI|Target") AActor* TargetPlayer = nullptr;

    // Called by AI when it’s time to attack; do montage/flipbook + hitbox in BP
    UFUNCTION(BlueprintImplementableEvent, Category = "AI") void TryAttack();

protected:
    virtual void BeginPlay() override;
};
