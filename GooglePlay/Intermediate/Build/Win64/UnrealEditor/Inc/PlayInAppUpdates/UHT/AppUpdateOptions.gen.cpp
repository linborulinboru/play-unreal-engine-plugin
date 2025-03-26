// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayInAppUpdates/Public/AppUpdateOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppUpdateOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateOptions();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateOptions_NoRegister();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType();
UPackage* Z_Construct_UPackage__Script_PlayInAppUpdates();
// End Cross Module References

// Begin Class UAppUpdateOptions Function CreateAppUpdateOptions
struct Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics
{
	struct AppUpdateOptions_eventCreateAppUpdateOptions_Parms
	{
		EAppUpdateType UpdateType;
		UAppUpdateOptions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates an UAppUpdateOptions object.\n\x09 *\n\x09 * @param UpdateType The type of update.\n\x09 *\n\x09 * @return The UAppUpdateOptions object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an UAppUpdateOptions object.\n\n@param UpdateType The type of update.\n\n@return The UAppUpdateOptions object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateOptions_eventCreateAppUpdateOptions_Parms, UpdateType), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType, METADATA_PARAMS(0, nullptr) }; // 2094200996
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateOptions_eventCreateAppUpdateOptions_Parms, ReturnValue), Z_Construct_UClass_UAppUpdateOptions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::NewProp_UpdateType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::NewProp_UpdateType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateOptions, nullptr, "CreateAppUpdateOptions", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::AppUpdateOptions_eventCreateAppUpdateOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::AppUpdateOptions_eventCreateAppUpdateOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateOptions::execCreateAppUpdateOptions)
{
	P_GET_ENUM(EAppUpdateType,Z_Param_UpdateType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAppUpdateOptions**)Z_Param__Result=UAppUpdateOptions::CreateAppUpdateOptions(EAppUpdateType(Z_Param_UpdateType));
	P_NATIVE_END;
}
// End Class UAppUpdateOptions Function CreateAppUpdateOptions

