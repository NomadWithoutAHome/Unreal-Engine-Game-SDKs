﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_KickBanEntry

#include "Basic.hpp"

#include "W_KickBanEntry_classes.hpp"
#include "W_KickBanEntry_parameters.hpp"


namespace SDK
{

// Function W_KickBanEntry.W_KickBanEntry_C.ExecuteUbergraph_W_KickBanEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_KickBanEntry_C::ExecuteUbergraph_W_KickBanEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_KickBanEntry_C", "ExecuteUbergraph_W_KickBanEntry");

	Params::W_KickBanEntry_C_ExecuteUbergraph_W_KickBanEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_KickBanEntry.W_KickBanEntry_C.BndEvt__W_KickBanEntry_W_Button_1_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_KickBanEntry_C::BndEvt__W_KickBanEntry_W_Button_1_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_KickBanEntry_C", "BndEvt__W_KickBanEntry_W_Button_1_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_KickBanEntry.W_KickBanEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_KickBanEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_KickBanEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_KickBanEntry.W_KickBanEntry_C.EnableBanButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_KickBanEntry_C::EnableBanButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_KickBanEntry_C", "EnableBanButton");

	Params::W_KickBanEntry_C_EnableBanButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

