// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/PrepareIntegrityTokenRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrepareIntegrityTokenRequest() {}

// Begin Cross Module References
PLAYINTEGRITY_API UScriptStruct* Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin ScriptStruct FPrepareIntegrityTokenRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest;
class UScriptStruct* FPrepareIntegrityTokenRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest, (UObject*)Z_Construct_UPackage__Script_PlayIntegrity(), TEXT("PrepareIntegrityTokenRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest.OuterSingleton;
}
template<> PLAYINTEGRITY_API UScriptStruct* StaticStruct<FPrepareIntegrityTokenRequest>()
{
	return FPrepareIntegrityTokenRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The request used to call the PrepareIntegrityToken function.\n *\n * @see UStandardIntegrityManager::PrepareIntegrityToken\n */" },
#endif
		{ "ModuleRelativePath", "Public/PrepareIntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The request used to call the PrepareIntegrityToken function.\n\n@see UStandardIntegrityManager::PrepareIntegrityToken" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudProjectNumber_MetaData[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The cloud project number is a unique numerical identifier assigned to\n\x09 * each project in Google Cloud. It can be found in Project info in your\n\x09 * Google Cloud Console for the cloud project where Play Integrity API is\n\x09 * enabled.\n\x09 *\n\x09 * Calls to\n\x09 * https://developer.android.com/google/play/integrity/standard#decrypt-and\n\x09 * decrypt the token on Google's server must be authenticated using the\n\x09 * cloud account that was linked to the token in this request.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PrepareIntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cloud project number is a unique numerical identifier assigned to\neach project in Google Cloud. It can be found in Project info in your\nGoogle Cloud Console for the cloud project where Play Integrity API is\nenabled.\n\nCalls to\nhttps://developer.android.com/google/play/integrity/standard#decrypt-and\ndecrypt the token on Google's server must be authenticated using the\ncloud account that was linked to the token in this request." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CloudProjectNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrepareIntegrityTokenRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::NewProp_CloudProjectNumber = { "CloudProjectNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrepareIntegrityTokenRequest, CloudProjectNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudProjectNumber_MetaData), NewProp_CloudProjectNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::NewProp_CloudProjectNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
	nullptr,
	&NewStructOps,
	"PrepareIntegrityTokenRequest",
	Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::PropPointers),
	sizeof(FPrepareIntegrityTokenRequest),
	alignof(FPrepareIntegrityTokenRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest()
{
	if (!Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest.InnerSingleton, Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest.InnerSingleton;
}
// End ScriptStruct FPrepareIntegrityTokenRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_PrepareIntegrityTokenRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPrepareIntegrityTokenRequest::StaticStruct, Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest_Statics::NewStructOps, TEXT("PrepareIntegrityTokenRequest"), &Z_Registration_Info_UScriptStruct_PrepareIntegrityTokenRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrepareIntegrityTokenRequest), 1064307080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_PrepareIntegrityTokenRequest_h_3780269220(TEXT("/Script/PlayIntegrity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_PrepareIntegrityTokenRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_PrepareIntegrityTokenRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
