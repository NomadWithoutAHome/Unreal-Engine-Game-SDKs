﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Destructible_FlameTrooperGrenade

#include "Basic.hpp"

#include "BP_Destructible_FlameTrooperGrenade_classes.hpp"
#include "BP_Destructible_FlameTrooperGrenade_parameters.hpp"


namespace SDK
{

// Function BP_Destructible_FlameTrooperGrenade.BP_Destructible_FlameTrooperGrenade_C.ExecuteUbergraph_BP_Destructible_FlameTrooperGrenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Destructible_FlameTrooperGrenade_C::ExecuteUbergraph_BP_Destructible_FlameTrooperGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Destructible_FlameTrooperGrenade_C", "ExecuteUbergraph_BP_Destructible_FlameTrooperGrenade");

	Params::BP_Destructible_FlameTrooperGrenade_C_ExecuteUbergraph_BP_Destructible_FlameTrooperGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Destructible_FlameTrooperGrenade.BP_Destructible_FlameTrooperGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Destructible_FlameTrooperGrenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Destructible_FlameTrooperGrenade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

