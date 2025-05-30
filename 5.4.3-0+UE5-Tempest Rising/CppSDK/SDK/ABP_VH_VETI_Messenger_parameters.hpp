﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_VETI_Messenger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_VH_VETI_Messenger.ABP_VH_VETI_Messenger_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_VH_VETI_Messenger_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_VH_VETI_Messenger_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_VH_VETI_Messenger_C_AnimGraph");
static_assert(sizeof(ABP_VH_VETI_Messenger_C_AnimGraph) == 0x000010, "Wrong size on ABP_VH_VETI_Messenger_C_AnimGraph");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_VH_VETI_Messenger_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_VH_VETI_Messenger.ABP_VH_VETI_Messenger_C.ExecuteUbergraph_ABP_VH_VETI_Messenger
// 0x0070 (0x0070 - 0x0000)
struct ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger) == 0x000008, "Wrong alignment on ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger");
static_assert(sizeof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger) == 0x000070, "Wrong size on ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, EntryPoint) == 0x000000, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_BreakVector2D_X) == 0x000008, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_FClamp_ReturnValue_1) == 0x000020, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000030, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_MakeRotator_ReturnValue) == 0x000038, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_MakeRotator_ReturnValue_1) == 0x000050, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000068, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x00006C, "Member 'ABP_VH_VETI_Messenger_C_ExecuteUbergraph_ABP_VH_VETI_Messenger::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

}

