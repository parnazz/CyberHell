// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventHandler.h"
#include "GameFramework/GameStateBase.h"
#include "CyberHellGameState.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDeathSignature, int32, ID);
/**
 * 
 */
UCLASS()
class CYBERHELL_1_API ACyberHellGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ACyberHellGameState();

	//static ACyberHellGameState* Current;

	//static TSharedPtr<ACyberHellGameState, ESPMode::ThreadSafe> Current;

};
