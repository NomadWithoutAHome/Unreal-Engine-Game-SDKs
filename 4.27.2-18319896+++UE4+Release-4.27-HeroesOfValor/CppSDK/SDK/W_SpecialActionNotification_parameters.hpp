﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SpecialActionNotification

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_SpecialActionNotification.W_SpecialActionNotification_C.ExecuteUbergraph_W_SpecialActionNotification
// 0x00A0 (0x00A0 - 0x0000)
struct W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Message;                        // 0x0020(0x0018)()
	struct FLinearColor                           K2Node_CustomEvent_Color;                          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Tag;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_KilledPlayerUsername;           // 0x0050(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification) == 0x000008, "Wrong alignment on W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification");
static_assert(sizeof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification) == 0x0000A0, "Wrong size on W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, EntryPoint) == 0x000000, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000004, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, Temp_bool_Variable) == 0x000005, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, Temp_float_Variable) == 0x000008, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, Temp_float_Variable_1) == 0x00000C, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, K2Node_Select_Default) == 0x000010, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, K2Node_CustomEvent_Message) == 0x000020, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, K2Node_CustomEvent_Color) == 0x000038, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::K2Node_CustomEvent_Color' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, K2Node_CustomEvent_Tag) == 0x000048, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, K2Node_CustomEvent_KilledPlayerUsername) == 0x000050, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::K2Node_CustomEvent_KilledPlayerUsername' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000090, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000098, "Member 'W_SpecialActionNotification_C_ExecuteUbergraph_W_SpecialActionNotification::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function W_SpecialActionNotification.W_SpecialActionNotification_C.UpdateData
// 0x0048 (0x0048 - 0x0000)
struct W_SpecialActionNotification_C_UpdateData final
{
public:
	class FText                                   Message_0;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                           Color_0;                                           // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Tag_0;                                             // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   KilledPlayerUsername_0;                            // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_SpecialActionNotification_C_UpdateData) == 0x000008, "Wrong alignment on W_SpecialActionNotification_C_UpdateData");
static_assert(sizeof(W_SpecialActionNotification_C_UpdateData) == 0x000048, "Wrong size on W_SpecialActionNotification_C_UpdateData");
static_assert(offsetof(W_SpecialActionNotification_C_UpdateData, Message_0) == 0x000000, "Member 'W_SpecialActionNotification_C_UpdateData::Message_0' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_UpdateData, Color_0) == 0x000018, "Member 'W_SpecialActionNotification_C_UpdateData::Color_0' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_UpdateData, Tag_0) == 0x000028, "Member 'W_SpecialActionNotification_C_UpdateData::Tag_0' has a wrong offset!");
static_assert(offsetof(W_SpecialActionNotification_C_UpdateData, KilledPlayerUsername_0) == 0x000030, "Member 'W_SpecialActionNotification_C_UpdateData::KilledPlayerUsername_0' has a wrong offset!");

}

