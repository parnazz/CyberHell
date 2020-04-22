// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/CyberHellGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberHellGameState() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHellGameState_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHellGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UEventHandler_NoRegister();
// End Cross Module References
	void ACyberHellGameState::StaticRegisterNativesACyberHellGameState()
	{
	}
	UClass* Z_Construct_UClass_ACyberHellGameState_NoRegister()
	{
		return ACyberHellGameState::StaticClass();
	}
	struct Z_Construct_UClass_ACyberHellGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberHellGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHellGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CyberHellGameState.h" },
		{ "ModuleRelativePath", "CyberHellGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHellGameState_Statics::NewProp_EventHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHellGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHellGameState_Statics::NewProp_EventHandler = { "EventHandler", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHellGameState, EventHandler), Z_Construct_UClass_UEventHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHellGameState_Statics::NewProp_EventHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHellGameState_Statics::NewProp_EventHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberHellGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHellGameState_Statics::NewProp_EventHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberHellGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberHellGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACyberHellGameState_Statics::ClassParams = {
		&ACyberHellGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACyberHellGameState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACyberHellGameState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACyberHellGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACyberHellGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberHellGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACyberHellGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACyberHellGameState, 3168048251);
	template<> CYBERHELL_1_API UClass* StaticClass<ACyberHellGameState>()
	{
		return ACyberHellGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACyberHellGameState(Z_Construct_UClass_ACyberHellGameState, &ACyberHellGameState::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("ACyberHellGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberHellGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
