﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LuminaTooltip

#include "Basic.hpp"

#include "FPassiveEffect_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_LuminaTooltip.WBP_LuminaTooltip_C.SetPassiveEffect
// 0x0060 (0x0060 - 0x0000)
struct WBP_LuminaTooltip_C_SetPassiveEffect final
{
public:
	class FName                                   InPassiveEffectID;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFPassiveEffect                        CallFunc_GetPassiveEffectDefinition_PassiveEffect; // 0x0010(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPassiveEffectDefinition_Found;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LuminaTooltip_C_SetPassiveEffect) == 0x000008, "Wrong alignment on WBP_LuminaTooltip_C_SetPassiveEffect");
static_assert(sizeof(WBP_LuminaTooltip_C_SetPassiveEffect) == 0x000060, "Wrong size on WBP_LuminaTooltip_C_SetPassiveEffect");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, InPassiveEffectID) == 0x000000, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::InPassiveEffectID' has a wrong offset!");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, Temp_bool_Variable) == 0x000008, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, CallFunc_GetPassiveEffectDefinition_PassiveEffect) == 0x000010, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::CallFunc_GetPassiveEffectDefinition_PassiveEffect' has a wrong offset!");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, CallFunc_GetPassiveEffectDefinition_Found) == 0x000058, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::CallFunc_GetPassiveEffectDefinition_Found' has a wrong offset!");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, Temp_byte_Variable) == 0x000059, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, Temp_byte_Variable_1) == 0x00005A, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LuminaTooltip_C_SetPassiveEffect, K2Node_Select_Default) == 0x00005B, "Member 'WBP_LuminaTooltip_C_SetPassiveEffect::K2Node_Select_Default' has a wrong offset!");

}

