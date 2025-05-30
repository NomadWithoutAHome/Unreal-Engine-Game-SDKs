﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skill_Invisbility

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Skill_Invisbility.BP_Skill_Invisbility_C.ExecuteUbergraph_BP_Skill_Invisbility
// 0x0040 (0x0040 - 0x0000)
struct BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility) == 0x000008, "Wrong alignment on BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility");
static_assert(sizeof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility) == 0x000040, "Wrong size on BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, EntryPoint) == 0x000000, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, CallFunc_HasAuthority_ReturnValue) == 0x000014, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, CallFunc_GetAttachParentActor_ReturnValue) == 0x000018, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000020, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, K2Node_DynamicCast_AsBP_Character) == 0x000028, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000038, "Member 'BP_Skill_Invisbility_C_ExecuteUbergraph_BP_Skill_Invisbility::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

}

