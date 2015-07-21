// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "SummerProject2015.h"
#include "SummerProject2015.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodeSummerProject2015() {}
	void ASummerProject2015GameMode::StaticRegisterNativesASummerProject2015GameMode()
	{
	}
	IMPLEMENT_CLASS(ASummerProject2015GameMode, 3244758496);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	SUMMERPROJECT2015_API class UClass* Z_Construct_UClass_ASummerProject2015GameMode_NoRegister();
	SUMMERPROJECT2015_API class UClass* Z_Construct_UClass_ASummerProject2015GameMode();
	SUMMERPROJECT2015_API class UPackage* Z_Construct_UPackage_SummerProject2015();
	UClass* Z_Construct_UClass_ASummerProject2015GameMode_NoRegister()
	{
		return ASummerProject2015GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASummerProject2015GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_SummerProject2015();
			OuterClass = ASummerProject2015GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x209002AC;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SummerProject2015GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SummerProject2015GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASummerProject2015GameMode(Z_Construct_UClass_ASummerProject2015GameMode, TEXT("ASummerProject2015GameMode"));
	UPackage* Z_Construct_UPackage_SummerProject2015()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SummerProject2015")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x0EA07BE1;
			Guid.B = 0x72C3FF08;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif

