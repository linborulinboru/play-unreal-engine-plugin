// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/StandardIntegrityTokenRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandardIntegrityTokenRequest() {}

// Begin Cross Module References
PLAYINTEGRITY_API UScriptStruct* Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin ScriptStruct FStandardIntegrityTokenRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest;
class UScriptStruct* FStandardIntegrityTokenRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest, (UObject*)Z_Construct_UPackage__Script_PlayIntegrity(), TEXT("StandardIntegrityTokenRequest"));
	}
	return Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest.OuterSingleton;
}
template<> PLAYINTEGRITY_API UScriptStruct* StaticStruct<FStandardIntegrityTokenRequest>()
{
	return FStandardIntegrityTokenRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The request used to call the Request function.\n *\n * @see UStandardIntegrityTokenProvider::Request\n */" },
#endif
		{ "ModuleRelativePath", "Public/StandardIntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The request used to call the Request function.\n\n@see UStandardIntegrityTokenProvider::Request" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestHash_MetaData[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The request hash provided to the API.\n\x09 *\n\x09 * It is the request hash to bind the integrity token to. It is a\n\x09 * recommended but not required field.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StandardIntegrityTokenRequest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The request hash provided to the API.\n\nIt is the request hash to bind the integrity token to. It is a\nrecommended but not required field." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStandardIntegrityTokenRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::NewProp_RequestHash = { "RequestHash", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandardIntegrityTokenRequest, RequestHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestHash_MetaData), NewProp_RequestHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::NewProp_RequestHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
	nullptr,
	&NewStructOps,
	"StandardIntegrityTokenRequest",
	Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::PropPointers),
	sizeof(FStandardIntegrityTokenRequest),
	alignof(FStandardIntegrityTokenRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest()
{
	if (!Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest.InnerSingleton, Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest.InnerSingleton;
}
// End ScriptStruct FStandardIntegrityTokenRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStandardIntegrityTokenRequest::StaticStruct, Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest_Statics::NewStructOps, TEXT("StandardIntegrityTokenRequest"), &Z_Registration_Info_UScriptStruct_StandardIntegrityTokenRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStandardIntegrityTokenRequest), 26825293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenRequest_h_1630204628(TEXT("/Script/PlayIntegrity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
