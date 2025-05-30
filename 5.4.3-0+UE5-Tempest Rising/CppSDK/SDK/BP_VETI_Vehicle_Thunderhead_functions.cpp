﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VETI_Vehicle_Thunderhead

#include "Basic.hpp"

#include "BP_VETI_Vehicle_Thunderhead_classes.hpp"
#include "BP_VETI_Vehicle_Thunderhead_parameters.hpp"


namespace SDK
{

// Function BP_VETI_Vehicle_Thunderhead.BP_VETI_Vehicle_Thunderhead_C.ExecuteUbergraph_BP_VETI_Vehicle_Thunderhead
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VETI_Vehicle_Thunderhead_C::ExecuteUbergraph_BP_VETI_Vehicle_Thunderhead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VETI_Vehicle_Thunderhead_C", "ExecuteUbergraph_BP_VETI_Vehicle_Thunderhead");

	Params::BP_VETI_Vehicle_Thunderhead_C_ExecuteUbergraph_BP_VETI_Vehicle_Thunderhead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VETI_Vehicle_Thunderhead.BP_VETI_Vehicle_Thunderhead_C.ReceiveBeginMovement
// (Event, Protected, BlueprintEvent)

void ABP_VETI_Vehicle_Thunderhead_C::ReceiveBeginMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VETI_Vehicle_Thunderhead_C", "ReceiveBeginMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VETI_Vehicle_Thunderhead.BP_VETI_Vehicle_Thunderhead_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VETI_Vehicle_Thunderhead_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VETI_Vehicle_Thunderhead_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VETI_Vehicle_Thunderhead.BP_VETI_Vehicle_Thunderhead_C.ReceiveEndMovement
// (Event, Protected, BlueprintEvent)

void ABP_VETI_Vehicle_Thunderhead_C::ReceiveEndMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VETI_Vehicle_Thunderhead_C", "ReceiveEndMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VETI_Vehicle_Thunderhead.BP_VETI_Vehicle_Thunderhead_C.ReceiveOnDeath
// (Event, Protected, BlueprintEvent)

void ABP_VETI_Vehicle_Thunderhead_C::ReceiveOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VETI_Vehicle_Thunderhead_C", "ReceiveOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VETI_Vehicle_Thunderhead.BP_VETI_Vehicle_Thunderhead_C.ReceiveUpdateHealthEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VETI_Vehicle_Thunderhead_C::ReceiveUpdateHealthEffects(float HealthPct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VETI_Vehicle_Thunderhead_C", "ReceiveUpdateHealthEffects");

	Params::BP_VETI_Vehicle_Thunderhead_C_ReceiveUpdateHealthEffects Parms{};

	Parms.HealthPct = HealthPct;

	UObject::ProcessEvent(Func, &Parms);
}

}

