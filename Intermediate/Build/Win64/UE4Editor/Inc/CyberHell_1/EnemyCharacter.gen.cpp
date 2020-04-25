// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/EnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	CYBERHELL_1_API UEnum* Z_Construct_UEnum_CyberHell_1_EnemyBattleState();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	CYBERHELL_1_API UEnum* Z_Construct_UEnum_CyberHell_1_CurrentEnemyState();
	CYBERHELL_1_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_AEnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHellGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UEnemyCharacterStateMachine_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1Character_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* EnemyBattleState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CyberHell_1_EnemyBattleState, Z_Construct_UPackage__Script_CyberHell_1(), TEXT("EnemyBattleState"));
		}
		return Singleton;
	}
	template<> CYBERHELL_1_API UEnum* StaticEnum<EnemyBattleState>()
	{
		return EnemyBattleState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnemyBattleState(EnemyBattleState_StaticEnum, TEXT("/Script/CyberHell_1"), TEXT("EnemyBattleState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CyberHell_1_EnemyBattleState_Hash() { return 837516050U; }
	UEnum* Z_Construct_UEnum_CyberHell_1_EnemyBattleState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CyberHell_1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnemyBattleState"), 0, Get_Z_Construct_UEnum_CyberHell_1_EnemyBattleState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Guard", (int64)Guard },
				{ "Attack", (int64)Attack },
				{ "BattleIdle", (int64)BattleIdle },
				{ "Defualt", (int64)Defualt },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.DisplayName", "Attack" },
				{ "Attack.Name", "Attack" },
				{ "BattleIdle.DisplayName", "Battle idle" },
				{ "BattleIdle.Name", "BattleIdle" },
				{ "BattleIdle.ToolTip", "Player can hit an enemy" },
				{ "Defualt.Hidden", "" },
				{ "Defualt.Name", "Defualt" },
				{ "Guard.DisplayName", "Guard" },
				{ "Guard.Name", "Guard" },
				{ "ModuleRelativePath", "EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CyberHell_1,
				nullptr,
				"EnemyBattleState",
				"EnemyBattleState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* CurrentEnemyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CyberHell_1_CurrentEnemyState, Z_Construct_UPackage__Script_CyberHell_1(), TEXT("CurrentEnemyState"));
		}
		return Singleton;
	}
	template<> CYBERHELL_1_API UEnum* StaticEnum<CurrentEnemyState>()
	{
		return CurrentEnemyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CurrentEnemyState(CurrentEnemyState_StaticEnum, TEXT("/Script/CyberHell_1"), TEXT("CurrentEnemyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CyberHell_1_CurrentEnemyState_Hash() { return 3198621342U; }
	UEnum* Z_Construct_UEnum_CyberHell_1_CurrentEnemyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CyberHell_1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CurrentEnemyState"), 0, Get_Z_Construct_UEnum_CyberHell_1_CurrentEnemyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NormalState", (int64)NormalState },
				{ "DrawingWeapon", (int64)DrawingWeapon },
				{ "ChasingPlayer", (int64)ChasingPlayer },
				{ "BattleState", (int64)BattleState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BattleState.DisplayName", "Battle state" },
				{ "BattleState.Name", "BattleState" },
				{ "ChasingPlayer.DisplayName", "Chasing player" },
				{ "ChasingPlayer.Name", "ChasingPlayer" },
				{ "DrawingWeapon.DisplayName", "Drawing weapon" },
				{ "DrawingWeapon.Name", "DrawingWeapon" },
				{ "ModuleRelativePath", "EnemyCharacter.h" },
				{ "NormalState.DisplayName", "Normal state" },
				{ "NormalState.Name", "NormalState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CyberHell_1,
				nullptr,
				"CurrentEnemyState",
				"CurrentEnemyState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
		UClass* Class = AEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseRandomBattleAction", &AEnemyCharacter::execChooseRandomBattleAction },
			{ "GetCurrentEnemyState", &AEnemyCharacter::execGetCurrentEnemyState },
			{ "GetEnemyBattleState", &AEnemyCharacter::execGetEnemyBattleState },
			{ "GetIsPlayerSensed", &AEnemyCharacter::execGetIsPlayerSensed },
			{ "GetNextWaypoint", &AEnemyCharacter::execGetNextWaypoint },
			{ "OnHearPlayer", &AEnemyCharacter::execOnHearPlayer },
			{ "OnSeePlayer", &AEnemyCharacter::execOnSeePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "ChooseRandomBattleAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics
	{
		struct EnemyCharacter_eventGetCurrentEnemyState_Parms
		{
			TEnumAsByte<CurrentEnemyState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventGetCurrentEnemyState_Parms, ReturnValue), Z_Construct_UEnum_CyberHell_1_CurrentEnemyState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "GetCurrentEnemyState", nullptr, nullptr, sizeof(EnemyCharacter_eventGetCurrentEnemyState_Parms), Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics
	{
		struct EnemyCharacter_eventGetEnemyBattleState_Parms
		{
			TEnumAsByte<EnemyBattleState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventGetEnemyBattleState_Parms, ReturnValue), Z_Construct_UEnum_CyberHell_1_EnemyBattleState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "GetEnemyBattleState", nullptr, nullptr, sizeof(EnemyCharacter_eventGetEnemyBattleState_Parms), Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics
	{
		struct EnemyCharacter_eventGetIsPlayerSensed_Parms
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
	void Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyCharacter_eventGetIsPlayerSensed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyCharacter_eventGetIsPlayerSensed_Parms), &Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "GetIsPlayerSensed", nullptr, nullptr, sizeof(EnemyCharacter_eventGetIsPlayerSensed_Parms), Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics
	{
		struct EnemyCharacter_eventGetNextWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventGetNextWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "GetNextWaypoint", nullptr, nullptr, sizeof(EnemyCharacter_eventGetNextWaypoint_Parms), Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics
	{
		struct EnemyCharacter_eventOnHearPlayer_Parms
		{
			APawn* Pawn;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventOnHearPlayer_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventOnHearPlayer_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventOnHearPlayer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "OnHearPlayer", nullptr, nullptr, sizeof(EnemyCharacter_eventOnHearPlayer_Parms), Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics
	{
		struct EnemyCharacter_eventOnSeePlayer_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventOnSeePlayer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "OnSeePlayer", nullptr, nullptr, sizeof(EnemyCharacter_eventOnSeePlayer_Parms), Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfMeleeCombatRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOfMeleeCombatRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeCombatRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeCombatRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawWeaponMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawWeaponMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BattleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BattleState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWaypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWaypoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllWaypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenseComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_ChooseRandomBattleAction, "ChooseRandomBattleAction" }, // 1932943156
		{ &Z_Construct_UFunction_AEnemyCharacter_GetCurrentEnemyState, "GetCurrentEnemyState" }, // 1059682530
		{ &Z_Construct_UFunction_AEnemyCharacter_GetEnemyBattleState, "GetEnemyBattleState" }, // 1700906413
		{ &Z_Construct_UFunction_AEnemyCharacter_GetIsPlayerSensed, "GetIsPlayerSensed" }, // 2039031706
		{ &Z_Construct_UFunction_AEnemyCharacter_GetNextWaypoint, "GetNextWaypoint" }, // 1756882021
		{ &Z_Construct_UFunction_AEnemyCharacter_OnHearPlayer, "OnHearPlayer" }, // 3969296860
		{ &Z_Construct_UFunction_AEnemyCharacter_OnSeePlayer, "OnSeePlayer" }, // 2999558373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_GameState_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, GameState), Z_Construct_UClass_ACyberHellGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_OutOfMeleeCombatRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_OutOfMeleeCombatRange = { "OutOfMeleeCombatRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, OutOfMeleeCombatRange), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_OutOfMeleeCombatRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_OutOfMeleeCombatRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_MeleeCombatRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_MeleeCombatRange = { "MeleeCombatRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, MeleeCombatRange), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_MeleeCombatRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_MeleeCombatRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BlockingMontage_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BlockingMontage = { "BlockingMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, BlockingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BlockingMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BlockingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DrawWeaponMontage_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DrawWeaponMontage = { "DrawWeaponMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, DrawWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DrawWeaponMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DrawWeaponMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BattleState_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BattleState = { "BattleState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, BattleState), Z_Construct_UEnum_CyberHell_1_EnemyBattleState, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BattleState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BattleState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyState_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyState = { "EnemyState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, EnemyState), Z_Construct_UEnum_CyberHell_1_CurrentEnemyState, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints = { "AllWaypoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, AllWaypoints), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints_Inner = { "AllWaypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StateMachine_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, StateMachine), Z_Construct_UClass_UEnemyCharacterStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StateMachine_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, PlayerCharacter), Z_Construct_UClass_ACyberHell_1Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, AIController), Z_Construct_UClass_AEnemyAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageComponent_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageComponent = { "DamageComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, DamageComponent), Z_Construct_UClass_UDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SenseComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SenseComponent = { "SenseComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, SenseComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SenseComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SenseComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_OutOfMeleeCombatRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_MeleeCombatRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BlockingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DrawWeaponMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BattleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_EnemyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AllWaypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SenseComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
		&AEnemyCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyCharacter, 2370318280);
	template<> CYBERHELL_1_API UClass* StaticClass<AEnemyCharacter>()
	{
		return AEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacter(Z_Construct_UClass_AEnemyCharacter, &AEnemyCharacter::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("AEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
