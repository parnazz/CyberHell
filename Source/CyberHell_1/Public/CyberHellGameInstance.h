// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CyberHellGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API UCyberHellGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	virtual void OnStart() override;

public:
	UCyberHellGameInstance();
	
	UPROPERTY()
	class UEventSystem* EventHandler;
	
};
