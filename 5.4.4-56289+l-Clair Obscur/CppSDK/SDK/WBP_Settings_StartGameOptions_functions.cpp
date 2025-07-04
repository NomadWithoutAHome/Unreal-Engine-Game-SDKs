﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_StartGameOptions

#include "Basic.hpp"

#include "WBP_Settings_StartGameOptions_classes.hpp"
#include "WBP_Settings_StartGameOptions_parameters.hpp"


namespace SDK
{

// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_StartGameOptions_C::BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Settings_StartGameOptions_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_ApplySettings_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_StartGameOptions_C::BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_Settings_StartGameOptions_C_BndEvt__WBP_Settings_GenericPage_WBP_CommonBoundActionButton_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_Settings_StartGameOptions_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.ExecuteUbergraph_WBP_Settings_StartGameOptions
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_StartGameOptions_C::ExecuteUbergraph_WBP_Settings_StartGameOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "ExecuteUbergraph_WBP_Settings_StartGameOptions");

	Params::WBP_Settings_StartGameOptions_C_ExecuteUbergraph_WBP_Settings_StartGameOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.OnStartGameResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EModalUIResponse                        InUserResponse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Settings_StartGameOptions_C::OnStartGameResponse(EModalUIResponse InUserResponse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "OnStartGameResponse");

	Params::WBP_Settings_StartGameOptions_C_OnStartGameResponse Parms{};

	Parms.InUserResponse = InUserResponse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.RefreshWidgetsWithUserSettings
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Settings_StartGameOptions_C::RefreshWidgetsWithUserSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "RefreshWidgetsWithUserSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Settings_StartGameOptions.WBP_Settings_StartGameOptions_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Settings_StartGameOptions_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Settings_StartGameOptions_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Settings_StartGameOptions_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

