﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skill_PowderKeg

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Skill_PowderKeg.BP_Skill_PowderKeg_C.ExecuteUbergraph_BP_Skill_PowderKeg
// 0x0110 (0x0110 - 0x0000)
struct BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PowderKegProjectile_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D2[0x2];                                       // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg) == 0x000010, "Wrong alignment on BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg");
static_assert(sizeof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg) == 0x000110, "Wrong size on BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, EntryPoint) == 0x000000, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_HasAuthority_ReturnValue) == 0x000006, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_GetSocketLocation_ReturnValue) == 0x000008, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000020, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_GetBlackboard_ReturnValue) == 0x000060, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_GetVelocity_ReturnValue) == 0x000068, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_GetForwardVector_ReturnValue) == 0x000074, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_VSize_ReturnValue) == 0x000080, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000084, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000088, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Add_FloatFloat_ReturnValue) == 0x000094, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_BreakRotator_Roll) == 0x000098, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_BreakRotator_Pitch) == 0x00009C, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_BreakRotator_Yaw) == 0x0000A0, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000A4, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_MakeLiteralName_ReturnValue) == 0x0000A8, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_GetValueAsObject_ReturnValue) == 0x0000C0, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, K2Node_DynamicCast_AsActor) == 0x0000C8, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_IsValid_ReturnValue) == 0x0000D1, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000D4, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E0, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_VSize_ReturnValue_1) == 0x0000EC, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_MapRangeClamped_ReturnValue) == 0x0000F0, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000F4, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_MakeRotator_ReturnValue) == 0x0000F8, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000104, "Member 'BP_Skill_PowderKeg_C_ExecuteUbergraph_BP_Skill_PowderKeg::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");

}

