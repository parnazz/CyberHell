// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDeathSignature, int32, ID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyLockOnSignature, int32, ID);

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API UEventSystem : public UObject
{
	GENERATED_BODY()
	
public:
	UEventSystem();

	UPROPERTY()
	FOnEnemyDeathSignature OnEnemyDeath;

	UPROPERTY()
	FOnEnemyLockOnSignature OnEnemyLockOn;

	UPROPERTY()
	FOnEnemyLockOnSignature OnEnemyChangeTarget;
};
