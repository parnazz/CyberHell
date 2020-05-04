// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EnemyCharacter.h"
#include "LevelBaseScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API ALevelBaseScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()
	
public:
	TArray<AActor*> EnemyStorage;

	ALevelBaseScriptActor();

protected:
	virtual void BeginPlay() override;
};
