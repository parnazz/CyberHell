// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/CyberHell_1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberHell_1GameMode() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1GameMode_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHell_1Character_NoRegister();
// End Cross Module References
	void ACyberHell_1GameMode::StaticRegisterNativesACyberHell_1GameMode()
	{
		UClass* Class = ACyberHell_1GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidget", &ACyberHell_1GameMode::execSetWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics
	{
		struct CyberHell_1GameMode_eventSetWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberHell_1GameMode_eventSetWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberHell_1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberHell_1GameMode, nullptr, "SetWidget", nullptr, nullptr, sizeof(CyberHell_1GameMode_eventSetWidget_Parms), Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACyberHell_1GameMode_NoRegister()
	{
		return ACyberHell_1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACyberHell_1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthAndEnergyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthAndEnergyWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberHell_1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACyberHell_1GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACyberHell_1GameMode_SetWidget, "SetWidget" }, // 3972346975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CyberHell_1GameMode.h" },
		{ "ModuleRelativePath", "CyberHell_1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "CyberHell_1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1GameMode, Player), Z_Construct_UClass_ACyberHell_1Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CyberHell_1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1GameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_HealthAndEnergyWidget_MetaData[] = {
		{ "Category", "CyberHell_1GameMode" },
		{ "ModuleRelativePath", "CyberHell_1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_HealthAndEnergyWidget = { "HealthAndEnergyWidget", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberHell_1GameMode, HealthAndEnergyWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_HealthAndEnergyWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_HealthAndEnergyWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberHell_1GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberHell_1GameMode_Statics::NewProp_HealthAndEnergyWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberHell_1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberHell_1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACyberHell_1GameMode_Statics::ClassParams = {
		&ACyberHell_1GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACyberHell_1GameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1GameMode_Statics::PropPointers),
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACyberHell_1GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACyberHell_1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberHell_1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACyberHell_1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACyberHell_1GameMode, 3560045606);
	template<> CYBERHELL_1_API UClass* StaticClass<ACyberHell_1GameMode>()
	{
		return ACyberHell_1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACyberHell_1GameMode(Z_Construct_UClass_ACyberHell_1GameMode, &ACyberHell_1GameMode::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("ACyberHell_1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberHell_1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
