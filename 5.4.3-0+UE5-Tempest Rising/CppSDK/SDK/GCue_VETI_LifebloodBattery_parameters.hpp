﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_VETI_LifebloodBattery

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCue_VETI_LifebloodBattery.GCue_VETI_LifebloodBattery_C.ExecuteUbergraph_GCue_VETI_LifebloodBattery
// 0x0004 (0x0004 - 0x0000)
struct GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery) == 0x000004, "Wrong alignment on GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery");
static_assert(sizeof(GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery) == 0x000004, "Wrong size on GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery");
static_assert(offsetof(GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery, EntryPoint) == 0x000000, "Member 'GCue_VETI_LifebloodBattery_C_ExecuteUbergraph_GCue_VETI_LifebloodBattery::EntryPoint' has a wrong offset!");

// Function GCue_VETI_LifebloodBattery.GCue_VETI_LifebloodBattery_C.WhileActive
// 0x0100 (0x0100 - 0x0000)
struct GCue_VETI_LifebloodBattery_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_VETI_AcceptAbility_C> K2Node_DynamicCast_AsBPI_VETI_Accept_Ability;  // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_VETI_LifebloodBattery_C_WhileActive) == 0x000008, "Wrong alignment on GCue_VETI_LifebloodBattery_C_WhileActive");
static_assert(sizeof(GCue_VETI_LifebloodBattery_C_WhileActive) == 0x000100, "Wrong size on GCue_VETI_LifebloodBattery_C_WhileActive");
static_assert(offsetof(GCue_VETI_LifebloodBattery_C_WhileActive, MyTarget) == 0x000000, "Member 'GCue_VETI_LifebloodBattery_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_VETI_LifebloodBattery_C_WhileActive, Parameters) == 0x000008, "Member 'GCue_VETI_LifebloodBattery_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCue_VETI_LifebloodBattery_C_WhileActive, ReturnValue) == 0x0000E0, "Member 'GCue_VETI_LifebloodBattery_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_VETI_LifebloodBattery_C_WhileActive, K2Node_DynamicCast_AsBPI_VETI_Accept_Ability) == 0x0000E8, "Member 'GCue_VETI_LifebloodBattery_C_WhileActive::K2Node_DynamicCast_AsBPI_VETI_Accept_Ability' has a wrong offset!");
static_assert(offsetof(GCue_VETI_LifebloodBattery_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GCue_VETI_LifebloodBattery_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

