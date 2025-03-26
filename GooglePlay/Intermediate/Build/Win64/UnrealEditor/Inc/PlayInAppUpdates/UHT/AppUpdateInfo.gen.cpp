// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayInAppUpdates/Public/AppUpdateInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppUpdateInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateInfo();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateInfo_NoRegister();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateOptions_NoRegister();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus();
UPackage* Z_Construct_UPackage__Script_PlayInAppUpdates();
// End Cross Module References

// Begin Class UAppUpdateInfo Function GetAvailability
struct Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics
{
	struct AppUpdateInfo_eventGetAvailability_Parms
	{
		EAppUpdateAvailability ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the availability of the app update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the availability of the app update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetAvailability_Parms, ReturnValue), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability, METADATA_PARAMS(0, nullptr) }; // 864450816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetAvailability", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::AppUpdateInfo_eventGetAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::AppUpdateInfo_eventGetAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAppUpdateAvailability*)Z_Param__Result=P_THIS->GetAvailability();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetAvailability

// Begin Class UAppUpdateInfo Function GetAvailableVersionCode
struct Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics
{
	struct AppUpdateInfo_eventGetAvailableVersionCode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the available version code of the app update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the available version code of the app update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetAvailableVersionCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetAvailableVersionCode", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::AppUpdateInfo_eventGetAvailableVersionCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::AppUpdateInfo_eventGetAvailableVersionCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetAvailableVersionCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAvailableVersionCode();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetAvailableVersionCode

// Begin Class UAppUpdateInfo Function GetBytesDownloaded
struct Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics
{
	struct AppUpdateInfo_eventGetBytesDownloaded_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the number of bytes downloaded so far.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of bytes downloaded so far." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetBytesDownloaded_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetBytesDownloaded", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::AppUpdateInfo_eventGetBytesDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::AppUpdateInfo_eventGetBytesDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetBytesDownloaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetBytesDownloaded();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetBytesDownloaded

// Begin Class UAppUpdateInfo Function GetClientVersionStalenessDays
struct Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics
{
	struct AppUpdateInfo_eventGetClientVersionStalenessDays_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the number of days since the client version was last updated.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of days since the client version was last updated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetClientVersionStalenessDays_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetClientVersionStalenessDays", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::AppUpdateInfo_eventGetClientVersionStalenessDays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::AppUpdateInfo_eventGetClientVersionStalenessDays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetClientVersionStalenessDays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetClientVersionStalenessDays();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetClientVersionStalenessDays

// Begin Class UAppUpdateInfo Function GetPriority
struct Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics
{
	struct AppUpdateInfo_eventGetPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the priority of the app update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the priority of the app update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetPriority", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::AppUpdateInfo_eventGetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::AppUpdateInfo_eventGetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPriority();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetPriority

// Begin Class UAppUpdateInfo Function GetStatus
struct Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics
{
	struct AppUpdateInfo_eventGetStatus_Parms
	{
		EAppUpdateStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the status of the app update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the status of the app update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus, METADATA_PARAMS(0, nullptr) }; // 339501595
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::AppUpdateInfo_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::AppUpdateInfo_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAppUpdateStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetStatus

// Begin Class UAppUpdateInfo Function GetTotalBytesToDownload
struct Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics
{
	struct AppUpdateInfo_eventGetTotalBytesToDownload_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the total number of bytes to download.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of bytes to download." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventGetTotalBytesToDownload_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "GetTotalBytesToDownload", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::AppUpdateInfo_eventGetTotalBytesToDownload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::AppUpdateInfo_eventGetTotalBytesToDownload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execGetTotalBytesToDownload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetTotalBytesToDownload();
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function GetTotalBytesToDownload

// Begin Class UAppUpdateInfo Function IsUpdateTypeAllowed
struct Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics
{
	struct AppUpdateInfo_eventIsUpdateTypeAllowed_Parms
	{
		UAppUpdateOptions* InAppUpdateOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether the update type is allowed.\n\x09 *\n\x09 * @param InAppUpdateOptions The UAppUpdateOptions object which contains the\n\x09 * type of update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the update type is allowed.\n\n@param InAppUpdateOptions The UAppUpdateOptions object which contains the\ntype of update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAppUpdateOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::NewProp_InAppUpdateOptions = { "InAppUpdateOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateInfo_eventIsUpdateTypeAllowed_Parms, InAppUpdateOptions), Z_Construct_UClass_UAppUpdateOptions_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AppUpdateInfo_eventIsUpdateTypeAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppUpdateInfo_eventIsUpdateTypeAllowed_Parms), &Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::NewProp_InAppUpdateOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateInfo, nullptr, "IsUpdateTypeAllowed", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::AppUpdateInfo_eventIsUpdateTypeAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::AppUpdateInfo_eventIsUpdateTypeAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateInfo::execIsUpdateTypeAllowed)
{
	P_GET_OBJECT(UAppUpdateOptions,Z_Param_InAppUpdateOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUpdateTypeAllowed(Z_Param_InAppUpdateOptions);
	P_NATIVE_END;
}
// End Class UAppUpdateInfo Function IsUpdateTypeAllowed

// Begin Class UAppUpdateInfo
void UAppUpdateInfo::StaticRegisterNativesUAppUpdateInfo()
{
	UClass* Class = UAppUpdateInfo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailability", &UAppUpdateInfo::execGetAvailability },
		{ "GetAvailableVersionCode", &UAppUpdateInfo::execGetAvailableVersionCode },
		{ "GetBytesDownloaded", &UAppUpdateInfo::execGetBytesDownloaded },
		{ "GetClientVersionStalenessDays", &UAppUpdateInfo::execGetClientVersionStalenessDays },
		{ "GetPriority", &UAppUpdateInfo::execGetPriority },
		{ "GetStatus", &UAppUpdateInfo::execGetStatus },
		{ "GetTotalBytesToDownload", &UAppUpdateInfo::execGetTotalBytesToDownload },
		{ "IsUpdateTypeAllowed", &UAppUpdateInfo::execIsUpdateTypeAllowed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppUpdateInfo);
UClass* Z_Construct_UClass_UAppUpdateInfo_NoRegister()
{
	return UAppUpdateInfo::StaticClass();
}
struct Z_Construct_UClass_UAppUpdateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class represents the information about the app update.\n */" },
#endif
		{ "IncludePath", "AppUpdateInfo.h" },
		{ "ModuleRelativePath", "Public/AppUpdateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents the information about the app update." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetAvailability, "GetAvailability" }, // 2804256799
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetAvailableVersionCode, "GetAvailableVersionCode" }, // 3083212115
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetBytesDownloaded, "GetBytesDownloaded" }, // 2584978048
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetClientVersionStalenessDays, "GetClientVersionStalenessDays" }, // 4213656509
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetPriority, "GetPriority" }, // 120640866
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetStatus, "GetStatus" }, // 2095624373
		{ &Z_Construct_UFunction_UAppUpdateInfo_GetTotalBytesToDownload, "GetTotalBytesToDownload" }, // 5870001
		{ &Z_Construct_UFunction_UAppUpdateInfo_IsUpdateTypeAllowed, "IsUpdateTypeAllowed" }, // 2754919309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppUpdateInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAppUpdateInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAppUpdateInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppUpdateInfo_Statics::ClassParams = {
	&UAppUpdateInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAppUpdateInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAppUpdateInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAppUpdateInfo()
{
	if (!Z_Registration_Info_UClass_UAppUpdateInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppUpdateInfo.OuterSingleton, Z_Construct_UClass_UAppUpdateInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAppUpdateInfo.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UClass* StaticClass<UAppUpdateInfo>()
{
	return UAppUpdateInfo::StaticClass();
}
UAppUpdateInfo::UAppUpdateInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAppUpdateInfo);
UAppUpdateInfo::~UAppUpdateInfo() {}
// End Class UAppUpdateInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAppUpdateInfo, UAppUpdateInfo::StaticClass, TEXT("UAppUpdateInfo"), &Z_Registration_Info_UClass_UAppUpdateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppUpdateInfo), 3036582870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_3109503044(TEXT("/Script/PlayInAppUpdates"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
