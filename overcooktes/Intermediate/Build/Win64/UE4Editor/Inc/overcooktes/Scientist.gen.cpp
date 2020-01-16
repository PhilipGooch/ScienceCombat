// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "overcooktes/Scientist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScientist() {}
// Cross Module References
	OVERCOOKTES_API UClass* Z_Construct_UClass_AScientist_NoRegister();
	OVERCOOKTES_API UClass* Z_Construct_UClass_AScientist();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_overcooktes();
	OVERCOOKTES_API UFunction* Z_Construct_UFunction_AScientist_PlayerRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AScientist::StaticRegisterNativesAScientist()
	{
		UClass* Class = AScientist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerRotation", &AScientist::execPlayerRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScientist_PlayerRotation_Statics
	{
		struct Scientist_eventPlayerRotation_Parms
		{
			float deltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScientist_PlayerRotation_Statics::NewProp_deltaSeconds = { "deltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scientist_eventPlayerRotation_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScientist_PlayerRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScientist_PlayerRotation_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScientist_PlayerRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "player" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScientist_PlayerRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScientist, nullptr, "PlayerRotation", sizeof(Scientist_eventPlayerRotation_Parms), Z_Construct_UFunction_AScientist_PlayerRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AScientist_PlayerRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScientist_PlayerRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AScientist_PlayerRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScientist_PlayerRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScientist_PlayerRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScientist_NoRegister()
	{
		return AScientist::StaticClass();
	}
	struct Z_Construct_UClass_AScientist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roatater_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roatater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScientistController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScientistController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMEsh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMEsh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScientist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_overcooktes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScientist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScientist_PlayerRotation, "PlayerRotation" }, // 371484894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScientist_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Scientist.h" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScientist_Statics::NewProp_Mult_MetaData[] = {
		{ "Category", "Scientist" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScientist_Statics::NewProp_Mult = { "Mult", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScientist, Mult), METADATA_PARAMS(Z_Construct_UClass_AScientist_Statics::NewProp_Mult_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::NewProp_Mult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScientist_Statics::NewProp_roatater_MetaData[] = {
		{ "Category", "Scientist" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScientist_Statics::NewProp_roatater = { "roatater", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScientist, roatater), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AScientist_Statics::NewProp_roatater_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::NewProp_roatater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScientist_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "Scientist" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScientist_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScientist, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AScientist_Statics::NewProp_direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::NewProp_direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScientist_Statics::NewProp_ScientistController_MetaData[] = {
		{ "Category", "Scientist" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScientist_Statics::NewProp_ScientistController = { "ScientistController", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScientist, ScientistController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScientist_Statics::NewProp_ScientistController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::NewProp_ScientistController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScientist_Statics::NewProp_MyMEsh_MetaData[] = {
		{ "Category", "Scientist" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Scientist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScientist_Statics::NewProp_MyMEsh = { "MyMEsh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScientist, MyMEsh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScientist_Statics::NewProp_MyMEsh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::NewProp_MyMEsh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScientist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScientist_Statics::NewProp_Mult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScientist_Statics::NewProp_roatater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScientist_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScientist_Statics::NewProp_ScientistController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScientist_Statics::NewProp_MyMEsh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScientist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScientist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScientist_Statics::ClassParams = {
		&AScientist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScientist_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AScientist_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScientist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScientist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScientist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScientist, 3185343161);
	template<> OVERCOOKTES_API UClass* StaticClass<AScientist>()
	{
		return AScientist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScientist(Z_Construct_UClass_AScientist, &AScientist::StaticClass, TEXT("/Script/overcooktes"), TEXT("AScientist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScientist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
