// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/Sword_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSword_Weapon() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_ASword_Weapon_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ASword_Weapon();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ABase_Weapon();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
// End Cross Module References
	void ASword_Weapon::StaticRegisterNativesASword_Weapon()
	{
	}
	UClass* Z_Construct_UClass_ASword_Weapon_NoRegister()
	{
		return ASword_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_ASword_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASword_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABase_Weapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASword_Weapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Sword_Weapon.h" },
		{ "ModuleRelativePath", "Sword_Weapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASword_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASword_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASword_Weapon_Statics::ClassParams = {
		&ASword_Weapon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASword_Weapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASword_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASword_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASword_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASword_Weapon, 2070151299);
	template<> CYBERHELL_1_API UClass* StaticClass<ASword_Weapon>()
	{
		return ASword_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASword_Weapon(Z_Construct_UClass_ASword_Weapon, &ASword_Weapon::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("ASword_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASword_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
