// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "CyberHell_1GameMode.generated.h"

UCLASS(minimalapi)
class ACyberHell_1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACyberHell_1GameMode();

	UFUNCTION(BlueprintCallable)
	void SetWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> HealthAndEnergyWidget;

	UPROPERTY()
	UUserWidget* CurrentWidget;

	UPROPERTY()
	class ACyberHell_1Character* Player;
};



