﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GDF_Vehicle_CombatDrone

#include "Basic.hpp"

#include "BP_GDF_Vehicle_CombatDrone_classes.hpp"
#include "BP_GDF_Vehicle_CombatDrone_parameters.hpp"


namespace SDK
{

// Function BP_GDF_Vehicle_CombatDrone.BP_GDF_Vehicle_CombatDrone_C.ExecuteUbergraph_BP_GDF_Vehicle_CombatDrone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GDF_Vehicle_CombatDrone_C::ExecuteUbergraph_BP_GDF_Vehicle_CombatDrone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_CombatDrone_C", "ExecuteUbergraph_BP_GDF_Vehicle_CombatDrone");

	Params::BP_GDF_Vehicle_CombatDrone_C_ExecuteUbergraph_BP_GDF_Vehicle_CombatDrone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GDF_Vehicle_CombatDrone.BP_GDF_Vehicle_CombatDrone_C.ReceiveOnDeath
// (Event, Protected, BlueprintEvent)

void ABP_GDF_Vehicle_CombatDrone_C::ReceiveOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_CombatDrone_C", "ReceiveOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Vehicle_CombatDrone.BP_GDF_Vehicle_CombatDrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GDF_Vehicle_CombatDrone_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_CombatDrone_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Vehicle_CombatDrone.BP_GDF_Vehicle_CombatDrone_C.K2_GetSelectionMIDs
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>*OutSelectionMIDs                                       (Parm, OutParm)

void ABP_GDF_Vehicle_CombatDrone_C::K2_GetSelectionMIDs(TArray<class UMaterialInstanceDynamic*>* OutSelectionMIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Vehicle_CombatDrone_C", "K2_GetSelectionMIDs");

	Params::BP_GDF_Vehicle_CombatDrone_C_K2_GetSelectionMIDs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSelectionMIDs != nullptr)
		*OutSelectionMIDs = std::move(Parms.OutSelectionMIDs);
}

}

