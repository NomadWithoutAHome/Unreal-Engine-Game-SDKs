﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_TurnOrder_Portrait

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "S_jRPG_CharacterDefinition_structs.hpp"
#include "Engine_structs.hpp"
#include "S_jRPG_Enemy_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_HUD_TurnOrder_Portrait.WBP_HUD_TurnOrder_Portrait_C.Appear_Event
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUD_TurnOrder_Portrait_C_Appear_Event final
{
public:
	bool                                          PlayAnim;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_TurnOrder_Portrait_C_Appear_Event) == 0x000001, "Wrong alignment on WBP_HUD_TurnOrder_Portrait_C_Appear_Event");
static_assert(sizeof(WBP_HUD_TurnOrder_Portrait_C_Appear_Event) == 0x000001, "Wrong size on WBP_HUD_TurnOrder_Portrait_C_Appear_Event");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_Appear_Event, PlayAnim) == 0x000000, "Member 'WBP_HUD_TurnOrder_Portrait_C_Appear_Event::PlayAnim' has a wrong offset!");

// Function WBP_HUD_TurnOrder_Portrait.WBP_HUD_TurnOrder_Portrait_C.ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait
// 0x0648 (0x0648 - 0x0000)
struct WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PlayAnim;                       // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAC_jRPG_CharacterBattleStats_C*        K2Node_CustomEvent_CharacterStats;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0038(0x0010)()
	struct FS_jRPG_CharacterDefinition            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0328)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0378(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03D0(0x0010)()
	bool                                          CallFunc_GetEnemyDataTableRow_Found;               // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_jRPG_Enemy                          CallFunc_GetEnemyDataTableRow_EnemyData;           // 0x03E8(0x0200)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x05E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x05F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0610(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x0619(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x061A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_4;          // 0x061B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_5;          // 0x061C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_6;          // 0x061D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_7;          // 0x061E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x061F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0621(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0622(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0623(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0624(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_625[0x3];                                      // 0x0625(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0628(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0631(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x0632(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0633(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0634(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Highlighted;                    // 0x0635(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0636(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_637[0x1];                                      // 0x0637(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x0638(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait) == 0x000008, "Wrong alignment on WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait");
static_assert(sizeof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait) == 0x000648, "Wrong size on WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, EntryPoint) == 0x000000, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable) == 0x000004, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_bool_Variable) == 0x000010, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_1) == 0x000011, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_2) == 0x000012, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_bool_Variable_1) == 0x000013, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_3) == 0x000014, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_4) == 0x000015, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_bool_Variable_2) == 0x000016, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_5) == 0x000017, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_6) == 0x000018, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_Event_IsDesignTime) == 0x000019, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_CustomEvent_PlayAnim) == 0x00001A, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_CustomEvent_PlayAnim' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_Select_Default) == 0x00001B, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_CustomEvent_CharacterStats) == 0x000020, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_CustomEvent_CharacterStats' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_Conv_NameToText_ReturnValue) == 0x000038, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000370, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_MakeStruct_FormatArgumentData) == 0x000378, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_MakeArray_Array) == 0x0003C0, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_Format_ReturnValue) == 0x0003D0, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_GetEnemyDataTableRow_Found) == 0x0003E0, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_GetEnemyDataTableRow_Found' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_GetEnemyDataTableRow_EnemyData) == 0x0003E8, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_GetEnemyDataTableRow_EnemyData' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_MakeStruct_Margin) == 0x0005E8, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_GetObjectName_ReturnValue) == 0x0005F8, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000608, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_PlayAnimation_ReturnValue_1) == 0x000610, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000618, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x000619, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_3) == 0x00061A, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_4) == 0x00061B, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_5) == 0x00061C, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_6) == 0x00061D, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_EqualEqual_StrStr_ReturnValue_7) == 0x00061E, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_EqualEqual_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue) == 0x00061F, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue_1) == 0x000620, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_byte_Variable_7) == 0x000621, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue_2) == 0x000622, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue_3) == 0x000623, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue_4) == 0x000624, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_PlayAnimation_ReturnValue_2) == 0x000628, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue_5) == 0x000630, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, Temp_bool_Variable_3) == 0x000631, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_BooleanOR_ReturnValue_6) == 0x000632, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_Select_Default_1) == 0x000633, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_Select_Default_2) == 0x000634, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_CustomEvent_Highlighted) == 0x000635, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_CustomEvent_Highlighted' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_Select_Default_3) == 0x000636, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000638, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait, K2Node_MakeStruct_Top_ImplicitCast) == 0x000640, "Member 'WBP_HUD_TurnOrder_Portrait_C_ExecuteUbergraph_WBP_HUD_TurnOrder_Portrait::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

// Function WBP_HUD_TurnOrder_Portrait.WBP_HUD_TurnOrder_Portrait_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUD_TurnOrder_Portrait_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_TurnOrder_Portrait_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_HUD_TurnOrder_Portrait_C_PreConstruct");
static_assert(sizeof(WBP_HUD_TurnOrder_Portrait_C_PreConstruct) == 0x000001, "Wrong size on WBP_HUD_TurnOrder_Portrait_C_PreConstruct");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_HUD_TurnOrder_Portrait_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_HUD_TurnOrder_Portrait.WBP_HUD_TurnOrder_Portrait_C.SetCharacter
// 0x0008 (0x0008 - 0x0000)
struct WBP_HUD_TurnOrder_Portrait_C_SetCharacter final
{
public:
	class UAC_jRPG_CharacterBattleStats_C*        CharacterStats;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_TurnOrder_Portrait_C_SetCharacter) == 0x000008, "Wrong alignment on WBP_HUD_TurnOrder_Portrait_C_SetCharacter");
static_assert(sizeof(WBP_HUD_TurnOrder_Portrait_C_SetCharacter) == 0x000008, "Wrong size on WBP_HUD_TurnOrder_Portrait_C_SetCharacter");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_SetCharacter, CharacterStats) == 0x000000, "Member 'WBP_HUD_TurnOrder_Portrait_C_SetCharacter::CharacterStats' has a wrong offset!");

// Function WBP_HUD_TurnOrder_Portrait.WBP_HUD_TurnOrder_Portrait_C.SetHighlighted
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUD_TurnOrder_Portrait_C_SetHighlighted final
{
public:
	bool                                          Highlighted;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_TurnOrder_Portrait_C_SetHighlighted) == 0x000001, "Wrong alignment on WBP_HUD_TurnOrder_Portrait_C_SetHighlighted");
static_assert(sizeof(WBP_HUD_TurnOrder_Portrait_C_SetHighlighted) == 0x000001, "Wrong size on WBP_HUD_TurnOrder_Portrait_C_SetHighlighted");
static_assert(offsetof(WBP_HUD_TurnOrder_Portrait_C_SetHighlighted, Highlighted) == 0x000000, "Member 'WBP_HUD_TurnOrder_Portrait_C_SetHighlighted::Highlighted' has a wrong offset!");

}

