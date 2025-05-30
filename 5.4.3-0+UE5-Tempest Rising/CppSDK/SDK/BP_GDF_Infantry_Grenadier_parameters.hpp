﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GDF_Infantry_Grenadier

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_GDF_Infantry_Grenadier.BP_GDF_Infantry_Grenadier_C.ExecuteUbergraph_BP_GDF_Infantry_Grenadier
// 0x00E8 (0x00E8 - 0x0000)
struct BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Temp_struct_Variable;                              // 0x0008(0x00D8)(ConstParm, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier) == 0x000008, "Wrong alignment on BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier");
static_assert(sizeof(BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier) == 0x0000E8, "Wrong size on BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier");
static_assert(offsetof(BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier, EntryPoint) == 0x000000, "Member 'BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier, Temp_struct_Variable) == 0x000008, "Member 'BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000E0, "Member 'BP_GDF_Infantry_Grenadier_C_ExecuteUbergraph_BP_GDF_Infantry_Grenadier::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

}

