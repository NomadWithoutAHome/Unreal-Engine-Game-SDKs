﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectionDetails_SpecialUnitIndicator

#include "Basic.hpp"

#include "Tempest_structs.hpp"


namespace SDK::Params
{

// Function WBP_SelectionDetails_SpecialUnitIndicator.WBP_SelectionDetails_SpecialUnitIndicator_C.SetIcon
// 0x0010 (0x0010 - 0x0000)
struct WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon final
{
public:
	ETedUnitType                                  UnitType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon) == 0x000008, "Wrong alignment on WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon");
static_assert(sizeof(WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon) == 0x000010, "Wrong size on WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon");
static_assert(offsetof(WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon, UnitType) == 0x000000, "Member 'WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon::UnitType' has a wrong offset!");
static_assert(offsetof(WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_SelectionDetails_SpecialUnitIndicator_C_SetIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

