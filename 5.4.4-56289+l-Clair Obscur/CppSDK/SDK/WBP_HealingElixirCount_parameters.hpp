﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HealingElixirCount

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "S_jRPG_Item_DynamicData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_HealingElixirCount.WBP_HealingElixirCount_C.HasCharacterToHeal
// 0x0058 (0x0058 - 0x0000)
struct WBP_HealingElixirCount_C_HasCharacterToHeal final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_CharacterData_C*>            Temp_wildcard_Variable;                            // 0x0008(0x0010)(ReferenceParm)
	class UBP_CharacterData_C*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetMaxHP_MaxHP;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_CharacterData_C*>            CallFunc_GetCharacterCollection_Characters;        // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HealingElixirCount_C_HasCharacterToHeal) == 0x000008, "Wrong alignment on WBP_HealingElixirCount_C_HasCharacterToHeal");
static_assert(sizeof(WBP_HealingElixirCount_C_HasCharacterToHeal) == 0x000058, "Wrong size on WBP_HealingElixirCount_C_HasCharacterToHeal");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, ReturnValue) == 0x000000, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, Temp_wildcard_Variable) == 0x000008, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_GetMaxHP_MaxHP) == 0x000028, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_GetMaxHP_MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_GetCustomGI_ReturnValue) == 0x000038, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_GetCharacterCollection_Characters) == 0x000040, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_GetCharacterCollection_Characters' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_HasCharacterToHeal, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'WBP_HealingElixirCount_C_HasCharacterToHeal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_HealingElixirCount.WBP_HealingElixirCount_C.LoadState
// 0x04A0 (0x04A0 - 0x0000)
struct WBP_HealingElixirCount_C_LoadState final
{
public:
	struct FS_jRPG_Item_DynamicData               local_shardDynamic;                                // 0x0000(0x0138)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x013C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x014C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x015E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F[0x1];                                      // 0x015F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0160(0x0010)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0170(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0180(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01C8(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0210(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0220(0x0010)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_232[0x6];                                      // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DataAsset_Item_Shard_C*             K2Node_DynamicCast_AsBP_Data_Asset_Item_Shard;     // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0248(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0258(0x0048)(HasGetValueTypeHash)
	class UAC_jRPG_InventoryManager_C*            CallFunc_GetInventoryManager_ReturnValue;          // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAC_jRPG_InventoryManager_C*            CallFunc_GetInventoryManager_ReturnValue_1;        // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindItemCountFromInventory_Quantity;      // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_jRPG_GI_Custom_C*                   CallFunc_GetCustomGI_ReturnValue;                  // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x02C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemDynamicFromInventory_Found;       // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_jRPG_Item_DynamicData               CallFunc_FindItemDynamicFromInventory_ItemStruct;  // 0x02D8(0x0138)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0410(0x0014)()
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0428(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0438(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0480(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0490(0x0010)()
};
static_assert(alignof(WBP_HealingElixirCount_C_LoadState) == 0x000008, "Wrong alignment on WBP_HealingElixirCount_C_LoadState");
static_assert(sizeof(WBP_HealingElixirCount_C_LoadState) == 0x0004A0, "Wrong size on WBP_HealingElixirCount_C_LoadState");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, local_shardDynamic) == 0x000000, "Member 'WBP_HealingElixirCount_C_LoadState::local_shardDynamic' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, Temp_bool_Variable) == 0x000138, "Member 'WBP_HealingElixirCount_C_LoadState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, Temp_struct_Variable) == 0x00013C, "Member 'WBP_HealingElixirCount_C_LoadState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, Temp_struct_Variable_1) == 0x00014C, "Member 'WBP_HealingElixirCount_C_LoadState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, Temp_bool_Variable_1) == 0x00015C, "Member 'WBP_HealingElixirCount_C_LoadState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, Temp_byte_Variable) == 0x00015D, "Member 'WBP_HealingElixirCount_C_LoadState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, Temp_byte_Variable_1) == 0x00015E, "Member 'WBP_HealingElixirCount_C_LoadState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Conv_IntToText_ReturnValue) == 0x000160, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000170, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeStruct_FormatArgumentData) == 0x000180, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001C8, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeArray_Array) == 0x000210, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Format_ReturnValue) == 0x000220, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Greater_IntInt_ReturnValue) == 0x000230, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_Select_Default) == 0x000231, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_DynamicCast_AsBP_Data_Asset_Item_Shard) == 0x000238, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_DynamicCast_AsBP_Data_Asset_Item_Shard' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_DynamicCast_bSuccess) == 0x000240, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000248, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeStruct_FormatArgumentData_2) == 0x000258, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_GetInventoryManager_ReturnValue) == 0x0002A0, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_GetInventoryManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_GetInventoryManager_ReturnValue_1) == 0x0002A8, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_GetInventoryManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_FindItemCountFromInventory_Quantity) == 0x0002B0, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_FindItemCountFromInventory_Quantity' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_GetCustomGI_ReturnValue) == 0x0002B8, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_GetCustomGI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002C0, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_Select_Default_1) == 0x0002C4, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_FindItemDynamicFromInventory_Found) == 0x0002D4, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_FindItemDynamicFromInventory_Found' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_FindItemDynamicFromInventory_ItemStruct) == 0x0002D8, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_FindItemDynamicFromInventory_ItemStruct' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeStruct_SlateColor) == 0x000410, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000428, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeStruct_FormatArgumentData_3) == 0x000438, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, K2Node_MakeArray_Array_1) == 0x000480, "Member 'WBP_HealingElixirCount_C_LoadState::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_LoadState, CallFunc_Format_ReturnValue_1) == 0x000490, "Member 'WBP_HealingElixirCount_C_LoadState::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_HealingElixirCount.WBP_HealingElixirCount_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_HealingElixirCount_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HealingElixirCount_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_HealingElixirCount_C_PreConstruct");
static_assert(sizeof(WBP_HealingElixirCount_C_PreConstruct) == 0x000001, "Wrong size on WBP_HealingElixirCount_C_PreConstruct");
static_assert(offsetof(WBP_HealingElixirCount_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_HealingElixirCount_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_HealingElixirCount.WBP_HealingElixirCount_C.ExecuteUbergraph_WBP_HealingElixirCount
// 0x0010 (0x0010 - 0x0000)
struct WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraUIComponent*                    CallFunc_GetNiagaraComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount) == 0x000008, "Wrong alignment on WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount");
static_assert(sizeof(WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount) == 0x000010, "Wrong size on WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount");
static_assert(offsetof(WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount, EntryPoint) == 0x000000, "Member 'WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount, CallFunc_GetNiagaraComponent_ReturnValue) == 0x000008, "Member 'WBP_HealingElixirCount_C_ExecuteUbergraph_WBP_HealingElixirCount::CallFunc_GetNiagaraComponent_ReturnValue' has a wrong offset!");

}

