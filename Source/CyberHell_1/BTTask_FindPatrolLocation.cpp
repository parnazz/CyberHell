// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPatrolLocation.h"
#include "CyberHell_1.h"
#include "EnemyAIController.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "NavigationSystem.h"

EBTNodeResult::Type UBTTask_FindPatrolLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* Controller = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());

	if (Controller == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	ATargetPoint* Waypoint = Controller->GetWaypoint();
	if (Waypoint)
	{
		const float SearchRadius = 200.0f;
		const FVector SearchOrigin = Waypoint->GetActorLocation();
		const FVector Location = UNavigationSystemV1::GetRandomReachablePointInRadius(Controller, SearchOrigin, SearchRadius);
		if (Location != FVector::ZeroVector)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID(), Location);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}
