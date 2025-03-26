// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/IntegrityTokenRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegrityTokenRequest() {}

// Begin Cross Module References
PLAYINTEGRITY_API UScriptStruct* Z_Construct_UScriptStruct_FIntegrityTokenRequest();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin ScriptStruct FIntegrityTokenRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegrityTokenRequest;
class UScriptStruct* FIntegrityTokenRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegrityTokenRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegrityTokenRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegrityTokenRequest, (UObject*)Z_Construct_UPackage__Script_PlayIntegrity(), TEXT("IntegrityTokenRequest"));
	}
	return Z_Registration_Info_UScriptStruct_IntegrityTokenRequest.OuterSingleton;
}
template<> PLAYINTEGRITY_API UScriptStruct* StaticStruct<FIntegrityTokenRequest>()
{
	return FIntegrityTokenRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The request used to call the RequestIntegrityToken function.\n *\n * @see UIntegrityManager::RequestIntegrityToken\n */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The request used to call the RequestIntegrityToken function.\n\n@see UIntegrityManager::RequestIntegrityToken" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nonce_MetaData[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The nonce field is a string, URL-safe, Base64 encoded and non-wrapping\n\x09 * used to mitigate certain types of attacks. It must contain a minimum of\n\x09 * 16 characters, and maximum of 500 characters.\n\x09 *\n\x09 * Refer to\n\x09 * https://developer.android.com/google/play/integrity/classic#nonce for\n\x09 * more details.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The nonce field is a string, URL-safe, Base64 encoded and non-wrapping\nused to mitigate certain types of attacks. It must contain a minimum of\n16 characters, and maximum of 500 characters.\n\nRefer to\nhttps://developer.android.com/google/play/integrity/classic#nonce for\nmore details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudProjectNumber_MetaData[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The cloud project number is a unique numerical identifier assigned to\n\x09 * each project in Google Cloud. It can be found in Project info in your\n\x09 * Google Cloud Console for the cloud project where Play Integrity API is\n\x09 * enabled.\n\x09 *\n\x09 * For classic requests it is optional and can be omitted if it was linked\n\x09 * in the Play Console.\n\x09 *\n\x09 * Calls to\n\x09 * https://developer.android.com/google/play/integrity/classic#decrypt-verify-google-servers\n\x09 * decrypt the token on Google's server must be authenticated using the\n\x09 * cloud account that was linked to the token in this request.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cloud project number is a unique numerical identifier assigned to\neach project in Google Cloud. It can be found in Project info in your\nGoogle Cloud Console for the cloud project where Play Integrity API is\nenabled.\n\nFor classic requests it is optional and can be omitted if it was linked\nin the Play Console.\n\nCalls to\nhttps://developer.android.com/google/play/integrity/classic#decrypt-verify-google-servers\ndecrypt the token on Google's server must be authenticated using the\ncloud account that was linked to the token in this request." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nonce;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CloudProjectNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegrityTokenRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::NewProp_Nonce = { "Nonce", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegrityTokenRequest, Nonce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nonce_MetaData), NewProp_Nonce_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::NewProp_CloudProjectNumber = { "CloudProjectNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegrityTokenRequest, CloudProjectNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudProjectNumber_MetaData), NewProp_CloudProjectNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::NewProp_Nonce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::NewProp_CloudProjectNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
	nullptr,
	&NewStructOps,
	"IntegrityTokenRequest",
	Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::PropPointers),
	sizeof(FIntegrityTokenRequest),
	alignof(FIntegrityTokenRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntegrityTokenRequest()
{
	if (!Z_Registration_Info_UScriptStruct_IntegrityTokenRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegrityTokenRequest.InnerSingleton, Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntegrityTokenRequest.InnerSingleton;
}
// End ScriptStruct FIntegrityTokenRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIntegrityTokenRequest::StaticStruct, Z_Construct_UScriptStruct_FIntegrityTokenRequest_Statics::NewStructOps, TEXT("IntegrityTokenRequest"), &Z_Registration_Info_UScriptStruct_IntegrityTokenRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegrityTokenRequest), 997176313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenRequest_h_1438406070(TEXT("/Script/PlayIntegrity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
