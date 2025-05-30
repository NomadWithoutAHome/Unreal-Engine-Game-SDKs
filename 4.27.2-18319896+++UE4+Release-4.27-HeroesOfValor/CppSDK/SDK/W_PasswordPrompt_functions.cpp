﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PasswordPrompt

#include "Basic.hpp"

#include "W_PasswordPrompt_classes.hpp"
#include "W_PasswordPrompt_parameters.hpp"


namespace SDK
{

// Function W_PasswordPrompt.W_PasswordPrompt_C.ExecuteUbergraph_W_PasswordPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PasswordPrompt_C::ExecuteUbergraph_W_PasswordPrompt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PasswordPrompt_C", "ExecuteUbergraph_W_PasswordPrompt");

	Params::W_PasswordPrompt_C_ExecuteUbergraph_W_PasswordPrompt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PasswordPrompt.W_PasswordPrompt_C.BndEvt__W_PasswordPrompt_W_CloseButton_C_0_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_PasswordPrompt_C::BndEvt__W_PasswordPrompt_W_CloseButton_C_0_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PasswordPrompt_C", "BndEvt__W_PasswordPrompt_W_CloseButton_C_0_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PasswordPrompt.W_PasswordPrompt_C.BndEvt__W_PasswordPrompt_W_Button_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_PasswordPrompt_C::BndEvt__W_PasswordPrompt_W_Button_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PasswordPrompt_C", "BndEvt__W_PasswordPrompt_W_Button_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

