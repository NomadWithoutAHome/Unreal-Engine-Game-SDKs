﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_P51

#include "Basic.hpp"

#include "BP_P51_classes.hpp"
#include "BP_P51_parameters.hpp"


namespace SDK
{

// Function BP_P51.BP_P51_C.ExecuteUbergraph_BP_P51
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_P51_C::ExecuteUbergraph_BP_P51(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P51_C", "ExecuteUbergraph_BP_P51");

	Params::BP_P51_C_ExecuteUbergraph_BP_P51 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P51.BP_P51_C.InitVehicleThemeSkin
// (BlueprintCallable, BlueprintEvent)

void ABP_P51_C::InitVehicleThemeSkin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P51_C", "InitVehicleThemeSkin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P51.BP_P51_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_P51_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P51_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

