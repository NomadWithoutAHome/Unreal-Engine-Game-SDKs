﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ServerManagement

#include "Basic.hpp"

#include "W_ServerManagement_classes.hpp"
#include "W_ServerManagement_parameters.hpp"


namespace SDK
{

// Function W_ServerManagement.W_ServerManagement_C.ExecuteUbergraph_W_ServerManagement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ServerManagement_C::ExecuteUbergraph_W_ServerManagement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "ExecuteUbergraph_W_ServerManagement");

	Params::W_ServerManagement_C_ExecuteUbergraph_W_ServerManagement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ServerManagement.W_ServerManagement_C.BndEvt__W_ServerManagement_W_Tab_KickBan_1_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_ServerManagement_C::BndEvt__W_ServerManagement_W_Tab_KickBan_1_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "BndEvt__W_ServerManagement_W_Tab_KickBan_1_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.BndEvt__W_ServerManagement_W_Tab_KickBan_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_ServerManagement_C::BndEvt__W_ServerManagement_W_Tab_KickBan_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "BndEvt__W_ServerManagement_W_Tab_KickBan_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.ReloadBanList
// (BlueprintCallable, BlueprintEvent)

void UW_ServerManagement_C::ReloadBanList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "ReloadBanList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.ReloadPlayerList
// (BlueprintCallable, BlueprintEvent)

void UW_ServerManagement_C::ReloadPlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "ReloadPlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.BndEvt__W_ServerManagement_W_Tab_Banlist_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_ServerManagement_C::BndEvt__W_ServerManagement_W_Tab_Banlist_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "BndEvt__W_ServerManagement_W_Tab_Banlist_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.BndEvt__W_ServerManagement_W_CloseButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_ServerManagement_C::BndEvt__W_ServerManagement_W_CloseButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "BndEvt__W_ServerManagement_W_CloseButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_ServerManagement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ServerManagement.W_ServerManagement_C.EnableHostFunctions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_ServerManagement_C::EnableHostFunctions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ServerManagement_C", "EnableHostFunctions");

	Params::W_ServerManagement_C_EnableHostFunctions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

