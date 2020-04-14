// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TargetPoint.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AEnemyAIController();

	virtual void OnPossess(class APawn* InPawn) override;

	void SetMoveToTarget(class APawn* Pawn);

	void SetTarget(class APawn* Pawn);

	void SetWaypoint(ATargetPoint* NewWaypoint);

	void SetEnemyCharacterState(enum CurrentEnemyState State);

	void SetEnemyBattleState(enum EnemyBattleState State);

	ATargetPoint* GetWaypoint();

private:
	UBlackboardComponent* BlackboardComponent;

	class UBehaviorTreeComponent* BehaviorTreeComponent;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName TargetLocationKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName TargetPlayerKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName PatrolLocationKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName CurrentWaypointKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName EnemyCharacterStateKeyName;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName EnemyBattleStateKeyName;
};