// Begin Class UAppUpdateOptions Function GetAppUpdateType
struct Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics
{
	struct AppUpdateOptions_eventGetAppUpdateType_Parms
	{
		EAppUpdateType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the type of update.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the type of update." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateOptions_eventGetAppUpdateType_Parms, ReturnValue), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType, METADATA_PARAMS(0, nullptr) }; // 2094200996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateOptions, nullptr, "GetAppUpdateType", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::AppUpdateOptions_eventGetAppUpdateType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::AppUpdateOptions_eventGetAppUpdateType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateOptions::execGetAppUpdateType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAppUpdateType*)Z_Param__Result=P_THIS->GetAppUpdateType();
	P_NATIVE_END;
}
// End Class UAppUpdateOptions Function GetAppUpdateType

// Begin Class UAppUpdateOptions Function IsAssetPackDeletionAllowed
struct Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics
{
	struct AppUpdateOptions_eventIsAssetPackDeletionAllowed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether the asset pack deletion is allowed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the asset pack deletion is allowed." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AppUpdateOptions_eventIsAssetPackDeletionAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppUpdateOptions_eventIsAssetPackDeletionAllowed_Parms), &Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateOptions, nullptr, "IsAssetPackDeletionAllowed", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::AppUpdateOptions_eventIsAssetPackDeletionAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::AppUpdateOptions_eventIsAssetPackDeletionAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateOptions::execIsAssetPackDeletionAllowed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetPackDeletionAllowed();
	P_NATIVE_END;
}
// End Class UAppUpdateOptions Function IsAssetPackDeletionAllowed

// Begin Class UAppUpdateOptions Function SetAssetPackDeletionAllowed
struct Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics
{
	struct AppUpdateOptions_eventSetAssetPackDeletionAllowed_Parms
	{
		bool bAllow;
		EAppUpdateErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether the asset pack deletion is allowed.\n\x09 *\n\x09 * @param bAllow Whether the asset pack deletion is allowed.\n\x09 *\n\x09 * @return The error code of the operation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AppUpdateOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the asset pack deletion is allowed.\n\n@param bAllow Whether the asset pack deletion is allowed.\n\n@return The error code of the operation." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAllow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_bAllow_SetBit(void* Obj)
{
	((AppUpdateOptions_eventSetAssetPackDeletionAllowed_Parms*)Obj)->bAllow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AppUpdateOptions_eventSetAssetPackDeletionAllowed_Parms), &Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AppUpdateOptions_eventSetAssetPackDeletionAllowed_Parms, ReturnValue), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode, METADATA_PARAMS(0, nullptr) }; // 1214535262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_bAllow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppUpdateOptions, nullptr, "SetAssetPackDeletionAllowed", nullptr, nullptr, Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::AppUpdateOptions_eventSetAssetPackDeletionAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::AppUpdateOptions_eventSetAssetPackDeletionAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAppUpdateOptions::execSetAssetPackDeletionAllowed)
{
	P_GET_UBOOL(Z_Param_bAllow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAppUpdateErrorCode*)Z_Param__Result=P_THIS->SetAssetPackDeletionAllowed(Z_Param_bAllow);
	P_NATIVE_END;
}
// End Class UAppUpdateOptions Function SetAssetPackDeletionAllowed

// Begin Class UAppUpdateOptions
void UAppUpdateOptions::StaticRegisterNativesUAppUpdateOptions()
{
	UClass* Class = UAppUpdateOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAppUpdateOptions", &UAppUpdateOptions::execCreateAppUpdateOptions },
		{ "GetAppUpdateType", &UAppUpdateOptions::execGetAppUpdateType },
		{ "IsAssetPackDeletionAllowed", &UAppUpdateOptions::execIsAssetPackDeletionAllowed },
		{ "SetAssetPackDeletionAllowed", &UAppUpdateOptions::execSetAssetPackDeletionAllowed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppUpdateOptions);
UClass* Z_Construct_UClass_UAppUpdateOptions_NoRegister()
{
	return UAppUpdateOptions::StaticClass();
}
struct Z_Construct_UClass_UAppUpdateOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class represents the options for the app update.\n *\n * To create an instance of this class, use the CreateAppUpdateOptions function,\n * which initializes the object based on the given update type.\n */" },
#endif
		{ "IncludePath", "AppUpdateOptions.h" },
		{ "ModuleRelativePath", "Public/AppUpdateOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents the options for the app update.\n\nTo create an instance of this class, use the CreateAppUpdateOptions function,\nwhich initializes the object based on the given update type." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppUpdateOptions_CreateAppUpdateOptions, "CreateAppUpdateOptions" }, // 3744687774
		{ &Z_Construct_UFunction_UAppUpdateOptions_GetAppUpdateType, "GetAppUpdateType" }, // 3959286406
		{ &Z_Construct_UFunction_UAppUpdateOptions_IsAssetPackDeletionAllowed, "IsAssetPackDeletionAllowed" }, // 777210532
		{ &Z_Construct_UFunction_UAppUpdateOptions_SetAssetPackDeletionAllowed, "SetAssetPackDeletionAllowed" }, // 1046839777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppUpdateOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAppUpdateOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAppUpdateOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppUpdateOptions_Statics::ClassParams = {
	&UAppUpdateOptions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAppUpdateOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UAppUpdateOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAppUpdateOptions()
{
	if (!Z_Registration_Info_UClass_UAppUpdateOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppUpdateOptions.OuterSingleton, Z_Construct_UClass_UAppUpdateOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAppUpdateOptions.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UClass* StaticClass<UAppUpdateOptions>()
{
	return UAppUpdateOptions::StaticClass();
}
UAppUpdateOptions::UAppUpdateOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAppUpdateOptions);
UAppUpdateOptions::~UAppUpdateOptions() {}
// End Class UAppUpdateOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAppUpdateOptions, UAppUpdateOptions::StaticClass, TEXT("UAppUpdateOptions"), &Z_Registration_Info_UClass_UAppUpdateOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppUpdateOptions), 1798613400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_1638440466(TEXT("/Script/PlayInAppUpdates"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
