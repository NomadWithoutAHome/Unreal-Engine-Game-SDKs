﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Loot_Generic

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "S_MerchantItemQueueData_structs.hpp"
#include "Engine_structs.hpp"
#include "S_LootContext_structs.hpp"


namespace SDK::Params
{

// Function WBP_Loot_Generic.WBP_Loot_Generic_C.SetBoughtItemData
// 0x01E0 (0x01E0 - 0x0000)
struct WBP_Loot_Generic_C_SetBoughtItemData final
{
public:
	struct FS_MerchantItemQueueData               BoughtItem;                                        // 0x0000(0x0138)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         Quantity;                                          // 0x0138(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateSizeRule                                Temp_byte_Variable;                                // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x013E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateSizeRule                                Temp_byte_Variable_1;                              // 0x013F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateSizeRule                                K2Node_Select_Default;                             // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x2];                                      // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0144(0x0008)(NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x014F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A8(0x0010)(ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C0(0x0010)()
	bool                                          Temp_bool_Variable_2;                              // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D2[0x6];                                      // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Loot_Generic_C_SetBoughtItemData) == 0x000008, "Wrong alignment on WBP_Loot_Generic_C_SetBoughtItemData");
static_assert(sizeof(WBP_Loot_Generic_C_SetBoughtItemData) == 0x0001E0, "Wrong size on WBP_Loot_Generic_C_SetBoughtItemData");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, BoughtItem) == 0x000000, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::BoughtItem' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Quantity) == 0x000138, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Quantity' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_bool_Variable) == 0x00013C, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_byte_Variable) == 0x00013D, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, CallFunc_TextIsEmpty_ReturnValue) == 0x00013E, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_byte_Variable_1) == 0x00013F, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_bool_Variable_1) == 0x000140, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, K2Node_Select_Default) == 0x000141, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, K2Node_MakeStruct_SlateChildSize) == 0x000144, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_byte_Variable_2) == 0x00014C, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_byte_Variable_3) == 0x00014D, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, K2Node_Select_Default_1) == 0x00014E, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00014F, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000150, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_byte_Variable_4) == 0x000158, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, K2Node_MakeArray_Array) == 0x0001A8, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_byte_Variable_5) == 0x0001B8, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, CallFunc_Format_ReturnValue) == 0x0001C0, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, Temp_bool_Variable_2) == 0x0001D0, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, K2Node_Select_Default_2) == 0x0001D1, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetBoughtItemData, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x0001D8, "Member 'WBP_Loot_Generic_C_SetBoughtItemData::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");

// Function WBP_Loot_Generic.WBP_Loot_Generic_C.SetItemData
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Loot_Generic_C_SetItemData final
{
public:
	class UBP_GeneratedItemInfo_Base_C*           GeneratedItemInfo;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LootContext                         LootContext;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GeneratedItemInfo_Item_C*           K2Node_DynamicCast_AsBP_Generated_Item_Info_Item;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateSizeRule                                Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemQuantity_Quantity;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0010)()
	ESlateSizeRule                                Temp_byte_Variable_1;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateSizeRule                                K2Node_Select_Default;                             // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x00A4(0x0008)(NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Loot_Generic_C_SetItemData) == 0x000008, "Wrong alignment on WBP_Loot_Generic_C_SetItemData");
static_assert(sizeof(WBP_Loot_Generic_C_SetItemData) == 0x0000C0, "Wrong size on WBP_Loot_Generic_C_SetItemData");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, GeneratedItemInfo) == 0x000000, "Member 'WBP_Loot_Generic_C_SetItemData::GeneratedItemInfo' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, LootContext) == 0x000008, "Member 'WBP_Loot_Generic_C_SetItemData::LootContext' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_bool_Variable) == 0x00000C, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_DynamicCast_AsBP_Generated_Item_Info_Item) == 0x000010, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_DynamicCast_AsBP_Generated_Item_Info_Item' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_byte_Variable) == 0x000019, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, CallFunc_GetItemQuantity_Quantity) == 0x00001C, "Member 'WBP_Loot_Generic_C_SetItemData::CallFunc_GetItemQuantity_Quantity' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Loot_Generic_C_SetItemData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000028, "Member 'WBP_Loot_Generic_C_SetItemData::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_MakeArray_Array) == 0x000078, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, CallFunc_TextIsEmpty_ReturnValue) == 0x000088, "Member 'WBP_Loot_Generic_C_SetItemData::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_Loot_Generic_C_SetItemData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_byte_Variable_1) == 0x0000A0, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_bool_Variable_1) == 0x0000A1, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_Select_Default) == 0x0000A2, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_byte_Variable_2) == 0x0000A3, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_MakeStruct_SlateChildSize) == 0x0000A4, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_byte_Variable_3) == 0x0000AC, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_byte_Variable_4) == 0x0000AD, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_Select_Default_1) == 0x0000AE, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_byte_Variable_5) == 0x0000AF, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, Temp_bool_Variable_2) == 0x0000B0, "Member 'WBP_Loot_Generic_C_SetItemData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, K2Node_Select_Default_2) == 0x0000B1, "Member 'WBP_Loot_Generic_C_SetItemData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Loot_Generic_C_SetItemData, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x0000B8, "Member 'WBP_Loot_Generic_C_SetItemData::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");

}

