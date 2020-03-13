// Fill out your copyright notice in the Description page of Project Settings.


#include "Sword_Weapon.h"
#include "Engine/Engine.h"

ASword_Weapon::ASword_Weapon()
{
	EquipSocket = FName("WeaponSocket");
}

void ASword_Weapon::BeginPlay()
{
	Super::BeginPlay();

}