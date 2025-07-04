﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OverlayQuestObjective

#include "Basic.hpp"

#include "FLevelDataEntry_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_OverlayQuestObjective.WBP_OverlayQuestObjective_C.ExecuteUbergraph_WBP_OverlayQuestObjective
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCurrentLevelData_Found;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFLevelDataEntry                       CallFunc_FindCurrentLevelData_LevelData;           // 0x0008(0x01B0)(HasGetValueTypeHash)
	class FName                                   CallFunc_FindCurrentLevelData_RowName;             // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C3[0x5];                                      // 0x01C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetMainQuestObjectiveText_Text;           // 0x01C8(0x0010)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01D8(0x0010)()
	bool                                          CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective) == 0x000008, "Wrong alignment on WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective");
static_assert(sizeof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective) == 0x0001F0, "Wrong size on WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, EntryPoint) == 0x000000, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, CallFunc_FindCurrentLevelData_Found) == 0x000004, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::CallFunc_FindCurrentLevelData_Found' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, CallFunc_FindCurrentLevelData_LevelData) == 0x000008, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::CallFunc_FindCurrentLevelData_LevelData' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, CallFunc_FindCurrentLevelData_RowName) == 0x0001B8, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::CallFunc_FindCurrentLevelData_RowName' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, Temp_bool_Variable) == 0x0001C0, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, Temp_byte_Variable) == 0x0001C1, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, Temp_byte_Variable_1) == 0x0001C2, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, CallFunc_GetMainQuestObjectiveText_Text) == 0x0001C8, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::CallFunc_GetMainQuestObjectiveText_Text' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, CallFunc_MakeLiteralText_ReturnValue) == 0x0001D8, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue) == 0x0001E8, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective, K2Node_Select_Default) == 0x0001E9, "Member 'WBP_OverlayQuestObjective_C_ExecuteUbergraph_WBP_OverlayQuestObjective::K2Node_Select_Default' has a wrong offset!");

}

