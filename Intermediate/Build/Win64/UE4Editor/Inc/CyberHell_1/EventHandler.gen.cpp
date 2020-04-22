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
	CYBERHELL_1_API UFunction* Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UEventHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UEventHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics
	{
		struct EventHandler_eventApplyDamageDelegate_Parms
		{
			AActor* Actor;
			float Damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventHandler_eventApplyDamageDelegate_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventHandler_eventApplyDamageDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventHandler, nullptr, "ApplyDamageDelegate__DelegateSignature", nullptr, nullptr, sizeof(EventHandler_eventApplyDamageDelegate_Parms), Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnemyDamaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyDamaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature, "ApplyDamageDelegate__DelegateSignature" }, // 2589531048
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EventHandler.h" },
		{ "ModuleRelativePath", "EventHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventHandler_Statics::NewProp_OnEnemyDamaged_MetaData[] = {
		{ "ModuleRelativePath", "EventHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEventHandler_Statics::NewProp_OnEnemyDamaged = { "OnEnemyDamaged", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventHandler, OnEnemyDamaged), Z_Construct_UDelegateFunction_UEventHandler_ApplyDamageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEventHandler_Statics::NewProp_OnEnemyDamaged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEventHandler_Statics::NewProp_OnEnemyDamaged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventHandler_Statics::NewProp_OnEnemyDamaged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventHandler_Statics::ClassParams = {
		&UEventHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UEventHandler_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		ARRAY_COUNT(Z_Construct_UClass_UEventHandler_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UEventHandler, 1137281054);
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
