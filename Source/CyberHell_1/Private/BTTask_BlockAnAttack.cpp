// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_BlockAnAttack.h"
#include "CyberHell_1.h"
#include "EnemyAIController.h"
#include "EnemyCharacter.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

EBTNodeResult::Type UBTTask_BlockAnAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

	if (EnemyCharacter->BattleState == EnemyBattleState::Guard)
	{
		EnemyCharacter->GetMesh()->GetAnimInstance()->Montage_Play(EnemyCharacter->BlockingMontage, 
			1.f, 
			EMontagePlayReturnType::MontageLength, 
			0.f, 
			false);
	}
	else
	{
		EnemyCharacter->GetMesh()->GetAnimInstance()->Montage_Stop(0.05f, EnemyCharacter->BlockingMontage);
	}
	
	return EBTNodeResult::Succeeded;
}
