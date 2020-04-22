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
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ABase_Weapon_HeavyAttack();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ABase_Weapon_LightAttack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1Character_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABase_Weapon::StaticRegisterNativesABase_Weapon()
	{
		UClass* Class = ABase_Weapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HeavyAttack", &ABase_Weapon::execHeavyAttack },
			{ "LightAttack", &ABase_Weapon::execLightAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABase_Weapon_HeavyAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_HeavyAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Weapon_HeavyAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Weapon, nullptr, "HeavyAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_HeavyAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_HeavyAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Weapon_HeavyAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Weapon_HeavyAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABase_Weapon_LightAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_LightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Weapon_LightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Weapon, nullptr, "LightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_LightAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_LightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Weapon_LightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Weapon_LightAttack_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequipSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UnequipSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyAttacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeavyAttacks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeavyAttacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightAttacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LightAttacks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightAttacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SheathWeaponMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SheathWeaponMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawWeaponMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawWeaponMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
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
		{ &Z_Construct_UFunction_ABase_Weapon_HeavyAttack, "HeavyAttack" }, // 2508445323
		{ &Z_Construct_UFunction_ABase_Weapon_LightAttack, "LightAttack" }, // 1837926614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Base_Weapon.h" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks = { "HeavyAttacks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, HeavyAttacks), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks_Inner = { "HeavyAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks = { "LightAttacks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, LightAttacks), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks_Inner = { "LightAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, Player), Z_Construct_UClass_ACyberHell_1Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase_Weapon, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_UnequipSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_EquipSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_HeavyAttacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_LightAttacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_SheathWeaponMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_DrawWeaponMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_Player,
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
	IMPLEMENT_CLASS(ABase_Weapon, 1391311251);
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
