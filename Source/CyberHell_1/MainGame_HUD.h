// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "MainGame_HUD.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API AMainGame_HUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	AMainGame_HUD();
};
