//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "UObject/Class.h"
//#include "GameFramework/PlayerController.h"
//#include "CyberHell_1Character.h"
//
///**
// * 
// */
//class CYBERHELL_1_API FHeroState
//{
//public:
//	FHeroState();
//	virtual ~FHeroState();
//
//	virtual void Tick(float DetlaSeconds) = 0;
//	virtual void HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) = 0;
//	virtual void OnEnterState(ACyberHell_1Character& Character) = 0;
//};
//
//class FHeroStateRun : FHeroState
//{
//public:
//	FHeroStateRun() {};
//	virtual ~FHeroStateRun() {};
//
//	virtual void Tick(float DetlaSeconds) override;
//	virtual void HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
//	virtual void OnEnterState(ACyberHell_1Character& Character) override;
//};
//
