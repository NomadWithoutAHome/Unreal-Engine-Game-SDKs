﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_VETI_Vimana

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_VH_VETI_Vimana.ABP_VH_VETI_Vimana_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_VH_VETI_Vimana_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_VH_VETI_Vimana_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_VH_VETI_Vimana_C_AnimGraph");
static_assert(sizeof(ABP_VH_VETI_Vimana_C_AnimGraph) == 0x000010, "Wrong size on ABP_VH_VETI_Vimana_C_AnimGraph");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_VH_VETI_Vimana_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_VH_VETI_Vimana.ABP_VH_VETI_Vimana_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_VH_VETI_Vimana_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_VH_VETI_Vimana.ABP_VH_VETI_Vimana_C.ExecuteUbergraph_ABP_VH_VETI_Vimana
// 0x0028 (0x0028 - 0x0000)
struct ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ATedAircraft*                           K2Node_DynamicCast_AsTed_Aircraft;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFireTarget_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana) == 0x000008, "Wrong alignment on ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana");
static_assert(sizeof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana) == 0x000028, "Wrong size on ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana, EntryPoint) == 0x000000, "Member 'ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana, K2Node_DynamicCast_AsTed_Aircraft) == 0x000010, "Member 'ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana::K2Node_DynamicCast_AsTed_Aircraft' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana, K2Node_Event_DeltaTimeX) == 0x00001C, "Member 'ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana, CallFunc_HasFireTarget_ReturnValue) == 0x000020, "Member 'ABP_VH_VETI_Vimana_C_ExecuteUbergraph_ABP_VH_VETI_Vimana::CallFunc_HasFireTarget_ReturnValue' has a wrong offset!");

}

