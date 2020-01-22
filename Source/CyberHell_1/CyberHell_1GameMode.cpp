// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHell_1GameMode.h"
#include "CyberHell_1Character.h"
#include "UObject/ConstructorHelpers.h"

ACyberHell_1GameMode::ACyberHell_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
