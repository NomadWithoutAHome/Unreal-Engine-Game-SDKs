﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Status_PhysicistAbility_Vehicles

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCue_Status_PhysicistAbility_Vehicles.GCue_Status_PhysicistAbility_Vehicles_C.OnRemove
// 0x00E8 (0x00E8 - 0x0000)
struct GCue_Status_PhysicistAbility_Vehicles_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnRemove_ReturnValue;                     // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_Status_PhysicistAbility_Vehicles_C_OnRemove) == 0x000008, "Wrong alignment on GCue_Status_PhysicistAbility_Vehicles_C_OnRemove");
static_assert(sizeof(GCue_Status_PhysicistAbility_Vehicles_C_OnRemove) == 0x0000E8, "Wrong size on GCue_Status_PhysicistAbility_Vehicles_C_OnRemove");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_OnRemove, MyTarget) == 0x000000, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_OnRemove, Parameters) == 0x000008, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_OnRemove, ReturnValue) == 0x0000E0, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000E1, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");

// Function GCue_Status_PhysicistAbility_Vehicles.GCue_Status_PhysicistAbility_Vehicles_C.WhileActive
// 0x0228 (0x0228 - 0x0000)
struct GCue_Status_PhysicistAbility_Vehicles_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WhileActive_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedUnitBase*                           K2Node_DynamicCast_AsTed_Unit_Base;                // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0130(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive) == 0x000008, "Wrong alignment on GCue_Status_PhysicistAbility_Vehicles_C_WhileActive");
static_assert(sizeof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive) == 0x000228, "Wrong size on GCue_Status_PhysicistAbility_Vehicles_C_WhileActive");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, MyTarget) == 0x000000, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, Parameters) == 0x000008, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, ReturnValue) == 0x0000E0, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, CallFunc_WhileActive_ReturnValue) == 0x0000E1, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::CallFunc_WhileActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, K2Node_DynamicCast_AsTed_Unit_Base) == 0x0000E8, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::K2Node_DynamicCast_AsTed_Unit_Base' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, CallFunc_GetComponentBounds_Origin) == 0x0000F8, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, CallFunc_GetComponentBounds_BoxExtent) == 0x000110, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, CallFunc_GetComponentBounds_SphereRadius) == 0x000128, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(GCue_Status_PhysicistAbility_Vehicles_C_WhileActive, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000130, "Member 'GCue_Status_PhysicistAbility_Vehicles_C_WhileActive::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

}

