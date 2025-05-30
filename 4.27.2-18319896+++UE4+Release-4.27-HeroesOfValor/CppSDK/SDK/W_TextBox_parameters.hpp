﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TextBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_TextBox.W_TextBox_C.ExecuteUbergraph_W_TextBox
// 0x0040 (0x0040 - 0x0000)
struct W_TextBox_C_ExecuteUbergraph_W_TextBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TextBox_C_ExecuteUbergraph_W_TextBox) == 0x000008, "Wrong alignment on W_TextBox_C_ExecuteUbergraph_W_TextBox");
static_assert(sizeof(W_TextBox_C_ExecuteUbergraph_W_TextBox) == 0x000040, "Wrong size on W_TextBox_C_ExecuteUbergraph_W_TextBox");
static_assert(offsetof(W_TextBox_C_ExecuteUbergraph_W_TextBox, EntryPoint) == 0x000000, "Member 'W_TextBox_C_ExecuteUbergraph_W_TextBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_TextBox_C_ExecuteUbergraph_W_TextBox, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_TextBox_C_ExecuteUbergraph_W_TextBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_TextBox_C_ExecuteUbergraph_W_TextBox, K2Node_ComponentBoundEvent_Text_1) == 0x000008, "Member 'W_TextBox_C_ExecuteUbergraph_W_TextBox::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(W_TextBox_C_ExecuteUbergraph_W_TextBox, K2Node_ComponentBoundEvent_Text) == 0x000020, "Member 'W_TextBox_C_ExecuteUbergraph_W_TextBox::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(W_TextBox_C_ExecuteUbergraph_W_TextBox, K2Node_ComponentBoundEvent_CommitMethod) == 0x000038, "Member 'W_TextBox_C_ExecuteUbergraph_W_TextBox::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");

// Function W_TextBox.W_TextBox_C.BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function W_TextBox.W_TextBox_C.BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'W_TextBox_C_BndEvt__W_TextBox_EditableTextBox_74_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function W_TextBox.W_TextBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_TextBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_TextBox_C_PreConstruct) == 0x000001, "Wrong alignment on W_TextBox_C_PreConstruct");
static_assert(sizeof(W_TextBox_C_PreConstruct) == 0x000001, "Wrong size on W_TextBox_C_PreConstruct");
static_assert(offsetof(W_TextBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_TextBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

