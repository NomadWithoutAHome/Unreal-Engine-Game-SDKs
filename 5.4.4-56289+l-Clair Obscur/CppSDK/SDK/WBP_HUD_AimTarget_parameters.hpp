﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_AimTarget

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_HUD_AimTarget.WBP_HUD_AimTarget_C.ExecuteUbergraph_WBP_HUD_AimTarget
// 0x0028 (0x0028 - 0x0000)
struct WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InVisibility;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_1;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmmoCount;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_UseAP_Ammo;                     // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_AmmoLeftCount;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBoolCVar_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget) == 0x000008, "Wrong alignment on WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget");
static_assert(sizeof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget) == 0x000028, "Wrong size on WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, EntryPoint) == 0x000000, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, Temp_bool_Variable) == 0x000004, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, Temp_byte_Variable) == 0x000005, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, Temp_byte_Variable_2) == 0x000008, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, Temp_byte_Variable_3) == 0x000009, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, K2Node_CustomEvent_InVisibility) == 0x00000A, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, K2Node_Select_Default) == 0x00000B, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, K2Node_Select_Default_1) == 0x00000C, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, K2Node_CustomEvent_AmmoCount) == 0x000018, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::K2Node_CustomEvent_AmmoCount' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, K2Node_CustomEvent_UseAP_Ammo) == 0x00001C, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::K2Node_CustomEvent_UseAP_Ammo' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, K2Node_CustomEvent_AmmoLeftCount) == 0x000020, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::K2Node_CustomEvent_AmmoLeftCount' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget, CallFunc_GetBoolCVar_ReturnValue) == 0x000024, "Member 'WBP_HUD_AimTarget_C_ExecuteUbergraph_WBP_HUD_AimTarget::CallFunc_GetBoolCVar_ReturnValue' has a wrong offset!");

// Function WBP_HUD_AimTarget.WBP_HUD_AimTarget_C.InitAmmoCount
// 0x0008 (0x0008 - 0x0000)
struct WBP_HUD_AimTarget_C_InitAmmoCount final
{
public:
	int32                                         AmmoCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseAP_Ammo;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_AimTarget_C_InitAmmoCount) == 0x000004, "Wrong alignment on WBP_HUD_AimTarget_C_InitAmmoCount");
static_assert(sizeof(WBP_HUD_AimTarget_C_InitAmmoCount) == 0x000008, "Wrong size on WBP_HUD_AimTarget_C_InitAmmoCount");
static_assert(offsetof(WBP_HUD_AimTarget_C_InitAmmoCount, AmmoCount) == 0x000000, "Member 'WBP_HUD_AimTarget_C_InitAmmoCount::AmmoCount' has a wrong offset!");
static_assert(offsetof(WBP_HUD_AimTarget_C_InitAmmoCount, UseAP_Ammo) == 0x000004, "Member 'WBP_HUD_AimTarget_C_InitAmmoCount::UseAP_Ammo' has a wrong offset!");

// Function WBP_HUD_AimTarget.WBP_HUD_AimTarget_C.SetCrossHairVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUD_AimTarget_C_SetCrossHairVisibility final
{
public:
	bool                                          InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_AimTarget_C_SetCrossHairVisibility) == 0x000001, "Wrong alignment on WBP_HUD_AimTarget_C_SetCrossHairVisibility");
static_assert(sizeof(WBP_HUD_AimTarget_C_SetCrossHairVisibility) == 0x000001, "Wrong size on WBP_HUD_AimTarget_C_SetCrossHairVisibility");
static_assert(offsetof(WBP_HUD_AimTarget_C_SetCrossHairVisibility, InVisibility) == 0x000000, "Member 'WBP_HUD_AimTarget_C_SetCrossHairVisibility::InVisibility' has a wrong offset!");

// Function WBP_HUD_AimTarget.WBP_HUD_AimTarget_C.SetRemainingAmmo
// 0x0004 (0x0004 - 0x0000)
struct WBP_HUD_AimTarget_C_SetRemainingAmmo final
{
public:
	int32                                         AmmoLeftCount;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_AimTarget_C_SetRemainingAmmo) == 0x000004, "Wrong alignment on WBP_HUD_AimTarget_C_SetRemainingAmmo");
static_assert(sizeof(WBP_HUD_AimTarget_C_SetRemainingAmmo) == 0x000004, "Wrong size on WBP_HUD_AimTarget_C_SetRemainingAmmo");
static_assert(offsetof(WBP_HUD_AimTarget_C_SetRemainingAmmo, AmmoLeftCount) == 0x000000, "Member 'WBP_HUD_AimTarget_C_SetRemainingAmmo::AmmoLeftCount' has a wrong offset!");

}

