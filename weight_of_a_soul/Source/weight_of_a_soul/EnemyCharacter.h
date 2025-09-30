// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "EnemyCharacter.generated.h"


UCLASS()
class WEIGHT_OF_A_SOUL_API AEnemyCharacter : public APaperZDCharacter
{
    GENERATED_BODY()

public:
    AEnemyCharacter();

    // Editable AI variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float WalkSpeed = 250.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float RunSpeed = 600.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float AggroRange = 2000.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float LoseAggroTime = 2.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float AttackRange = 160.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Tuning") float FrontLeadDist = 120.f;

    // States
    UPROPERTY(BlueprintReadWrite, Category = "AI|State") bool bIsAggroed = false;
    UPROPERTY(BlueprintReadWrite, Category = "AI|State") bool bIsAttacking = false;
    UPROPERTY(BlueprintReadWrite, Category = "AI|State") bool bDead = false;

    // Target
    UPROPERTY(BlueprintReadWrite, Category = "AI|Target") AActor* TargetPlayer = nullptr;

    // Events to hook animations & patrol in BP
    UFUNCTION(BlueprintImplementableEvent, Category = "AI") void TryAttack();
    UFUNCTION(BlueprintImplementableEvent, Category = "AI") void OnAggroStart();
    UFUNCTION(BlueprintImplementableEvent, Category = "AI") void OnAggroEnd();

protected:
    virtual void BeginPlay() override;
};