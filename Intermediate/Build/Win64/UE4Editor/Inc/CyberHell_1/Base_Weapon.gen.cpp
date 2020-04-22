// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/Base_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase_Weapon() {}
// Cross Module References
	CYBERHELL_1_API UScriptStruct* Z_Construct_UScriptStruct_FComboMove();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1Character_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHellGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FComboMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CYBERHELL_1_API uint32 Get_Z_Construct_UScriptStruct_FComboMove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboMove, Z_Construct_UPackage__Script_CyberHell_1(), TEXT("ComboMove"), sizeof(FComboMove), Get_Z_Construct_UScriptStruct_FComboMove_Hash());
	}
	return Singleton;
}
template<> CYBERHELL_1_API UScriptStruct* StaticStruct<FComboMove>()
{
	return FComboMove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComboMove(FComboMove::StaticStruct, TEXT("/Script/CyberHell_1"), TEXT("ComboMove"), false, nullptr, nullptr);
static struct FScriptStruct_CyberHell_1_StaticRegisterNativesFComboMove
{
	FScriptStruct_CyberHell_1_StaticRegisterNativesFComboMove()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComboMove")),new UScriptStruct::TCppStructOps<FComboMove>);
	}
} ScriptStruct_CyberHell_1_StaticRegisterNativesFComboMove;
	struct Z_Construct_UScriptStruct_FComboMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyDrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyDrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndApplyDamageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndApplyDamageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartApplyDamageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartApplyDamageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNewComboTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartNewComboTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboMoveDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboMoveDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboMoveAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComboMoveAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboMove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EnergyDrain_MetaData[] = {
		{ "Category", "ComboMove" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EnergyDrain = { "EnergyDrain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMove, EnergyDrain), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EnergyDrain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EnergyDrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EndApplyDamageTime_MetaData[] = {
		{ "Category", "ComboMove" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EndApplyDamageTime = { "EndApplyDamageTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMove, EndApplyDamageTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EndApplyDamageTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EndApplyDamageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartApplyDamageTime_MetaData[] = {
		{ "Category", "ComboMove" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartApplyDamageTime = { "StartApplyDamageTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMove, StartApplyDamageTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartApplyDamageTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartApplyDamageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartNewComboTime_MetaData[] = {
		{ "Category", "ComboMove" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartNewComboTime = { "StartNewComboTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMove, StartNewComboTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartNewComboTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartNewComboTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveDamage_MetaData[] = {
		{ "Category", "ComboMove" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveDamage = { "ComboMoveDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMove, ComboMoveDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveDamage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveAnimation_MetaData[] = {
		{ "Category", "ComboMove" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveAnimation = { "ComboMoveAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboMove, ComboMoveAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EnergyDrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_EndApplyDamageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartApplyDamageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_StartNewComboTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboMove_Statics::NewProp_ComboMoveAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
		nullptr,
		&NewStructOps,
		"ComboMove",
		sizeof(FComboMove),
		alignof(FComboMove),
		Z_Construct_UScriptStruct_FComboMove_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboMove_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComboMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComboMove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CyberHell_1();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComboMove"), sizeof(FComboMove), Get_Z_Construct_UScriptStruct_FComboMove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComboMove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComboMove_Hash() { return 3528808261U; }
	void ABase_Weapon::StaticRegisterNativesABase_Weapon()
	{
		UClass* Class = ABase_Weapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ABase_Weapon::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics
	{
		struct Base_Weapon_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Base_Weapon_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Base_Weapon_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Base_Weapon_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Base_Weapon_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Base_Weapon_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Base_Weapon_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Base_Weapon_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Weapon, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Base_Weapon_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABase_Weapon_NoRegister()
	{
		return ABase_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeavyCombo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeavyCombo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LightCombo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightCombo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequipSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UnequipSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SheathWeaponMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SheathWeaponMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawWeaponMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawWeaponMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABase_Weapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABase_Weapon_OnOverlapBegin, "OnOverlapBegin" }, // 1717562840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Base_Weapon.h" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, PlayerCharacter), Z_Construct_UClass_ACyberHell_1Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_PlayerCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo = { "HeavyCombo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, HeavyCombo), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo_Inner = { "HeavyCombo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComboMove, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo = { "LightCombo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, LightCombo), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo_Inner = { "LightCombo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComboMove, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_UnequipSocket_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_UnequipSocket = { "UnequipSocket", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, UnequipSocket), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_UnequipSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_UnequipSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_EquipSocket_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_EquipSocket = { "EquipSocket", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, EquipSocket), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_EquipSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_EquipSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_SheathWeaponMontage_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_SheathWeaponMontage = { "SheathWeaponMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, SheathWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_SheathWeaponMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_SheathWeaponMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_DrawWeaponMontage_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_DrawWeaponMontage = { "DrawWeaponMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, DrawWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_DrawWeaponMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_DrawWeaponMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_GameState_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, GameState), Z_Construct_UClass_ACyberHellGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyCombo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightCombo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_UnequipSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_EquipSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_SheathWeaponMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_DrawWeaponMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Weapon_Statics::ClassParams = {
		&ABase_Weapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABase_Weapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABase_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABase_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABase_Weapon, 4232269412);
	template<> CYBERHELL_1_API UClass* StaticClass<ABase_Weapon>()
	{
		return ABase_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Weapon(Z_Construct_UClass_ABase_Weapon, &ABase_Weapon::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("ABase_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
