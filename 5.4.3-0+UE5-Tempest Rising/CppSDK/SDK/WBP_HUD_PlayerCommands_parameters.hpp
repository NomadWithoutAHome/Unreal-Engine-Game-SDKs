﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_PlayerCommands

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Tempest_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong size on WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature, InVisibility) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature::InVisibility' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature final
{
public:
	class UTedMoviePlayerWidgetV2*                InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UFileMediaSource*                 InSource;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature) == 0x000010, "Wrong size on WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature, InWidget) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature::InWidget' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature, InSource) == 0x000008, "Member 'WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature::InSource' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.ExecuteUbergraph_WBP_HUD_PlayerCommands
// 0x0030 (0x0030 - 0x0000)
struct WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_ComponentBoundEvent_InVisibility;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTedPlayerData*                         K2Node_Event_InPlayerData;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTedPlayerData*                         K2Node_Event_InPrevious;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTedPlayerData*                         K2Node_Event_InCurrent;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTedMoviePlayerWidgetV2*                K2Node_ComponentBoundEvent_InWidget;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UFileMediaSource*                 K2Node_ComponentBoundEvent_InSource;               // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands) == 0x000030, "Wrong size on WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, EntryPoint) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, K2Node_ComponentBoundEvent_InVisibility) == 0x000004, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::K2Node_ComponentBoundEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, K2Node_Event_InPlayerData) == 0x000008, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::K2Node_Event_InPlayerData' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, K2Node_Event_InPrevious) == 0x000010, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::K2Node_Event_InPrevious' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, K2Node_Event_InCurrent) == 0x000018, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::K2Node_Event_InCurrent' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, K2Node_ComponentBoundEvent_InWidget) == 0x000020, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::K2Node_ComponentBoundEvent_InWidget' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands, K2Node_ComponentBoundEvent_InSource) == 0x000028, "Member 'WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands::K2Node_ComponentBoundEvent_InSource' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnOwnedTagsChange_Handler
// 0x0008 (0x0008 - 0x0000)
struct WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler final
{
public:
	class UTedPlayerData*                         InPlayerData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler) == 0x000008, "Wrong size on WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler, InPlayerData) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler::InPlayerData' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnPlayWidgetAnimation
// 0x0068 (0x0068 - 0x0000)
struct WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation final
{
public:
	struct FGameplayTag                           InAnim;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FTedThemeMovie                         LocalAnim;                                         // 0x0008(0x0050)(Edit, BlueprintVisible)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_StartThemed_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation) == 0x000068, "Wrong size on WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation, InAnim) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation::InAnim' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation, LocalAnim) == 0x000008, "Member 'WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation::LocalAnim' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000058, "Member 'WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation, CallFunc_K2_StartThemed_ReturnValue) == 0x000059, "Member 'WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation::CallFunc_K2_StartThemed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation, CallFunc_PlayAnimationForward_ReturnValue) == 0x000060, "Member 'WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnTargetPlayerDataChange
// 0x0010 (0x0010 - 0x0000)
struct WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange final
{
public:
	class UTedPlayerData*                         InPrevious;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTedPlayerData*                         InCurrent;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange) == 0x000010, "Wrong size on WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange, InPrevious) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange::InPrevious' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange, InCurrent) == 0x000008, "Member 'WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange::InCurrent' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.RefreshVisibility
// 0x0018 (0x0018 - 0x0000)
struct WBP_HUD_PlayerCommands_C_RefreshVisibility final
{
public:
	bool                                          bLocalShow;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Local_DesiredVisibility;                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocal_AllowCmds;                                  // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStartupSequenceFinished_ReturnValue;    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTedPlayerData*                         CallFunc_GetTargetPlayerData_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AllowPlayerCommands_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_RefreshVisibility) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_RefreshVisibility");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_RefreshVisibility) == 0x000018, "Wrong size on WBP_HUD_PlayerCommands_C_RefreshVisibility");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, bLocalShow) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::bLocalShow' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, Local_DesiredVisibility) == 0x000001, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::Local_DesiredVisibility' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, bLocal_AllowCmds) == 0x000002, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::bLocal_AllowCmds' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_IsVisible_ReturnValue) == 0x000003, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_IsVisible_ReturnValue_1) == 0x000004, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000005, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_IsStartupSequenceFinished_ReturnValue) == 0x000006, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_IsStartupSequenceFinished_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_GetTargetPlayerData_ReturnValue) == 0x000008, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_GetTargetPlayerData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_RefreshVisibility, CallFunc_AllowPlayerCommands_ReturnValue) == 0x000011, "Member 'WBP_HUD_PlayerCommands_C_RefreshVisibility::CallFunc_AllowPlayerCommands_ReturnValue' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.SetShown
// 0x0005 (0x0005 - 0x0000)
struct WBP_HUD_PlayerCommands_C_SetShown final
{
public:
	bool                                          bInShown;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_SetShown) == 0x000001, "Wrong alignment on WBP_HUD_PlayerCommands_C_SetShown");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_SetShown) == 0x000005, "Wrong size on WBP_HUD_PlayerCommands_C_SetShown");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_SetShown, bInShown) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_SetShown::bInShown' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_SetShown, Temp_bool_Variable) == 0x000001, "Member 'WBP_HUD_PlayerCommands_C_SetShown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_SetShown, Temp_byte_Variable) == 0x000002, "Member 'WBP_HUD_PlayerCommands_C_SetShown::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_SetShown, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_HUD_PlayerCommands_C_SetShown::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_SetShown, K2Node_Select_Default) == 0x000004, "Member 'WBP_HUD_PlayerCommands_C_SetShown::K2Node_Select_Default' has a wrong offset!");

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnCanPlayWidgetAnimation
// 0x0020 (0x0020 - 0x0000)
struct WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation final
{
public:
	struct FGameplayTag                           InAnim;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTedPlayerData*                         CallFunc_GetTargetPlayerData_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AllowPlayerCommands_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation) == 0x000008, "Wrong alignment on WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation");
static_assert(sizeof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation) == 0x000020, "Wrong size on WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation, InAnim) == 0x000000, "Member 'WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation::InAnim' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation, ReturnValue) == 0x000008, "Member 'WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000009, "Member 'WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation, CallFunc_GetTargetPlayerData_ReturnValue) == 0x000010, "Member 'WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation::CallFunc_GetTargetPlayerData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation, CallFunc_AllowPlayerCommands_ReturnValue) == 0x000018, "Member 'WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation::CallFunc_AllowPlayerCommands_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

