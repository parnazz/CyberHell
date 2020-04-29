// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberHell_1/Public/DamageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageComponent() {}
// Cross Module References
	CYBERHELL_1_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_UDamageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CyberHell_1();
	CYBERHELL_1_API UFunction* Z_Construct_UFunction_UDamageComponent_OnDamageTaken();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	CYBERHELL_1_API UClass* Z_Construct_UClass_ACyberHellGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UDamageComponent::StaticRegisterNativesUDamageComponent()
	{
		UClass* Class = UDamageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamageTaken", &UDamageComponent::execOnDamageTaken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics
	{
		struct DamageComponent_eventOnDamageTaken_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventOnDamageTaken_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventOnDamageTaken_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventOnDamageTaken_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventOnDamageTaken_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageComponent_eventOnDamageTaken_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::NewProp_DamagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageComponent, nullptr, "OnDamageTaken", nullptr, nullptr, sizeof(DamageComponent_eventOnDamageTaken_Parms), Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageComponent_OnDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageComponent_OnDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageComponent_NoRegister()
	{
		return UDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberHell_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageComponent_OnDamageTaken, "OnDamageTaken" }, // 4138221712
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DamageComponent.h" },
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentEnergy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentEnergy = { "CurrentEnergy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, CurrentEnergy), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, GameState), Z_Construct_UClass_ACyberHellGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::NewProp_DamageAnimation_MetaData[] = {
		{ "Category", "DamageComponent" },
		{ "ModuleRelativePath", "Public/DamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageComponent_Statics::NewProp_DamageAnimation = { "DamageAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageComponent, DamageAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::NewProp_DamageAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::NewProp_DamageAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponent_Statics::NewProp_DamageAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageComponent_Statics::ClassParams = {
		&UDamageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDamageComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageComponent, 3008077236);
	template<> CYBERHELL_1_API UClass* StaticClass<UDamageComponent>()
	{
		return UDamageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageComponent(Z_Construct_UClass_UDamageComponent, &UDamageComponent::StaticClass, TEXT("/Script/CyberHell_1"), TEXT("UDamageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
