﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_FlameTrooperGrenade

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Projectile_FlameTrooperGrenade.BP_Projectile_FlameTrooperGrenade_C.ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade
// 0x00C0 (0x00C0 - 0x0000)
struct BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedPawn*                               K2Node_DynamicCast_AsTed_Pawn;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGainedExperience_ReturnValue;          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATedPlayerState*                        CallFunc_GetOwningPlayerState_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Destructible_FlameTrooperGrenade_C* CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade) == 0x000010, "Wrong alignment on BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade");
static_assert(sizeof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade) == 0x0000C0, "Wrong size on BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, EntryPoint) == 0x000000, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_HasAuthority_ReturnValue) == 0x000090, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, K2Node_DynamicCast_AsTed_Pawn) == 0x000098, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::K2Node_DynamicCast_AsTed_Pawn' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_GetGainedExperience_ReturnValue) == 0x0000A4, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_GetGainedExperience_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_GetOwningPlayerState_ReturnValue) == 0x0000A8, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_GetOwningPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'BP_Projectile_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Projectile_FlameTrooperGrenade::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

