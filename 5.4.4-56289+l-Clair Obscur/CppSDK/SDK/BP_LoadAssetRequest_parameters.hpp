﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LoadAssetRequest

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LoadAssetRequest.BP_LoadAssetRequest_C.ExecuteUbergraph_BP_LoadAssetRequest
// 0x0028 (0x0028 - 0x0000)
struct BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest) == 0x000008, "Wrong alignment on BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest");
static_assert(sizeof(BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest) == 0x000028, "Wrong size on BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest");
static_assert(offsetof(BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest, EntryPoint) == 0x000000, "Member 'BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest, Temp_object_Variable) == 0x000020, "Member 'BP_LoadAssetRequest_C_ExecuteUbergraph_BP_LoadAssetRequest::Temp_object_Variable' has a wrong offset!");

// Function BP_LoadAssetRequest.BP_LoadAssetRequest_C.GetLoadedAsset
// 0x0008 (0x0008 - 0x0000)
struct BP_LoadAssetRequest_C_GetLoadedAsset final
{
public:
	class UObject*                                LoadedAsset_0;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LoadAssetRequest_C_GetLoadedAsset) == 0x000008, "Wrong alignment on BP_LoadAssetRequest_C_GetLoadedAsset");
static_assert(sizeof(BP_LoadAssetRequest_C_GetLoadedAsset) == 0x000008, "Wrong size on BP_LoadAssetRequest_C_GetLoadedAsset");
static_assert(offsetof(BP_LoadAssetRequest_C_GetLoadedAsset, LoadedAsset_0) == 0x000000, "Member 'BP_LoadAssetRequest_C_GetLoadedAsset::LoadedAsset_0' has a wrong offset!");

// Function BP_LoadAssetRequest.BP_LoadAssetRequest_C.OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D
// 0x0008 (0x0008 - 0x0000)
struct BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D) == 0x000008, "Wrong alignment on BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D");
static_assert(sizeof(BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D) == 0x000008, "Wrong size on BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D");
static_assert(offsetof(BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D, Loaded) == 0x000000, "Member 'BP_LoadAssetRequest_C_OnLoaded_496BAEE54A2F2A38A62777A94F6FE87D::Loaded' has a wrong offset!");

}

