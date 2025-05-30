﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_GDF_Refinery

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_BD_GDF_Refinery.ABP_BD_GDF_Refinery_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_BD_GDF_Refinery_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_BD_GDF_Refinery_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_BD_GDF_Refinery_C_AnimGraph");
static_assert(sizeof(ABP_BD_GDF_Refinery_C_AnimGraph) == 0x000010, "Wrong size on ABP_BD_GDF_Refinery_C_AnimGraph");
static_assert(offsetof(ABP_BD_GDF_Refinery_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_BD_GDF_Refinery_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_BD_GDF_Refinery.ABP_BD_GDF_Refinery_C.ExecuteUbergraph_ABP_BD_GDF_Refinery
// 0x0018 (0x0018 - 0x0000)
struct ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet___FloatProperty_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery) == 0x000008, "Wrong alignment on ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery");
static_assert(sizeof(ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery) == 0x000018, "Wrong size on ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery");
static_assert(offsetof(ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery, EntryPoint) == 0x000000, "Member 'ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery, K2Node_StructMemberSet___FloatProperty_ImplicitCast) == 0x000010, "Member 'ABP_BD_GDF_Refinery_C_ExecuteUbergraph_ABP_BD_GDF_Refinery::K2Node_StructMemberSet___FloatProperty_ImplicitCast' has a wrong offset!");

}

