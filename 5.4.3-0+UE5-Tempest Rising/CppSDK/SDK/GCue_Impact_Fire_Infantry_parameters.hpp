﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Impact_Fire_Infantry

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Tempest_structs.hpp"


namespace SDK::Params
{

// Function GCue_Impact_Fire_Infantry.GCue_Impact_Fire_Infantry_C.K2_GetFXAssetConfigs
// 0x0140 (0x0140 - 0x0000)
struct GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs final
{
public:
	const class AActor*                           TargetActor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 GCueParams;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FGCueParticleConfig>            ReturnValue;                                       // 0x00E0(0x0010)(Parm, OutParm, ReturnParm)
	TArray<struct FGCueParticleConfig>            CrawlingFXConfig;                                  // 0x00F0(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedInfantry*                           K2Node_DynamicCast_AsTed_Infantry;                 // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGCueParticleConfig>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsCrawling_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGCueParticleConfig>            K2Node_Select_Default;                             // 0x0130(0x0010)(ReferenceParm)
};
static_assert(alignof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs) == 0x000008, "Wrong alignment on GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs");
static_assert(sizeof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs) == 0x000140, "Wrong size on GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, TargetActor) == 0x000000, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::TargetActor' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, GCueParams) == 0x000008, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::GCueParams' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, ReturnValue) == 0x0000E0, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, CrawlingFXConfig) == 0x0000F0, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::CrawlingFXConfig' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, Temp_bool_Variable) == 0x000100, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, K2Node_DynamicCast_AsTed_Infantry) == 0x000108, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::K2Node_DynamicCast_AsTed_Infantry' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, K2Node_MakeArray_Array) == 0x000118, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, CallFunc_IsCrawling_ReturnValue) == 0x000128, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::CallFunc_IsCrawling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs, K2Node_Select_Default) == 0x000130, "Member 'GCue_Impact_Fire_Infantry_C_K2_GetFXAssetConfigs::K2Node_Select_Default' has a wrong offset!");

}

