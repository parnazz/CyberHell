// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/MainGame_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGame_HUD() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_AMainGame_HUD_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_AMainGame_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
// End Cross Module References
	void AMainGame_HUD::StaticRegisterNativesAMainGame_HUD()
	{
	}
	UClass* Z_Construct_UClass_AMainGame_HUD_NoRegister()
	{
		return AMainGame_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AMainGame_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGame_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGame_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MainGame_HUD.h" },
		{ "ModuleRelativePath", "MainGame_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGame_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGame_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGame_HUD_Statics::ClassParams = {
		&AMainGame_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainGame_HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMainGame_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGame_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGame_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGame_HUD, 3707644094);
	template<> CYBERHELL_1_API UClass* StaticClass<AMainGame_HUD>()
	{
		return AMainGame_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGame_HUD(Z_Construct_UClass_AMainGame_HUD, &AMainGame_HUD::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("AMainGame_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGame_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
