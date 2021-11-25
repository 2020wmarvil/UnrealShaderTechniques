// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderTechniques/ShaderTechniquesGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderTechniquesGameMode() {}
// Cross Module References
	SHADERTECHNIQUES_API UClass* Z_Construct_UClass_AShaderTechniquesGameMode_NoRegister();
	SHADERTECHNIQUES_API UClass* Z_Construct_UClass_AShaderTechniquesGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShaderTechniques();
// End Cross Module References
	void AShaderTechniquesGameMode::StaticRegisterNativesAShaderTechniquesGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShaderTechniquesGameMode_NoRegister()
	{
		return AShaderTechniquesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShaderTechniquesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShaderTechniquesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderTechniques,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderTechniquesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShaderTechniquesGameMode.h" },
		{ "ModuleRelativePath", "ShaderTechniquesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShaderTechniquesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShaderTechniquesGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShaderTechniquesGameMode_Statics::ClassParams = {
		&AShaderTechniquesGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShaderTechniquesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderTechniquesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShaderTechniquesGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShaderTechniquesGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShaderTechniquesGameMode, 3550555926);
	template<> SHADERTECHNIQUES_API UClass* StaticClass<AShaderTechniquesGameMode>()
	{
		return AShaderTechniquesGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShaderTechniquesGameMode(Z_Construct_UClass_AShaderTechniquesGameMode, &AShaderTechniquesGameMode::StaticClass, TEXT("/Script/ShaderTechniques"), TEXT("AShaderTechniquesGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShaderTechniquesGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
