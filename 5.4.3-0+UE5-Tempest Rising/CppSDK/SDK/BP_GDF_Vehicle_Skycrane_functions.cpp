﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GDF_Vehicle_Skycrane

#include "Basic.hpp"

#include "BP_GDF_Vehicle_Skycrane_classes.hpp"
#include "BP_GDF_Vehicle_Skycrane_parameters.hpp"


namespace SDK
{

// Function BP_GDF_Vehicle_Skycrane.BP_GDF_Vehicle_Skycrane_C.Added_26E644EB4653C9F68DEEB0AC78B43F6C
// (BlueprintCallable, BlueprintEvent)

void ABP_GDF_Vehicle_Skycrane_C::Added_26E644EB4653C9F68DEEB0AC78B43F6C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_Skycrane_C", "Added_26E644EB4653C9F68DEEB0AC78B43F6C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Vehicle_Skycrane.BP_GDF_Vehicle_Skycrane_C.ExecuteUbergraph_BP_GDF_Vehicle_Skycrane
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GDF_Vehicle_Skycrane_C::ExecuteUbergraph_BP_GDF_Vehicle_Skycrane(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_Skycrane_C", "ExecuteUbergraph_BP_GDF_Vehicle_Skycrane");

	Params::BP_GDF_Vehicle_Skycrane_C_ExecuteUbergraph_BP_GDF_Vehicle_Skycrane Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GDF_Vehicle_Skycrane.BP_GDF_Vehicle_Skycrane_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GDF_Vehicle_Skycrane_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_Skycrane_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Vehicle_Skycrane.BP_GDF_Vehicle_Skycrane_C.ReceiveOnDeath
// (Event, Protected, BlueprintEvent)

void ABP_GDF_Vehicle_Skycrane_C::ReceiveOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_Skycrane_C", "ReceiveOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Vehicle_Skycrane.BP_GDF_Vehicle_Skycrane_C.ReceiveUpdateHealthEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GDF_Vehicle_Skycrane_C::ReceiveUpdateHealthEffects(float HealthPct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_Skycrane_C", "ReceiveUpdateHealthEffects");

	Params::BP_GDF_Vehicle_Skycrane_C_ReceiveUpdateHealthEffects Parms{};

	Parms.HealthPct = HealthPct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GDF_Vehicle_Skycrane.BP_GDF_Vehicle_Skycrane_C.Removed_19BEC00944F584FACD311A99612FF5C2
// (BlueprintCallable, BlueprintEvent)

void ABP_GDF_Vehicle_Skycrane_C::Removed_19BEC00944F584FACD311A99612FF5C2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_Skycrane_C", "Removed_19BEC00944F584FACD311A99612FF5C2");

	UObject::ProcessEvent(Func, nullptr);
}

}

