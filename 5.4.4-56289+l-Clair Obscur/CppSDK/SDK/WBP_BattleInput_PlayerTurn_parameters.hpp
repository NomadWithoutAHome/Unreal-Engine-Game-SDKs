﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattleInput_PlayerTurn

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BindBackButton
// 0x0014 (0x0014 - 0x0000)
struct WBP_BattleInput_PlayerTurn_C_BindBackButton final
{
public:
	TDelegate<void(class UCommonButtonBase* Button)> ClickedEvent;                                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleInput_PlayerTurn_C_BindBackButton) == 0x000004, "Wrong alignment on WBP_BattleInput_PlayerTurn_C_BindBackButton");
static_assert(sizeof(WBP_BattleInput_PlayerTurn_C_BindBackButton) == 0x000014, "Wrong size on WBP_BattleInput_PlayerTurn_C_BindBackButton");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_BindBackButton, ClickedEvent) == 0x000000, "Member 'WBP_BattleInput_PlayerTurn_C_BindBackButton::ClickedEvent' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_BindBackButton, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WBP_BattleInput_PlayerTurn_C_BindBackButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.ExecuteUbergraph_WBP_BattleInput_PlayerTurn
// 0x0088 (0x0088 - 0x0000)
struct WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsSkipImpossible)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAC_jRPG_BattleManager_C*               CallFunc_GetBattleManager_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAC_jRPG_BattleManager_C*               CallFunc_GetBattleManager_ReturnValue_1;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAC_jRPG_BattleManager_C*               CallFunc_GetBattleManager_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanFleeCurrentFight_FleeImpossible;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAC_jRPG_BattleManager_C*               CallFunc_GetBattleManager_ReturnValue_3;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsSkipImpossible)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAC_jRPG_BattleManager_C*               CallFunc_GetBattleManager_ReturnValue_4;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkipImpossible_SkipImpossible;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn) == 0x000008, "Wrong alignment on WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn");
static_assert(sizeof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn) == 0x000088, "Wrong size on WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, EntryPoint) == 0x000000, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, Temp_byte_Variable) == 0x000014, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, Temp_byte_Variable_1) == 0x000015, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_GetBattleManager_ReturnValue) == 0x000028, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_GetBattleManager_ReturnValue_1) == 0x000030, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_GetBattleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, K2Node_ComponentBoundEvent_Button_1) == 0x000038, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, K2Node_ComponentBoundEvent_Button) == 0x000040, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_GetBattleManager_ReturnValue_2) == 0x000048, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_GetBattleManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_CanFleeCurrentFight_FleeImpossible) == 0x000050, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_CanFleeCurrentFight_FleeImpossible' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, Temp_bool_Variable) == 0x000051, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_GetBattleManager_ReturnValue_3) == 0x000058, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_GetBattleManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, K2Node_Select_Default) == 0x000060, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_GetBattleManager_ReturnValue_4) == 0x000078, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_GetBattleManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn, CallFunc_IsSkipImpossible_SkipImpossible) == 0x000080, "Member 'WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn::CallFunc_IsSkipImpossible_SkipImpossible' has a wrong offset!");

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.OnSkipImpossibleChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged final
{
public:
	bool                                          IsSkipImpossible;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged) == 0x000001, "Wrong alignment on WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged");
static_assert(sizeof(WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged) == 0x000001, "Wrong size on WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged, IsSkipImpossible) == 0x000000, "Member 'WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged::IsSkipImpossible' has a wrong offset!");

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.UnbindBackButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_BattleInput_PlayerTurn_C_UnbindBackButton final
{
public:
	TDelegate<void(class UCommonButtonBase* Button)> ClickedEvent;                                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleInput_PlayerTurn_C_UnbindBackButton) == 0x000004, "Wrong alignment on WBP_BattleInput_PlayerTurn_C_UnbindBackButton");
static_assert(sizeof(WBP_BattleInput_PlayerTurn_C_UnbindBackButton) == 0x000010, "Wrong size on WBP_BattleInput_PlayerTurn_C_UnbindBackButton");
static_assert(offsetof(WBP_BattleInput_PlayerTurn_C_UnbindBackButton, ClickedEvent) == 0x000000, "Member 'WBP_BattleInput_PlayerTurn_C_UnbindBackButton::ClickedEvent' has a wrong offset!");

}

