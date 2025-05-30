﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Generic_Popup

#include "Basic.hpp"

#include "WBP_Generic_Popup_classes.hpp"
#include "WBP_Generic_Popup_parameters.hpp"


namespace SDK
{

// Function WBP_Generic_Popup.WBP_Generic_Popup_C.BndEvt__WBP_Generic_Popup_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Generic_Popup_C::BndEvt__WBP_Generic_Popup_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Generic_Popup_C", "BndEvt__WBP_Generic_Popup_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_Generic_Popup_C_BndEvt__WBP_Generic_Popup_TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Generic_Popup.WBP_Generic_Popup_C.CollapseAllSpacerWidgets
// (Event, Public, BlueprintEvent)

void UWBP_Generic_Popup_C::CollapseAllSpacerWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Generic_Popup_C", "CollapseAllSpacerWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Generic_Popup.WBP_Generic_Popup_C.ExecuteUbergraph_WBP_Generic_Popup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Generic_Popup_C::ExecuteUbergraph_WBP_Generic_Popup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Generic_Popup_C", "ExecuteUbergraph_WBP_Generic_Popup");

	Params::WBP_Generic_Popup_C_ExecuteUbergraph_WBP_Generic_Popup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Generic_Popup.WBP_Generic_Popup_C.K2_OnErrorShown
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      ErrorMessage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Generic_Popup_C::K2_OnErrorShown(const class FText& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Generic_Popup_C", "K2_OnErrorShown");

	Params::WBP_Generic_Popup_C_K2_OnErrorShown Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Generic_Popup.WBP_Generic_Popup_C.K2_OnShow
// (Event, Public, BlueprintEvent)

void UWBP_Generic_Popup_C::K2_OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Generic_Popup_C", "K2_OnShow");

	UObject::ProcessEvent(Func, nullptr);
}

}

