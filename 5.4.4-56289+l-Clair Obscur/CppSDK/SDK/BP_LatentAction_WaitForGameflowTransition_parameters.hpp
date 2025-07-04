﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LatentAction_WaitForGameflowTransition

#include "Basic.hpp"

#include "E_GameFlowTransitionPhase_structs.hpp"


namespace SDK::Params
{

// Function BP_LatentAction_WaitForGameflowTransition.BP_LatentAction_WaitForGameflowTransition_C.ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition
// 0x0028 (0x0028 - 0x0000)
struct BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GameFlowTransitionSystem_C*         CallFunc_GetGameFlowTransitionSystem_GameFlowTransitionSystem; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	E_GameFlowTransitionPhase                     CallFunc_GetTransitionPhase_Phase;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTransitionStateValid_ReturnValue;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition) == 0x000008, "Wrong alignment on BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition");
static_assert(sizeof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition) == 0x000028, "Wrong size on BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, EntryPoint) == 0x000000, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, CallFunc_GetGameFlowTransitionSystem_GameFlowTransitionSystem) == 0x000008, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::CallFunc_GetGameFlowTransitionSystem_GameFlowTransitionSystem' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, CallFunc_GetTransitionPhase_Phase) == 0x000020, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::CallFunc_GetTransitionPhase_Phase' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, CallFunc_IsTransitionStateValid_ReturnValue) == 0x000022, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::CallFunc_IsTransitionStateValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'BP_LatentAction_WaitForGameflowTransition_C_ExecuteUbergraph_BP_LatentAction_WaitForGameflowTransition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_LatentAction_WaitForGameflowTransition.BP_LatentAction_WaitForGameflowTransition_C.OnWaitCompleted
// 0x0018 (0x0018 - 0x0000)
struct BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_GameFlowTransitionSystem_C*         CallFunc_GetGameFlowTransitionSystem_GameFlowTransitionSystem; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted) == 0x000008, "Wrong alignment on BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted");
static_assert(sizeof(BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted) == 0x000018, "Wrong size on BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted, CallFunc_GetGameFlowTransitionSystem_GameFlowTransitionSystem) == 0x000010, "Member 'BP_LatentAction_WaitForGameflowTransition_C_OnWaitCompleted::CallFunc_GetGameFlowTransitionSystem_GameFlowTransitionSystem' has a wrong offset!");

}

