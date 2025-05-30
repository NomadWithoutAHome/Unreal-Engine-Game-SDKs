﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Sprint

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
// 0x0030 (0x0030 - 0x0000)
struct GA_Sprint_C_ExecuteUbergraph_GA_Sprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint) == 0x000008, "Wrong alignment on GA_Sprint_C_ExecuteUbergraph_GA_Sprint");
static_assert(sizeof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint) == 0x000030, "Wrong size on GA_Sprint_C_ExecuteUbergraph_GA_Sprint");
static_assert(offsetof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint, EntryPoint) == 0x000000, "Member 'GA_Sprint_C_ExecuteUbergraph_GA_Sprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Sprint_C_ExecuteUbergraph_GA_Sprint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000014, "Member 'GA_Sprint_C_ExecuteUbergraph_GA_Sprint::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint, CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue) == 0x00001C, "Member 'GA_Sprint_C_ExecuteUbergraph_GA_Sprint::CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint, CallFunc_WaitDelay_ReturnValue) == 0x000020, "Member 'GA_Sprint_C_ExecuteUbergraph_GA_Sprint::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Sprint_C_ExecuteUbergraph_GA_Sprint, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GA_Sprint_C_ExecuteUbergraph_GA_Sprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

