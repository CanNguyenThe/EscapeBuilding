// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EscapeBuildingGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeBuildingGameModeBase() {}
// Cross Module References
	ESCAPEBUILDING_API UClass* Z_Construct_UClass_AEscapeBuildingGameModeBase_NoRegister();
	ESCAPEBUILDING_API UClass* Z_Construct_UClass_AEscapeBuildingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscapeBuilding();
// End Cross Module References
	void AEscapeBuildingGameModeBase::StaticRegisterNativesAEscapeBuildingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEscapeBuildingGameModeBase_NoRegister()
	{
		return AEscapeBuildingGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEscapeBuildingGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_EscapeBuilding();
			OuterClass = AEscapeBuildingGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AEscapeBuildingGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EscapeBuildingGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EscapeBuildingGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeBuildingGameModeBase, 1294170094);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeBuildingGameModeBase(Z_Construct_UClass_AEscapeBuildingGameModeBase, &AEscapeBuildingGameModeBase::StaticClass, TEXT("/Script/EscapeBuilding"), TEXT("AEscapeBuildingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeBuildingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
