﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectionDetails_InfoSlots_Defense_Slot

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SelectionDetails_InfoSlots_Defense_Slot.WBP_SelectionDetails_InfoSlots_Defense_Slot_C.GetMaterialsSupportingStates
// 0x0028 (0x0028 - 0x0000)
struct WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates final
{
public:
	TArray<class UMaterialInstanceDynamic*>       OutMIDs;                                           // 0x0000(0x0010)(Parm, OutParm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates) == 0x000008, "Wrong alignment on WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates");
static_assert(sizeof(WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates) == 0x000028, "Wrong size on WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates");
static_assert(offsetof(WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates, OutMIDs) == 0x000000, "Member 'WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates::OutMIDs' has a wrong offset!");
static_assert(offsetof(WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates, K2Node_MakeArray_Array) == 0x000018, "Member 'WBP_SelectionDetails_InfoSlots_Defense_Slot_C_GetMaterialsSupportingStates::K2Node_MakeArray_Array' has a wrong offset!");

}

