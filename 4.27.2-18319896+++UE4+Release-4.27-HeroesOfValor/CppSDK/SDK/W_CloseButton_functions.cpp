﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CloseButton

#include "Basic.hpp"

#include "W_CloseButton_classes.hpp"
#include "W_CloseButton_parameters.hpp"


namespace SDK
{

// Function W_CloseButton.W_CloseButton_C.ExecuteUbergraph_W_CloseButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CloseButton_C::ExecuteUbergraph_W_CloseButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CloseButton_C", "ExecuteUbergraph_W_CloseButton");

	Params::W_CloseButton_C_ExecuteUbergraph_W_CloseButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CloseButton.W_CloseButton_C.BndEvt__W_Button_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_CloseButton_C::BndEvt__W_Button_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CloseButton_C", "BndEvt__W_Button_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

