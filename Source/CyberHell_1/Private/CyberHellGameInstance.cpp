// Fill out your copyright notice in the Description page of Project Settings.


#include "CyberHellGameInstance.h"
#include "EventHandler.h"
#include "EventSystem.h"

UCyberHellGameInstance::UCyberHellGameInstance()
{
	EventHandler = NewObject<UEventSystem>();
}

