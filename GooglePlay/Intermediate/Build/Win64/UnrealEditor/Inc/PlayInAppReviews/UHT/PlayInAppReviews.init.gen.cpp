// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayInAppReviews_init() {}
	PLAYINAPPREVIEWS_API UFunction* Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlayInAppReviews;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlayInAppReviews()
	{
		if (!Z_Registration_Info_UPackage__Script_PlayInAppReviews.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlayInAppReviews",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1E88D470,
				0xF3C8ACAB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlayInAppReviews.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlayInAppReviews.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlayInAppReviews(Z_Construct_UPackage__Script_PlayInAppReviews, TEXT("/Script/PlayInAppReviews"), Z_Registration_Info_UPackage__Script_PlayInAppReviews, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1E88D470, 0xF3C8ACAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
