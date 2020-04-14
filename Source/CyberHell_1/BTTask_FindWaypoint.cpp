// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindWaypoint.h"
#include "CyberHell_1.h"
#include "EnemyAIController.h"
#include "EnemyCharacter.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

EBTNodeResult::Type UBTTask_FindWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(AIController->GetCharacter());

	if (AIController == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	if (EnemyCharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	ATargetPoint* CurrentWaypoint = AIController->GetWaypoint();
	AActor* NewWaypoint = nullptr;

	if (EnemyCharacter->AllWaypoints.Num() > 0)
	{
		NewWaypoint = EnemyCharacter->GetNextWaypoint();
	}

	if (NewWaypoint)
	{
		OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(BlackboardKey.GetSelectedKeyID(), NewWaypoint);
		return EBTNodeResult::Succeeded;
	}
	
	return EBTNodeResult::Failed;
}
