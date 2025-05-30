﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Button

#include "Basic.hpp"

#include "W_Button_classes.hpp"
#include "W_Button_parameters.hpp"


namespace SDK
{

// Function W_Button.W_Button_C.ExecuteUbergraph_W_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Button_C::ExecuteUbergraph_W_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Button_C", "ExecuteUbergraph_W_Button");

	Params::W_Button_C_ExecuteUbergraph_W_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Button.W_Button_C.ReloadButton
// (BlueprintCallable, BlueprintEvent)

void UW_Button_C::ReloadButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Button_C", "ReloadButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Button.W_Button_C.BndEvt__W_Button_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_Button_C::BndEvt__W_Button_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Button_C", "BndEvt__W_Button_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Button.W_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Button_C", "PreConstruct");

	Params::W_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Button.W_Button_C.SetHighlighted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlighted_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Button_C::SetHighlighted(bool Highlighted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Button_C", "SetHighlighted");

	Params::W_Button_C_SetHighlighted Parms{};

	Parms.Highlighted_0 = Highlighted_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

