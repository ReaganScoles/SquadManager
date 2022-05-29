// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SquadManager/Raycast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaycast() {}
// Cross Module References
	SQUADMANAGER_API UClass* Z_Construct_UClass_ARaycast_NoRegister();
	SQUADMANAGER_API UClass* Z_Construct_UClass_ARaycast();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SquadManager();
// End Cross Module References
	void ARaycast::StaticRegisterNativesARaycast()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaycast);
	UClass* Z_Construct_UClass_ARaycast_NoRegister()
	{
		return ARaycast::StaticClass();
	}
	struct Z_Construct_UClass_ARaycast_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaycast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SquadManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaycast_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Raycast.h" },
		{ "ModuleRelativePath", "Raycast.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaycast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaycast>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaycast_Statics::ClassParams = {
		&ARaycast::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaycast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaycast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaycast()
	{
		if (!Z_Registration_Info_UClass_ARaycast.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaycast.OuterSingleton, Z_Construct_UClass_ARaycast_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaycast.OuterSingleton;
	}
	template<> SQUADMANAGER_API UClass* StaticClass<ARaycast>()
	{
		return ARaycast::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaycast);
	struct Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_Raycast_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_Raycast_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaycast, ARaycast::StaticClass, TEXT("ARaycast"), &Z_Registration_Info_UClass_ARaycast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaycast), 3471977845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_Raycast_h_3128836221(TEXT("/Script/SquadManager"),
		Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_Raycast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_Raycast_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
