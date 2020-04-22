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
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_ChainAttack();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_Equip();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsClimbing();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsHanging();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_ResetAttack();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_StopMovement();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_TestMessage();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1Character_Unequip();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ACyberHell_1Character::StaticRegisterNativesACyberHell_1Character()
	{
		UClass* Class = ACyberHell_1Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanMoveLeft", &ACyberHell_1Character::execCanMoveLeft },
			{ "CanMoveRight", &ACyberHell_1Character::execCanMoveRight },
			{ "ChainAttack", &ACyberHell_1Character::execChainAttack },
			{ "Equip", &ACyberHell_1Character::execEquip },
			{ "GetChainHeavyAttacks", &ACyberHell_1Character::execGetChainHeavyAttacks },
			{ "GetChainLightAttacks", &ACyberHell_1Character::execGetChainLightAttacks },
			{ "GetCurrentEnergy", &ACyberHell_1Character::execGetCurrentEnergy },
			{ "GetCurrentHealth", &ACyberHell_1Character::execGetCurrentHealth },
			{ "GetMaxEnergy", &ACyberHell_1Character::execGetMaxEnergy },
			{ "GetMaxHealth", &ACyberHell_1Character::execGetMaxHealth },
			{ "IsClimbing", &ACyberHell_1Character::execIsClimbing },
			{ "IsHanging", &ACyberHell_1Character::execIsHanging },
			{ "IsJumpPressed", &ACyberHell_1Character::execIsJumpPressed },
			{ "IsMovingLeft", &ACyberHell_1Character::execIsMovingLeft },
			{ "IsMovingRight", &ACyberHell_1Character::execIsMovingRight },
			{ "IsTurnedBack", &ACyberHell_1Character::execIsTurnedBack },
			{ "IsWeaponEquipped", &ACyberHell_1Character::execIsWeaponEquipped },
			{ "ResetAttack", &ACyberHell_1Character::execResetAttack },
			{ "StopMovement", &ACyberHell_1Character::execStopMovement },
			{ "TestMessage", &ACyberHell_1Character::execTestMessage },
			{ "Unequip", &ACyberHell_1Character::execUnequip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics
	{
		struct CyberHell_1Character_eventCanMoveLeft_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventCanMoveLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventCanMoveLeft_Parms), &Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "CanMoveLeft", nullptr, nullptr, sizeof(CyberHell_1Character_eventCanMoveLeft_Parms), Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics
	{
		struct CyberHell_1Character_eventCanMoveRight_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventCanMoveRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventCanMoveRight_Parms), &Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "CanMoveRight", nullptr, nullptr, sizeof(CyberHell_1Character_eventCanMoveRight_Parms), Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_ChainAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_ChainAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_ChainAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "ChainAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_ChainAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_ChainAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_ChainAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_ChainAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_Equip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_Equip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "Equip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_Equip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics
	{
		struct CyberHell_1Character_eventGetChainHeavyAttacks_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventGetChainHeavyAttacks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetChainHeavyAttacks", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetChainHeavyAttacks_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics
	{
		struct CyberHell_1Character_eventGetChainLightAttacks_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1Character_eventGetChainLightAttacks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "GetChainLightAttacks", nullptr, nullptr, sizeof(CyberHell_1Character_eventGetChainLightAttacks_Parms), Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics
	{
		struct CyberHell_1Character_eventIsClimbing_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsClimbing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsClimbing_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsClimbing", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsClimbing_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics
	{
		struct CyberHell_1Character_eventIsHanging_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsHanging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsHanging_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsHanging", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsHanging_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsHanging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsHanging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics
	{
		struct CyberHell_1Character_eventIsJumpPressed_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsJumpPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsJumpPressed_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsJumpPressed", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsJumpPressed_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics
	{
		struct CyberHell_1Character_eventIsMovingLeft_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsMovingLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsMovingLeft_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsMovingLeft", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsMovingLeft_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics
	{
		struct CyberHell_1Character_eventIsMovingRight_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsMovingRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsMovingRight_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsMovingRight", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsMovingRight_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics
	{
		struct CyberHell_1Character_eventIsTurnedBack_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsTurnedBack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsTurnedBack_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsTurnedBack", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsTurnedBack_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics
	{
		struct CyberHell_1Character_eventIsWeaponEquipped_Parms
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
	void Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CyberHell_1Character_eventIsWeaponEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberHell_1Character_eventIsWeaponEquipped_Parms), &Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "IsWeaponEquipped", nullptr, nullptr, sizeof(CyberHell_1Character_eventIsWeaponEquipped_Parms), Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_ResetAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_ResetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_ResetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "ResetAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_ResetAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_ResetAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_ResetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_ResetAttack_Statics::FuncParams);
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
		{ "Comment", "/** Invokes StopMovementImmediately function **/" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
		{ "ToolTip", "Invokes StopMovementImmediately function *" },
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
	struct Z_Construct_UFunction_ACyberHell_1Character_TestMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_TestMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_TestMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "TestMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_TestMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_TestMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_TestMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_TestMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberHell_1Character_Unequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1Character_Unequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1Character_Unequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1Character, nullptr, "Unequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1Character_Unequip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1Character_Unequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1Character_Unequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1Character_Unequip_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PelvisSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnuseHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnuseHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChainAttack_MetaData[];
#endif
		static void NewProp_bChainAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChainAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHeavyAttack_MetaData[];
#endif
		static void NewProp_bHeavyAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeavyAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLightAttack_MetaData[];
#endif
		static void NewProp_bLightAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLightAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCannotAttack_MetaData[];
#endif
		static void NewProp_bCannotAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCannotAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingAnimation_MetaData[];
#endif
		static void NewProp_bIsPlayingAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponSet_MetaData[];
#endif
		static void NewProp_bIsWeaponSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponEquipped_MetaData[];
#endif
		static void NewProp_bIsWeaponEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJumpPressed_MetaData[];
#endif
		static void NewProp_bIsJumpPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJumpPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurnedBack_MetaData[];
#endif
		static void NewProp_bIsTurnedBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurnedBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHang_MetaData[];
#endif
		static void NewProp_bCanHang_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHang;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurning_MetaData[];
#endif
		static void NewProp_bIsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTurnRight_MetaData[];
#endif
		static void NewProp_bCanTurnRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTurnRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTurnLeft_MetaData[];
#endif
		static void NewProp_bCanTurnLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTurnLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumpingRightFromLedge_MetaData[];
#endif
		static void NewProp_bJumpingRightFromLedge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumpingRightFromLedge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumpingLeftFromLedge_MetaData[];
#endif
		static void NewProp_bJumpingLeftFromLedge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumpingLeftFromLedge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJumpingFromLedge_MetaData[];
#endif
		static void NewProp_bIsJumpingFromLedge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJumpingFromLedge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanJumpRight_MetaData[];
#endif
		static void NewProp_bCanJumpRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanJumpRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanJumpLeft_MetaData[];
#endif
		static void NewProp_bCanJumpLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanJumpLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovingLeft_MetaData[];
#endif
		static void NewProp_bMovingLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovingLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovingRight_MetaData[];
#endif
		static void NewProp_bMovingRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMoveRight_MetaData[];
#endif
		static void NewProp_bCanMoveRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMoveRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMoveLeft_MetaData[];
#endif
		static void NewProp_bCanMoveLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMoveLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClimbing_MetaData[];
#endif
		static void NewProp_bClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClimbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHanging_MetaData[];
#endif
		static void NewProp_bHanging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHanging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDash_MetaData[];
#endif
		static void NewProp_bCanDash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleJumpCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DoubleJumpCounter;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastAttack_MetaData[];
#endif
		static void NewProp_bLastAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainHeavyAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainHeavyAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainLightAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainLightAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRightMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnRightMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnLeftMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurnLeftMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpLeftFromLedgeMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpLeftFromLedgeMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpRightFromLedgeMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpRightFromLedgeMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWallCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWallCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWallCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWallCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCornerCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightCornerCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCornerCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftCornerCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLedge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightLedge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLedge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftLedge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
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
		{ &Z_Construct_UFunction_ACyberHell_1Character_CanMoveLeft, "CanMoveLeft" }, // 627155577
		{ &Z_Construct_UFunction_ACyberHell_1Character_CanMoveRight, "CanMoveRight" }, // 3644952585
		{ &Z_Construct_UFunction_ACyberHell_1Character_ChainAttack, "ChainAttack" }, // 3166306683
		{ &Z_Construct_UFunction_ACyberHell_1Character_Equip, "Equip" }, // 877295459
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetChainHeavyAttacks, "GetChainHeavyAttacks" }, // 1570853443
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetChainLightAttacks, "GetChainLightAttacks" }, // 3277079369
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetCurrentEnergy, "GetCurrentEnergy" }, // 2916768935
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetCurrentHealth, "GetCurrentHealth" }, // 3034098958
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetMaxEnergy, "GetMaxEnergy" }, // 2894772564
		{ &Z_Construct_UFunction_ACyberHell_1Character_GetMaxHealth, "GetMaxHealth" }, // 1618000721
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsClimbing, "IsClimbing" }, // 3223581432
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsHanging, "IsHanging" }, // 1763473983
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsJumpPressed, "IsJumpPressed" }, // 1681176596
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsMovingLeft, "IsMovingLeft" }, // 3859200022
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsMovingRight, "IsMovingRight" }, // 2938246236
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsTurnedBack, "IsTurnedBack" }, // 3798222568
		{ &Z_Construct_UFunction_ACyberHell_1Character_IsWeaponEquipped, "IsWeaponEquipped" }, // 921515412
		{ &Z_Construct_UFunction_ACyberHell_1Character_ResetAttack, "ResetAttack" }, // 4051021849
		{ &Z_Construct_UFunction_ACyberHell_1Character_StopMovement, "StopMovement" }, // 4112157306
		{ &Z_Construct_UFunction_ACyberHell_1Character_TestMessage, "TestMessage" }, // 2213626289
		{ &Z_Construct_UFunction_ACyberHell_1Character_Unequip, "Unequip" }, // 1533639640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CyberHell_1Character.h" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallNormal_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallNormal = { "WallNormal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, WallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallLocation_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallLocation = { "WallLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, WallLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_HeightLocation_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_HeightLocation = { "HeightLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, HeightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_HeightLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_HeightLocation_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_UnuseHandle_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_UnuseHandle = { "UnuseHandle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, UnuseHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_UnuseHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_UnuseHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bChainAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack = { "bChainAttack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bHeavyAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack = { "bHeavyAttack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bLightAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack = { "bLightAttack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCannotAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack = { "bCannotAttack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsPlayingAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation = { "bIsPlayingAnimation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsWeaponSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet = { "bIsWeaponSet", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsWeaponEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped = { "bIsWeaponEquipped", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsJumpPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed = { "bIsJumpPressed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsTurnedBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack = { "bIsTurnedBack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanHang = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang = { "bCanHang", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning = { "bIsTurning", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanTurnRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight = { "bCanTurnRight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanTurnLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft = { "bCanTurnLeft", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bJumpingRightFromLedge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge = { "bJumpingRightFromLedge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bJumpingLeftFromLedge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge = { "bJumpingLeftFromLedge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bIsJumpingFromLedge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge = { "bIsJumpingFromLedge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanJumpRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight = { "bCanJumpRight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanJumpLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft = { "bCanJumpLeft", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bMovingLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft = { "bMovingLeft", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bMovingRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight = { "bMovingRight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanMoveRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight = { "bCanMoveRight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanMoveLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft = { "bCanMoveLeft", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing = { "bClimbing", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bHanging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging = { "bHanging", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanDash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash = { "bCanDash", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bCanJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbHeight_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbHeight = { "ClimbHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, ClimbHeight), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashStop_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashStop = { "DashStop", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, DashStop), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashCooldownTimer_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashCooldownTimer = { "DashCooldownTimer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, DashCooldownTimer), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashCooldownTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashDistance_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, DashDistance), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SprintingSpeed_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, SprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SprintingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, WalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WalkingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpCooldownTime_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpCooldownTime = { "JumpCooldownTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, JumpCooldownTime), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpCooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DoubleJumpCounter_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DoubleJumpCounter = { "DoubleJumpCounter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, DoubleJumpCounter), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DoubleJumpCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DoubleJumpCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy = { "CurrentEnergy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, CurrentEnergy), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
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
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	void Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack_SetBit(void* Obj)
	{
		((ACyberHell_1Character*)Obj)->bLastAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack = { "bLastAttack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberHell_1Character), &Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon = { "AttachedWeapon", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, AttachedWeapon), Z_Construct_UClass_ABase_Weapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainHeavyAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainHeavyAttack = { "ChainHeavyAttack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, ChainHeavyAttack), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainHeavyAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainHeavyAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainLightAttack_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainLightAttack = { "ChainLightAttack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, ChainLightAttack), METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainLightAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainLightAttack_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, EquippedWeapon), Z_Construct_UClass_ABase_Weapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightMontage_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightMontage = { "TurnRightMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, TurnRightMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftMontage_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftMontage = { "TurnLeftMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, TurnLeftMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage = { "JumpLeftFromLedgeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, JumpLeftFromLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage = { "JumpRightFromLedgeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, JumpRightFromLedgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage = { "ClimbMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, ClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheck_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheck = { "RightWallCheck", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightWallCheck), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheck_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheck = { "LeftWallCheck", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftWallCheck), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheck_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheck = { "RightCornerCheck", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightCornerCheck), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheck_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheck = { "LeftCornerCheck", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftCornerCheck), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightLedge_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightLedge = { "RightLedge", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightLedge), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightLedge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightLedge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftLedge_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftLedge = { "LeftLedge", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftLedge), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftLedge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftLedge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightArrow = { "RightArrow", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, RightArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftArrow_MetaData[] = {
		{ "Category", "CyberHell_1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftArrow = { "LeftArrow", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, LeftArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1Character, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WallLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_HeightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_PelvisSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_UnuseHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bChainAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHeavyAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLightAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCannotAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsPlayingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsWeaponEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurnedBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanHang,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanTurnLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingRightFromLedge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bJumpingLeftFromLedge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bIsJumpingFromLedge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJumpLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bMovingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanMoveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bClimbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bHanging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bCanJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DashDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SprintingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_WalkingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_DoubleJumpCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_bLastAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_AttachedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainHeavyAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ChainLightAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnRightMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_TurnLeftMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpLeftFromLedgeMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_JumpRightFromLedgeMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_ClimbMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightWallCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftWallCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightCornerCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftCornerCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightLedge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftLedge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_RightArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_LeftArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1Character_Statics::NewProp_SkeletalMeshComponent,
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
	IMPLEMENT_CLASS(ACyberHell_1Character, 434605003);
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
