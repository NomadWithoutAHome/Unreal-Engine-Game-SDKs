﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Impact_SacrificeVimana_Buff

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCue_Impact_SacrificeVimana_Buff.GCue_Impact_SacrificeVimana_Buff_C.ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff
// 0x0004 (0x0004 - 0x0000)
struct GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff) == 0x000004, "Wrong alignment on GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff");
static_assert(sizeof(GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff) == 0x000004, "Wrong size on GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff, EntryPoint) == 0x000000, "Member 'GCue_Impact_SacrificeVimana_Buff_C_ExecuteUbergraph_GCue_Impact_SacrificeVimana_Buff::EntryPoint' has a wrong offset!");

// Function GCue_Impact_SacrificeVimana_Buff.GCue_Impact_SacrificeVimana_Buff_C.OnExecute
// 0x0118 (0x0118 - 0x0000)
struct GCue_Impact_SacrificeVimana_Buff_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_VETI_Vehicle_Vimana_C*              K2Node_DynamicCast_AsBP_VETI_Vehicle_Vimana;       // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_SpawnEffectAtLocation_ReturnValue;        // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute) == 0x000008, "Wrong alignment on GCue_Impact_SacrificeVimana_Buff_C_OnExecute");
static_assert(sizeof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute) == 0x000118, "Wrong size on GCue_Impact_SacrificeVimana_Buff_C_OnExecute");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, MyTarget) == 0x000000, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, Parameters) == 0x000008, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, ReturnValue) == 0x0000E0, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, K2Node_DynamicCast_AsBP_VETI_Vehicle_Vimana) == 0x0000E8, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::K2Node_DynamicCast_AsBP_VETI_Vehicle_Vimana' has a wrong offset!");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, CallFunc_GetSocketLocation_ReturnValue) == 0x0000F8, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_SacrificeVimana_Buff_C_OnExecute, CallFunc_SpawnEffectAtLocation_ReturnValue) == 0x000110, "Member 'GCue_Impact_SacrificeVimana_Buff_C_OnExecute::CallFunc_SpawnEffectAtLocation_ReturnValue' has a wrong offset!");

}

