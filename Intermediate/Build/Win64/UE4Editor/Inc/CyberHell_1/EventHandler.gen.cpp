// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/EventHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventHandler() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_UEventHandler_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UEventHandler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
// End Cross Module References
	void UEventHandler::StaticRegisterNativesUEventHandler()
	{
	}
	UClass* Z_Construct_UClass_UEventHandler_NoRegister()
	{
		return UEventHandler::StaticClass();
	}
	struct Z_Construct_UClass_UEventHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDeathSignature, int32, ID);\n" },
		{ "IncludePath", "EventHandler.h" },
		{ "ModuleRelativePath", "EventHandler.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDeathSignature, int32, ID);" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventHandler_Statics::ClassParams = {
		&UEventHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEventHandler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEventHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventHandler, 66648293);
	template<> CYBERHELL_1_API UClass* StaticClass<UEventHandler>()
	{
		return UEventHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventHandler(Z_Construct_UClass_UEventHandler, &UEventHandler::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("UEventHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
