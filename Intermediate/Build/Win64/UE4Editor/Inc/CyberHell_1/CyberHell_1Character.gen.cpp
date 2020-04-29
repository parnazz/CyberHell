// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/CyberHell_1Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberHell_1Character() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1Character_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_InflictDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_StopMovement();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CYBERHELL_1_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHellGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ACyberHell_1Character::StaticRegisterNativesACyberHell_1Character()
	{
		UClass* Class = ACyberHell_1Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentEnergy", &ACyberHell_1Character::execGetCurrentEnergy },
			{ "GetCurrentHealth", &ACyberHell_1Character::execGetCurrentHealth },
			{ "GetHangingIdle", &ACyberHell_1Character::execGetHangingIdle },
			{ "GetIsCharacterLockedOn", &ACyberHell_1Character::execGetIsCharacterLockedOn },
			{ "GetMaxEnergy", &ACyberHell_1Character::execGetMaxEnergy },
			{ "GetMaxHealth", &ACyberHell_1Character::execGetMaxHealth },
			{ "GetMovingLeftInLedge", &ACyberHell_1Character::execGetMovingLeftInLedge },
			{ "GetMovingRightInLedge", &ACyberHell_1Character::execGetMovingRightInLedge },
			{ "GetRunWithWeapon", &ACyberHell_1Character::execGetRunWithWeapon },
			{ "GetTempStateForHanging", &ACyberHell_1Character::execGetTempStateForHanging },
			{ "GetTurnBackInLedge", &ACyberHell_1Character::execGetTurnBackInLedge },
			{ "InflictDamage", &ACyberHell_1Character::execInflictDamage },
			{ "MakeCharacterNoise", &ACyberHell_1Character::execMakeCharacterNoise },
			{ "OnEnemyDeath", &ACyberHell_1Character::execOnEnemyDeath },
			{ "StopMovement", &ACyberHell_1Character::execStopMovement },
			{ "UpdateCurrentEnergy", &ACyberHell_1Character::execUpdateCurrentEnergy },
			{ "UpdateCurrentHealth", &ACyberHell_1Character::execUpdateCurrentHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics
	{
		struct CyberHell_1Character_eventGetCurrentEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventGetCurrentEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetCurrentEnergy", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetCurrentEnergy_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics
	{
		struct CyberHell_1Character_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetCurrentHealth_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics
	{
		struct CyberHell_1Character_eventGetHangingIdle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetHangingIdle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetHangingIdle_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////\n///Getters for AnimGraph flags//\n///////////////////////////////\n" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Getters for AnimGraph flags\n/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetHangingIdle", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetHangingIdle_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics
	{
		struct CyberHell_1Character_eventGetIsCharacterLockedOn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetIsCharacterLockedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetIsCharacterLockedOn_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetIsCharacterLockedOn", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetIsCharacterLockedOn_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics
	{
		struct CyberHell_1Character_eventGetMaxEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventGetMaxEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetMaxEnergy", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetMaxEnergy_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics
	{
		struct CyberHell_1Character_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetMaxHealth_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics
	{
		struct CyberHell_1Character_eventGetMovingLeftInLedge_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetMovingLeftInLedge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetMovingLeftInLedge_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetMovingLeftInLedge", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetMovingLeftInLedge_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics
	{
		struct CyberHell_1Character_eventGetMovingRightInLedge_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetMovingRightInLedge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetMovingRightInLedge_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetMovingRightInLedge", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetMovingRightInLedge_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics
	{
		struct CyberHell_1Character_eventGetRunWithWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetRunWithWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetRunWithWeapon_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetRunWithWeapon", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetRunWithWeapon_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics
	{
		struct CyberHell_1Character_eventGetTempStateForHanging_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetTempStateForHanging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetTempStateForHanging_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetTempStateForHanging", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetTempStateForHanging_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics
	{
		struct CyberHell_1Character_eventGetTurnBackInLedge_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventGetTurnBackInLedge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventGetTurnBackInLedge_Parms), &Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetTurnBackInLedge", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetTurnBackInLedge_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics
	{
		struct CyberHell_1Character_eventInflictDamage_Parms
		{
			AActor* ImpactActor;
			float DamageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventInflictDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::NewProp_ImpactActor = { "ImpactActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventInflictDamage_Parms, ImpactActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::NewProp_ImpactActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "InflictDamage", nullptr, nullptr, sizeof(CyberHell_1Character_eventInflictDamage_Parms), Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_InflictDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_InflictDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics
	{
		struct CyberHell_1Character_eventMakeCharacterNoise_Parms
		{
			float loudness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_loudness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::NewProp_loudness = { "loudness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventMakeCharacterNoise_Parms, loudness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::NewProp_loudness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "MakeCharacterNoise", nullptr, nullptr, sizeof(CyberHell_1Character_eventMakeCharacterNoise_Parms), Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics
	{
		struct CyberHell_1Character_eventOnEnemyDeath_Parms
		{
			int32 ID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventOnEnemyDeath_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "OnEnemyDeath", nullptr, nullptr, sizeof(CyberHell_1Character_eventOnEnemyDeath_Parms), Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_StopMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_StopMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "StopMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_StopMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_StopMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_StopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_StopMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics
	{
		struct CyberHell_1Character_eventUpdateCurrentEnergy_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventUpdateCurrentEnergy_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "UpdateCurrentEnergy", nullptr, nullptr, sizeof(CyberHell_1Character_eventUpdateCurrentEnergy_Parms), Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics
	{
		struct CyberHell_1Character_eventUpdateCurrentHealth_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventUpdateCurrentHealth_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "UpdateCurrentHealth", nullptr, nullptr, sizeof(CyberHell_1Character_eventUpdateCurrentHealth_Parms), Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACyberHell_1Character_NoRegister()
	{
		return ACyberHell_1Character::StaticClass();
	}
	struct Z_Construct_UClass_ACyberHell_1Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPlayerRotateCamera_MetaData[];
#endif
		static void NewProp_bCanPlayerRotateCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPlayerRotateCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCameraTurningToDefualt_MetaData[];
#endif
		static void NewProp_bIsCameraTurningToDefualt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCameraTurningToDefualt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEquipWeapon_MetaData[];
#endif
		static void NewProp_bCanEquipWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEquipWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetOnLockOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffsetOnLockOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PelvisSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLockedOnEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLockedOnEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRightInLedgeMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnRightInLedgeMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeftInLedgeMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnLeftInLedgeMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRightFromLedgeMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpRightFromLedgeMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpLeftFromLedgeMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpLeftFromLedgeMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWallCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWallCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWallCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWallCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightJumpFromLedgeCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightJumpFromLedgeCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftJumpFromLedgeCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftJumpFromLedgeCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCornerCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightCornerCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCornerCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftCornerCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanMoveRightInLedgeArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanMoveRightInLedgeArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanMoveLeftInLedgeArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanMoveLeftInLedgeArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallCheckArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallCheckArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberHell_1Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACyberHell_1Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy, "GetCurrentEnergy" }, // 2916768935
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth, "GetCurrentHealth" }, // 3034098958
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetHangingIdle, "GetHangingIdle" }, // 1926864500
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetIsCharacterLockedOn, "GetIsCharacterLockedOn" }, // 3025920831
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy, "GetMaxEnergy" }, // 2894772564
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth, "GetMaxHealth" }, // 1618000721
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetMovingLeftInLedge, "GetMovingLeftInLedge" }, // 378088441
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetMovingRightInLedge, "GetMovingRightInLedge" }, // 1343439288
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetRunWithWeapon, "GetRunWithWeapon" }, // 54347298
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetTempStateForHanging, "GetTempStateForHanging" }, // 244455214
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetTurnBackInLedge, "GetTurnBackInLedge" }, // 3612750666
		{ &Z_Construct_UFunction_ACyberHell_1Character_InflictDamage, "InflictDamage" }, // 3926284023
		{ &Z_Construct_UFunction_ACyberHell_1Character_MakeCharacterNoise, "MakeCharacterNoise" }, // 1494689094
		{ &Z_Construct_UFunction_ACyberHell_1Character_OnEnemyDeath, "OnEnemyDeath" }, // 1101310804
		{ &Z_Construct_UFunction_ACyberHell_1Character_StopMovement, "StopMovement" }, // 2164178384
		{ &Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentEnergy, "UpdateCurrentEnergy" }, // 2136565574
		{ &Z_Construct_UFunction_ACyberHell_1Character_UpdateCurrentHealth, "UpdateCurrentHealth" }, // 1951557992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CyberHell_1Character.h" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanPlayerRotateCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera = { "bCanPlayerRotateCamera", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsCameraTurningToDefualt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt = { "bIsCameraTurningToDefualt", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanEquipWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon = { "bCanEquipWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy = { "CurrentEnergy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CurrentEnergy), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxClimbHeight_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxClimbHeight = { "MaxClimbHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, MaxClimbHeight), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxClimbHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MinClimbHeight_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MinClimbHeight = { "MinClimbHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, MinClimbHeight), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MinClimbHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MinClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraOffsetOnLockOn_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraOffsetOnLockOn = { "CameraOffsetOnLockOn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CameraOffsetOnLockOn), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraOffsetOnLockOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraOffsetOnLockOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MovementInput_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, MovementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MovementInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MovementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraInput_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraInput = { "CameraInput", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CameraInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PelvisSocket_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PelvisSocket = { "PelvisSocket", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, PelvisSocket), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PelvisSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PelvisSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TraceChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentLockedOnEnemy_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentLockedOnEnemy = { "CurrentLockedOnEnemy", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CurrentLockedOnEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentLockedOnEnemy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentLockedOnEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, EquippedWeapon), Z_Construct_UClass_ABase_Weapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightInLedgeMontage_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightInLedgeMontage = { "TurnRightInLedgeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, TurnRightInLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightInLedgeMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightInLedgeMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftInLedgeMontage_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftInLedgeMontage = { "TurnLeftInLedgeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, TurnLeftInLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftInLedgeMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftInLedgeMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage = { "JumpRightFromLedgeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, JumpRightFromLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage = { "JumpLeftFromLedgeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, JumpLeftFromLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage_MetaData[] = {
		{ "Category", "Climbing" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage = { "ClimbMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, ClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon = { "AttachedWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, AttachedWeapon), Z_Construct_UClass_ABase_Weapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, EnemyClass), Z_Construct_UClass_AEnemyCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EnemyClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, GameState), Z_Construct_UClass_ACyberHellGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PlayerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheckArrow = { "RightWallCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightWallCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheckArrow = { "LeftWallCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftWallCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightJumpFromLedgeCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightJumpFromLedgeCheckArrow = { "RightJumpFromLedgeCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightJumpFromLedgeCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightJumpFromLedgeCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightJumpFromLedgeCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftJumpFromLedgeCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftJumpFromLedgeCheckArrow = { "LeftJumpFromLedgeCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftJumpFromLedgeCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftJumpFromLedgeCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftJumpFromLedgeCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "Comment", "/** Needed to prevent player grab ledge from corners. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Needed to prevent player grab ledge from corners." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheckArrow = { "RightCornerCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightCornerCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "Comment", "/** Needed to prevent player grab ledge from corners. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Needed to prevent player grab ledge from corners." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheckArrow = { "LeftCornerCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftCornerCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveRightInLedgeArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveRightInLedgeArrow = { "CanMoveRightInLedgeArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CanMoveRightInLedgeArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveRightInLedgeArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveRightInLedgeArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveLeftInLedgeArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveLeftInLedgeArrow = { "CanMoveLeftInLedgeArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CanMoveLeftInLedgeArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveLeftInLedgeArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveLeftInLedgeArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallCheckArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallCheckArrow = { "WallCheckArrow", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, WallCheckArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallCheckArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallCheckArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_NoiseEmitter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_NoiseEmitter = { "NoiseEmitter", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, NoiseEmitter), Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_NoiseEmitter_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_NoiseEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberHell_1Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanPlayerRotateCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsCameraTurningToDefualt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanEquipWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MinClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraOffsetOnLockOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MovementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PelvisSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentLockedOnEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightInLedgeMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftInLedgeMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightJumpFromLedgeCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftJumpFromLedgeCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveRightInLedgeArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CanMoveLeftInLedgeArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallCheckArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_NoiseEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberHell_1Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberHell_1Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACyberHell_1Character_Statics::ClassParams = {
		&ACyberHell_1Character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACyberHell_1Character_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberHell_1Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACyberHell_1Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACyberHell_1Character, 296067387);
	template<> CYBERHELL_1_API UClass* StaticClass<ACyberHell_1Character>()
	{
		return ACyberHell_1Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACyberHell_1Character(Z_Construct_UClass_ACyberHell_1Character, &ACyberHell_1Character::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("ACyberHell_1Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberHell_1Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
