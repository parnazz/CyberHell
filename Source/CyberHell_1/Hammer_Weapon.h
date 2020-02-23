// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base_Weapon.h"
#include "Hammer_Weapon.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API AHammer_Weapon : public ABase_Weapon
{
	GENERATED_BODY()
	
public:
	AHammer_Weapon();

private:
	void BeginPlay();
};
