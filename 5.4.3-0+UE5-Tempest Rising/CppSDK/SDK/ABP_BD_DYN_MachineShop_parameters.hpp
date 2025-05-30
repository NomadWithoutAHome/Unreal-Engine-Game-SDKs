﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_DYN_MachineShop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_structs.hpp"


namespace SDK::Params
{

// Function ABP_BD_DYN_MachineShop.ABP_BD_DYN_MachineShop_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_BD_DYN_MachineShop_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_BD_DYN_MachineShop_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_BD_DYN_MachineShop_C_AnimGraph");
static_assert(sizeof(ABP_BD_DYN_MachineShop_C_AnimGraph) == 0x000010, "Wrong size on ABP_BD_DYN_MachineShop_C_AnimGraph");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_BD_DYN_MachineShop_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_BD_DYN_MachineShop.ABP_BD_DYN_MachineShop_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_BD_DYN_MachineShop_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_BD_DYN_MachineShop.ABP_BD_DYN_MachineShop_C.ExecuteUbergraph_ABP_BD_DYN_MachineShop
// 0x00B0 (0x00B0 - 0x0000)
struct ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_BD_DYN_MachineShop_C*               K2Node_DynamicCast_AsBP_BD_DYN_Machine_Shop;       // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETedPowerStatus                               CallFunc_GetPowerStatus_ReturnValue;               // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConstructing_ReturnValue;               // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop) == 0x000008, "Wrong alignment on ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop");
static_assert(sizeof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop) == 0x0000B0, "Wrong size on ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, EntryPoint) == 0x000000, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_BreakVector2D_X) == 0x000008, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_MakeRotator_ReturnValue) == 0x000030, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_BreakRotator_Roll) == 0x000048, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_BreakRotator_Pitch) == 0x00004C, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_BreakRotator_Yaw) == 0x000050, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000058, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, K2Node_Event_DeltaTimeX) == 0x000060, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000070, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_MakeRotator_ReturnValue_1) == 0x000078, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, K2Node_DynamicCast_AsBP_BD_DYN_Machine_Shop) == 0x000090, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::K2Node_DynamicCast_AsBP_BD_DYN_Machine_Shop' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_GetPowerStatus_ReturnValue) == 0x000099, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_GetPowerStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_IsConstructing_ReturnValue) == 0x00009A, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_IsConstructing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00009B, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x00009C, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0000A0, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x0000A8, "Member 'ABP_BD_DYN_MachineShop_C_ExecuteUbergraph_ABP_BD_DYN_MachineShop::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");

}

