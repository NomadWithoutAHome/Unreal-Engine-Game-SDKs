﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Arc

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Projectile_Arc.BP_Projectile_Arc_C.ExecuteUbergraph_BP_Projectile_Arc
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetDestination_ReturnValue;               // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetStart_ReturnValue;                     // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_SpawnEffectAtLocation_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x00B0(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc) == 0x000008, "Wrong alignment on BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc");
static_assert(sizeof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc) == 0x0001B0, "Wrong size on BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, EntryPoint) == 0x000000, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_VSize_ReturnValue) == 0x000008, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_Normal_ReturnValue) == 0x000010, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000030, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_GetDestination_ReturnValue) == 0x000048, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_GetDestination_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_IsDedicatedServer_ReturnValue) == 0x000060, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_Not_PreBool_ReturnValue) == 0x000061, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_Not_PreBool_ReturnValue_1) == 0x000062, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_BooleanAND_ReturnValue) == 0x000063, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_GetStart_ReturnValue) == 0x000068, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_GetStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000080, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_SpawnEffectAtLocation_ReturnValue) == 0x000098, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_SpawnEffectAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, K2Node_DynamicCast_AsNiagara_Particle_System_Component) == 0x0000A0, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::K2Node_DynamicCast_AsNiagara_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x0000B0, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0001A8, "Member 'BP_Projectile_Arc_C_ExecuteUbergraph_BP_Projectile_Arc::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

}

