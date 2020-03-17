// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventHandler.h"
#include "GameFramework/GameStateBase.h"
#include "CyberHellGameState.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API ACyberHellGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ACyberHellGameState();

	UPROPERTY()
	UEventHandler* EventHandler;
};
