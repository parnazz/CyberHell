// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Enemy.h"
#include "EnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AEnemyAIController::AEnemyAIController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behavior Tree"));

	TargetLocationKeyName = "TargetLocation";
	TargetPlayerKeyName = "TargetPlayer";
	PatrolLocationKeyName = "PatrolLocation";
	CurrentWaypointKeyName = "CurrentWaypoint";
	EnemyCharacterStateKeyName = "EnemyStateSelector";
	EnemyBattleStateKeyName = "EnemyBattleState";
}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(InPawn);

	if (EnemyCharacter)
	{
		if (EnemyCharacter->BehaviorTree->BlackboardAsset)
		{
			BlackboardComponent->InitializeBlackboard(*EnemyCharacter->BehaviorTree->BlackboardAsset);
		}

		if (EnemyCharacter->BehaviorTree)
		{
			BehaviorTreeComponent->StartTree(*EnemyCharacter->BehaviorTree);
		}
	}
}

void AEnemyAIController::SetMoveToTarget(APawn* Pawn)
{
	if (BlackboardComponent)
	{
		SetTarget(Pawn);
		if (Pawn)
		{
			BlackboardComponent->SetValueAsVector(TargetLocationKeyName, Pawn->GetActorLocation());
		}
	}
}

void AEnemyAIController::SetTarget(APawn* Pawn)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsObject(TargetPlayerKeyName, Pawn);
	}
}

void AEnemyAIController::SetWaypoint(ATargetPoint* NewWaypoint)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsObject(CurrentWaypointKeyName, NewWaypoint);
	}
}

void AEnemyAIController::SetEnemyCharacterState(CurrentEnemyState State)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsEnum(EnemyCharacterStateKeyName, State);
	}
}

void AEnemyAIController::SetEnemyBattleState(EnemyBattleState State)
{
	if (BlackboardComponent)
	{
		BlackboardComponent->SetValueAsEnum(EnemyBattleStateKeyName, State);
	}
}

ATargetPoint* AEnemyAIController::GetWaypoint()
{
	if (BlackboardComponent)
	{
		return Cast<ATargetPoint>(BlackboardComponent->GetValueAsObject(CurrentWaypointKeyName));
	}

	return nullptr;
}

