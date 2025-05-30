﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SteamProcessingPopup

#include "Basic.hpp"

#include "W_SteamProcessingPopup_classes.hpp"
#include "W_SteamProcessingPopup_parameters.hpp"


namespace SDK
{

// Function W_SteamProcessingPopup.W_SteamProcessingPopup_C.ExecuteUbergraph_W_SteamProcessingPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SteamProcessingPopup_C::ExecuteUbergraph_W_SteamProcessingPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SteamProcessingPopup_C", "ExecuteUbergraph_W_SteamProcessingPopup");

	Params::W_SteamProcessingPopup_C_ExecuteUbergraph_W_SteamProcessingPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SteamProcessingPopup.W_SteamProcessingPopup_C.BndEvt__W_SteamProcessingPopup_W_CloseButton_C_0_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_SteamProcessingPopup_C::BndEvt__W_SteamProcessingPopup_W_CloseButton_C_0_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SteamProcessingPopup_C", "BndEvt__W_SteamProcessingPopup_W_CloseButton_C_0_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SteamProcessingPopup.W_SteamProcessingPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SteamProcessingPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SteamProcessingPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SteamProcessingPopup.W_SteamProcessingPopup_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UW_SteamProcessingPopup_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SteamProcessingPopup_C", "GetVisibility_0");

	Params::W_SteamProcessingPopup_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

