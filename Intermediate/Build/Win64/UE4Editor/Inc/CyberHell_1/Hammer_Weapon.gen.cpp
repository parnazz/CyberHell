// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/Hammer_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammer_Weapon() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_AHammer_Weapon_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_AHammer_Weapon();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
// End Cross Module References
	void AHammer_Weapon::StaticRegisterNativesAHammer_Weapon()
	{
	}
	UClass* Z_Construct_UClass_AHammer_Weapon_NoRegister()
	{
		return AHammer_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_AHammer_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHammer_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABase_Weapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHammer_Weapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Hammer_Weapon.h" },
		{ "ModuleRelativePath", "Hammer_Weapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHammer_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammer_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHammer_Weapon_Statics::ClassParams = {
		&AHammer_Weapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHammer_Weapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHammer_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHammer_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHammer_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHammer_Weapon, 2738915459);
	template<> CYBERHELL_1_API UClass* StaticClass<AHammer_Weapon>()
	{
		return AHammer_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHammer_Weapon(Z_Construct_UClass_AHammer_Weapon, &AHammer_Weapon::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("AHammer_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHammer_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
