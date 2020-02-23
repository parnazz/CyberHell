// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHell_1GameMode.h"
#include "CyberHell_1Character.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerController.h"

ACyberHell_1GameMode::ACyberHell_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ACyberHell_1GameMode::BeginPlay()
{
	Super::BeginPlay();

	SetWidget(HealthAndEnergyWidget);

	
}

void ACyberHell_1GameMode::SetWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}