﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_EndGameMapVote

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "ST_MapVote_structs.hpp"


namespace SDK::Params
{

// Function W_EndGameMapVote.W_EndGameMapVote_C.ExecuteUbergraph_W_EndGameMapVote
// 0x00F8 (0x00F8 - 0x0000)
struct W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Controller_C*                       K2Node_DynamicCast_AsBP_Controller;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameStateBase_C*                    K2Node_DynamicCast_AsBP_Game_State_Base;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameStateBase_C*                    K2Node_DynamicCast_AsBP_Game_State_Base_1;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MapVote                            CallFunc_Array_Get_Item;                           // 0x00A0(0x0020)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_EndGameMapVote_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_EndGameMapVote_C*                    CallFunc_Array_Get_Item_1;                         // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote) == 0x000008, "Wrong alignment on W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote");
static_assert(sizeof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote) == 0x0000F8, "Wrong size on W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, EntryPoint) == 0x000000, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, Temp_int_Array_Index_Variable) == 0x000010, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_DynamicCast_AsBP_Controller) == 0x000018, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_DynamicCast_AsBP_Controller' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_Event_IsDesignTime) == 0x000040, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Replace_ReturnValue) == 0x000048, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_GetGameState_ReturnValue) == 0x000070, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_DynamicCast_AsBP_Game_State_Base) == 0x000078, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_DynamicCast_AsBP_Game_State_Base' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_GetGameState_ReturnValue_1) == 0x000088, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_DynamicCast_AsBP_Game_State_Base_1) == 0x000090, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_DynamicCast_AsBP_Game_State_Base_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, Temp_int_Loop_Counter_Variable_1) == 0x00009C, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000CC, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x0000D0, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000E0, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Array_Get_Item_1) == 0x0000E8, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Array_Length_ReturnValue_2) == 0x0000F0, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F4, "Member 'W_EndGameMapVote_C_ExecuteUbergraph_W_EndGameMapVote::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function W_EndGameMapVote.W_EndGameMapVote_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_EndGameMapVote_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_EndGameMapVote_C_PreConstruct) == 0x000001, "Wrong alignment on W_EndGameMapVote_C_PreConstruct");
static_assert(sizeof(W_EndGameMapVote_C_PreConstruct) == 0x000001, "Wrong size on W_EndGameMapVote_C_PreConstruct");
static_assert(offsetof(W_EndGameMapVote_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_EndGameMapVote_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_EndGameMapVote.W_EndGameMapVote_C.ShowVoters
// 0x0006 (0x0006 - 0x0000)
struct W_EndGameMapVote_C_ShowVoters final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_EndGameMapVote_C_ShowVoters) == 0x000001, "Wrong alignment on W_EndGameMapVote_C_ShowVoters");
static_assert(sizeof(W_EndGameMapVote_C_ShowVoters) == 0x000006, "Wrong size on W_EndGameMapVote_C_ShowVoters");
static_assert(offsetof(W_EndGameMapVote_C_ShowVoters, ReturnValue) == 0x000000, "Member 'W_EndGameMapVote_C_ShowVoters::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ShowVoters, Temp_bool_Variable) == 0x000001, "Member 'W_EndGameMapVote_C_ShowVoters::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ShowVoters, Temp_byte_Variable) == 0x000002, "Member 'W_EndGameMapVote_C_ShowVoters::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ShowVoters, Temp_byte_Variable_1) == 0x000003, "Member 'W_EndGameMapVote_C_ShowVoters::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ShowVoters, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'W_EndGameMapVote_C_ShowVoters::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_ShowVoters, K2Node_Select_Default) == 0x000005, "Member 'W_EndGameMapVote_C_ShowVoters::K2Node_Select_Default' has a wrong offset!");

// Function W_EndGameMapVote.W_EndGameMapVote_C.SetBorderColor
// 0x0024 (0x0024 - 0x0000)
struct W_EndGameMapVote_C_SetBorderColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_EndGameMapVote_C_SetBorderColor) == 0x000004, "Wrong alignment on W_EndGameMapVote_C_SetBorderColor");
static_assert(sizeof(W_EndGameMapVote_C_SetBorderColor) == 0x000024, "Wrong size on W_EndGameMapVote_C_SetBorderColor");
static_assert(offsetof(W_EndGameMapVote_C_SetBorderColor, ReturnValue) == 0x000000, "Member 'W_EndGameMapVote_C_SetBorderColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_SetBorderColor, CallFunc_IsChecked_ReturnValue) == 0x000010, "Member 'W_EndGameMapVote_C_SetBorderColor::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EndGameMapVote_C_SetBorderColor, CallFunc_SelectColor_ReturnValue) == 0x000014, "Member 'W_EndGameMapVote_C_SetBorderColor::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}

