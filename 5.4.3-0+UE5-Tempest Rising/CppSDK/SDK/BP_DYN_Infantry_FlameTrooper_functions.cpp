﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DYN_Infantry_FlameTrooper

#include "Basic.hpp"

#include "BP_DYN_Infantry_FlameTrooper_classes.hpp"
#include "BP_DYN_Infantry_FlameTrooper_parameters.hpp"


namespace SDK
{

// Function BP_DYN_Infantry_FlameTrooper.BP_DYN_Infantry_FlameTrooper_C.ExecuteUbergraph_BP_DYN_Infantry_FlameTrooper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DYN_Infantry_FlameTrooper_C::ExecuteUbergraph_BP_DYN_Infantry_FlameTrooper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Infantry_FlameTrooper_C", "ExecuteUbergraph_BP_DYN_Infantry_FlameTrooper");

	Params::BP_DYN_Infantry_FlameTrooper_C_ExecuteUbergraph_BP_DYN_Infantry_FlameTrooper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DYN_Infantry_FlameTrooper.BP_DYN_Infantry_FlameTrooper_C.ReceiveOnDeath
// (Event, Protected, BlueprintEvent)

void ABP_DYN_Infantry_FlameTrooper_C::ReceiveOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Infantry_FlameTrooper_C", "ReceiveOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}

}

