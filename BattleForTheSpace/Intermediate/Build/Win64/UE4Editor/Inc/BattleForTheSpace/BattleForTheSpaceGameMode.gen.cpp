// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForTheSpace/BattleForTheSpaceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleForTheSpaceGameMode() {}
// Cross Module References
	BATTLEFORTHESPACE_API UClass* Z_Construct_UClass_ABattleForTheSpaceGameMode_NoRegister();
	BATTLEFORTHESPACE_API UClass* Z_Construct_UClass_ABattleForTheSpaceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleForTheSpace();
// End Cross Module References
	void ABattleForTheSpaceGameMode::StaticRegisterNativesABattleForTheSpaceGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABattleForTheSpaceGameMode_NoRegister()
	{
		return ABattleForTheSpaceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForTheSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleForTheSpaceGameMode.h" },
		{ "ModuleRelativePath", "BattleForTheSpaceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleForTheSpaceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::ClassParams = {
		&ABattleForTheSpaceGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleForTheSpaceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleForTheSpaceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleForTheSpaceGameMode, 2313962094);
	template<> BATTLEFORTHESPACE_API UClass* StaticClass<ABattleForTheSpaceGameMode>()
	{
		return ABattleForTheSpaceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleForTheSpaceGameMode(Z_Construct_UClass_ABattleForTheSpaceGameMode, &ABattleForTheSpaceGameMode::StaticClass, TEXT("/Script/BattleForTheSpace"), TEXT("ABattleForTheSpaceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleForTheSpaceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
