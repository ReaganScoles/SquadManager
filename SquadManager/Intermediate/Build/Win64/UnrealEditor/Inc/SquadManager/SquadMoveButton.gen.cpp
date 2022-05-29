// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SquadManager/SquadMoveButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquadMoveButton() {}
// Cross Module References
	SQUADMANAGER_API UClass* Z_Construct_UClass_ASquadMoveButton_NoRegister();
	SQUADMANAGER_API UClass* Z_Construct_UClass_ASquadMoveButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SquadManager();
// End Cross Module References
	void ASquadMoveButton::StaticRegisterNativesASquadMoveButton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASquadMoveButton);
	UClass* Z_Construct_UClass_ASquadMoveButton_NoRegister()
	{
		return ASquadMoveButton::StaticClass();
	}
	struct Z_Construct_UClass_ASquadMoveButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASquadMoveButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SquadManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquadMoveButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SquadMoveButton.h" },
		{ "ModuleRelativePath", "SquadMoveButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASquadMoveButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquadMoveButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquadMoveButton_Statics::ClassParams = {
		&ASquadMoveButton::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ASquadMoveButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASquadMoveButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASquadMoveButton()
	{
		if (!Z_Registration_Info_UClass_ASquadMoveButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquadMoveButton.OuterSingleton, Z_Construct_UClass_ASquadMoveButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASquadMoveButton.OuterSingleton;
	}
	template<> SQUADMANAGER_API UClass* StaticClass<ASquadMoveButton>()
	{
		return ASquadMoveButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASquadMoveButton);
	struct Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_SquadMoveButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_SquadMoveButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASquadMoveButton, ASquadMoveButton::StaticClass, TEXT("ASquadMoveButton"), &Z_Registration_Info_UClass_ASquadMoveButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquadMoveButton), 4191526291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_SquadMoveButton_h_2796291259(TEXT("/Script/SquadManager"),
		Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_SquadMoveButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SquadManager_Source_SquadManager_SquadMoveButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
