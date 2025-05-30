﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_ObjectivesWidget

#include "Basic.hpp"

#include "WBP_HUD_ObjectivesWidget_classes.hpp"
#include "WBP_HUD_ObjectivesWidget_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_ObjectivesWidget.WBP_HUD_ObjectivesWidget_C.BndEvt__Objectives_Main_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_ObjectivesWidget_C::BndEvt__Objectives_Main_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_ObjectivesWidget_C", "BndEvt__Objectives_Main_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");

	Params::WBP_HUD_ObjectivesWidget_C_BndEvt__Objectives_Main_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_ObjectivesWidget.WBP_HUD_ObjectivesWidget_C.BndEvt__Objectives_Side_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_ObjectivesWidget_C::BndEvt__Objectives_Side_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_ObjectivesWidget_C", "BndEvt__Objectives_Side_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::WBP_HUD_ObjectivesWidget_C_BndEvt__Objectives_Side_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_ObjectivesWidget.WBP_HUD_ObjectivesWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUD_ObjectivesWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_ObjectivesWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_ObjectivesWidget.WBP_HUD_ObjectivesWidget_C.ExecuteUbergraph_WBP_HUD_ObjectivesWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_ObjectivesWidget_C::ExecuteUbergraph_WBP_HUD_ObjectivesWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_ObjectivesWidget_C", "ExecuteUbergraph_WBP_HUD_ObjectivesWidget");

	Params::WBP_HUD_ObjectivesWidget_C_ExecuteUbergraph_WBP_HUD_ObjectivesWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

