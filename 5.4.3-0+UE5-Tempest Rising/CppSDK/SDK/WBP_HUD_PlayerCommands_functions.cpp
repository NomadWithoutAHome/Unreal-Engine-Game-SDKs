﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_PlayerCommands

#include "Basic.hpp"

#include "WBP_HUD_PlayerCommands_classes.hpp"
#include "WBP_HUD_PlayerCommands_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");

	Params::WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_CommandsPanel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTedMoviePlayerWidgetV2*          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const class UFileMediaSource*           InSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature(class UTedMoviePlayerWidgetV2* InWidget, const class UFileMediaSource* InSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature");

	Params::WBP_HUD_PlayerCommands_C_BndEvt__WBP_HUD_PlayerCommands_WBP_MoviePlayer_Fill_K2Node_ComponentBoundEvent_2_TedMoviePlayerWidgetEventDelegate__DelegateSignature Parms{};

	Parms.InWidget = InWidget;
	Parms.InSource = InSource;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUD_PlayerCommands_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.ExecuteUbergraph_WBP_HUD_PlayerCommands
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::ExecuteUbergraph_WBP_HUD_PlayerCommands(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "ExecuteUbergraph_WBP_HUD_PlayerCommands");

	Params::WBP_HUD_PlayerCommands_C_ExecuteUbergraph_WBP_HUD_PlayerCommands Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_PlayerCommands_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnOwnedTagsChange_Handler
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTedPlayerData*                   InPlayerData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::OnOwnedTagsChange_Handler(class UTedPlayerData* InPlayerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "OnOwnedTagsChange_Handler");

	Params::WBP_HUD_PlayerCommands_C_OnOwnedTagsChange_Handler Parms{};

	Parms.InPlayerData = InPlayerData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnPlayWidgetAnimation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              InAnim                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::OnPlayWidgetAnimation(const struct FGameplayTag& InAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "OnPlayWidgetAnimation");

	Params::WBP_HUD_PlayerCommands_C_OnPlayWidgetAnimation Parms{};

	Parms.InAnim = std::move(InAnim);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnTargetPlayerDataChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTedPlayerData*                   InPrevious                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTedPlayerData*                   InCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::OnTargetPlayerDataChange(class UTedPlayerData* InPrevious, class UTedPlayerData* InCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "OnTargetPlayerDataChange");

	Params::WBP_HUD_PlayerCommands_C_OnTargetPlayerDataChange Parms{};

	Parms.InPrevious = InPrevious;
	Parms.InCurrent = InCurrent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.RefreshVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_PlayerCommands_C::RefreshVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "RefreshVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.SequenceEvent__ENTRYPOINTWBP_HUD_PlayerCommands
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_PlayerCommands_C::SequenceEvent__ENTRYPOINTWBP_HUD_PlayerCommands()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "SequenceEvent__ENTRYPOINTWBP_HUD_PlayerCommands");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.SequenceEvent__ENTRYPOINTWBP_HUD_PlayerCommands_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_PlayerCommands_C::SequenceEvent__ENTRYPOINTWBP_HUD_PlayerCommands_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "SequenceEvent__ENTRYPOINTWBP_HUD_PlayerCommands_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.SetShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInShown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_PlayerCommands_C::SetShown(bool bInShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "SetShown");

	Params::WBP_HUD_PlayerCommands_C_SetShown Parms{};

	Parms.bInShown = bInShown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_PlayerCommands_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_PlayerCommands.WBP_HUD_PlayerCommands_C.OnCanPlayWidgetAnimation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayTag&              InAnim                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_HUD_PlayerCommands_C::OnCanPlayWidgetAnimation(const struct FGameplayTag& InAnim) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_PlayerCommands_C", "OnCanPlayWidgetAnimation");

	Params::WBP_HUD_PlayerCommands_C_OnCanPlayWidgetAnimation Parms{};

	Parms.InAnim = std::move(InAnim);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

