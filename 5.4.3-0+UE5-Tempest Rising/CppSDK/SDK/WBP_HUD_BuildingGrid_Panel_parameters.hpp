﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_BuildingGrid_Panel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_HUD_BuildingGrid_Panel.WBP_HUD_BuildingGrid_Panel_C.ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel
// 0x0004 (0x0004 - 0x0000)
struct WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel) == 0x000004, "Wrong alignment on WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel");
static_assert(sizeof(WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel) == 0x000004, "Wrong size on WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel, EntryPoint) == 0x000000, "Member 'WBP_HUD_BuildingGrid_Panel_C_ExecuteUbergraph_WBP_HUD_BuildingGrid_Panel::EntryPoint' has a wrong offset!");

// Function WBP_HUD_BuildingGrid_Panel.WBP_HUD_BuildingGrid_Panel_C.SetupSlotsPadding
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding final
{
public:
	int32                                         LocalRows;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalWantsBottomPadding;                          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalWantsRightPadding;                           // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable_1;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTedContentPanelSlotBase*>       CallFunc_GetContentSlots_OutSlots;                 // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_GetContentSlots_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_BMax_ReturnValue;                         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTedContentPanelSlotBase*               CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_ByteToDouble_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_SlotAsGridSlot_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default;                             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default_1;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Right_ImplicitCast;              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding) == 0x000008, "Wrong alignment on WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding");
static_assert(sizeof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding) == 0x0000C0, "Wrong size on WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, LocalRows) == 0x000000, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::LocalRows' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, bLocalWantsBottomPadding) == 0x000004, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::bLocalWantsBottomPadding' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, bLocalWantsRightPadding) == 0x000005, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::bLocalWantsRightPadding' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, Temp_real_Variable) == 0x000008, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, Temp_bool_Variable) == 0x00001C, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, Temp_real_Variable_1) == 0x000020, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_GetContentSlots_OutSlots) == 0x000028, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_GetContentSlots_OutSlots' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_GetContentSlots_ReturnValue) == 0x000038, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_GetContentSlots_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_BMax_ReturnValue) == 0x000039, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_BMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Conv_ByteToDouble_ReturnValue) == 0x000048, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Conv_ByteToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_SlotAsGridSlot_ReturnValue) == 0x000050, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_SlotAsGridSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Add_IntInt_ReturnValue_2) == 0x000068, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000070, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000078, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_FCeil_ReturnValue) == 0x000080, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, Temp_bool_Variable_1) == 0x000084, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000088, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, K2Node_Select_Default) == 0x000090, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000098, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, K2Node_Select_Default_1) == 0x0000A0, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, K2Node_MakeStruct_Margin) == 0x0000A8, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x0000B8, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding, K2Node_MakeStruct_Right_ImplicitCast) == 0x0000BC, "Member 'WBP_HUD_BuildingGrid_Panel_C_SetupSlotsPadding::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");

}

