// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayInAppUpdates_init() {}
	PLAYINAPPUPDATES_API UFunction* Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature();
	PLAYINAPPUPDATES_API UFunction* Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlayInAppUpdates;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlayInAppUpdates()
	{
		if (!Z_Registration_Info_UPackage__Script_PlayInAppUpdates.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlayInAppUpdates",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4CDFE7E6,
				0xC5D12BC8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlayInAppUpdates.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlayInAppUpdates.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlayInAppUpdates(Z_Construct_UPackage__Script_PlayInAppUpdates, TEXT("/Script/PlayInAppUpdates"), Z_Registration_Info_UPackage__Script_PlayInAppUpdates, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4CDFE7E6, 0xC5D12BC8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
