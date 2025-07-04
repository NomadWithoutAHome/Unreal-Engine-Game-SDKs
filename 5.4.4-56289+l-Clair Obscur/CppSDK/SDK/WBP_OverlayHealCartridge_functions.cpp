﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OverlayHealCartridge

#include "Basic.hpp"

#include "WBP_OverlayHealCartridge_classes.hpp"
#include "WBP_OverlayHealCartridge_parameters.hpp"


namespace SDK
{

// Function WBP_OverlayHealCartridge.WBP_OverlayHealCartridge_C.BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OverlayHealCartridge_C::BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverlayHealCartridge_C", "BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_OverlayHealCartridge_C_BndEvt__WBP_OverviewHealCartridge_HealPrompt_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OverlayHealCartridge.WBP_OverlayHealCartridge_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_OverlayHealCartridge_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverlayHealCartridge_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OverlayHealCartridge.WBP_OverlayHealCartridge_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_OverlayHealCartridge_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverlayHealCartridge_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OverlayHealCartridge.WBP_OverlayHealCartridge_C.ExecuteUbergraph_WBP_OverlayHealCartridge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OverlayHealCartridge_C::ExecuteUbergraph_WBP_OverlayHealCartridge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverlayHealCartridge_C", "ExecuteUbergraph_WBP_OverlayHealCartridge");

	Params::WBP_OverlayHealCartridge_C_ExecuteUbergraph_WBP_OverlayHealCartridge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OverlayHealCartridge.WBP_OverlayHealCartridge_C.OnTutorialTriggerHeal
// (BlueprintCallable, BlueprintEvent)

void UWBP_OverlayHealCartridge_C::OnTutorialTriggerHeal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverlayHealCartridge_C", "OnTutorialTriggerHeal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OverlayHealCartridge.WBP_OverlayHealCartridge_C.SetPromptActive
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OverlayHealCartridge_C::SetPromptActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OverlayHealCartridge_C", "SetPromptActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

