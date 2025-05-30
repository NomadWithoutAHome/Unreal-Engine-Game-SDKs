﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DYN_Vehicle_VoltaicTank

#include "Basic.hpp"

#include "BP_DYN_Vehicle_VoltaicTank_classes.hpp"
#include "BP_DYN_Vehicle_VoltaicTank_parameters.hpp"


namespace SDK
{

// Function BP_DYN_Vehicle_VoltaicTank.BP_DYN_Vehicle_VoltaicTank_C.ExecuteUbergraph_BP_DYN_Vehicle_VoltaicTank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DYN_Vehicle_VoltaicTank_C::ExecuteUbergraph_BP_DYN_Vehicle_VoltaicTank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Vehicle_VoltaicTank_C", "ExecuteUbergraph_BP_DYN_Vehicle_VoltaicTank");

	Params::BP_DYN_Vehicle_VoltaicTank_C_ExecuteUbergraph_BP_DYN_Vehicle_VoltaicTank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DYN_Vehicle_VoltaicTank.BP_DYN_Vehicle_VoltaicTank_C.ReceiveBeginMovement
// (Event, Protected, BlueprintEvent)

void ABP_DYN_Vehicle_VoltaicTank_C::ReceiveBeginMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Vehicle_VoltaicTank_C", "ReceiveBeginMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DYN_Vehicle_VoltaicTank.BP_DYN_Vehicle_VoltaicTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DYN_Vehicle_VoltaicTank_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Vehicle_VoltaicTank_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DYN_Vehicle_VoltaicTank.BP_DYN_Vehicle_VoltaicTank_C.ReceiveEndMovement
// (Event, Protected, BlueprintEvent)

void ABP_DYN_Vehicle_VoltaicTank_C::ReceiveEndMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Vehicle_VoltaicTank_C", "ReceiveEndMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DYN_Vehicle_VoltaicTank.BP_DYN_Vehicle_VoltaicTank_C.ReceiveOnDeath
// (Event, Protected, BlueprintEvent)

void ABP_DYN_Vehicle_VoltaicTank_C::ReceiveOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Vehicle_VoltaicTank_C", "ReceiveOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DYN_Vehicle_VoltaicTank.BP_DYN_Vehicle_VoltaicTank_C.ReceiveUpdateHealthEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DYN_Vehicle_VoltaicTank_C::ReceiveUpdateHealthEffects(float HealthPct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DYN_Vehicle_VoltaicTank_C", "ReceiveUpdateHealthEffects");

	Params::BP_DYN_Vehicle_VoltaicTank_C_ReceiveUpdateHealthEffects Parms{};

	Parms.HealthPct = HealthPct;

	UObject::ProcessEvent(Func, &Parms);
}

}

