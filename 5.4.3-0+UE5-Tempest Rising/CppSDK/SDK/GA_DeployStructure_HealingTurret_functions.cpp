﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DeployStructure_HealingTurret

#include "Basic.hpp"

#include "GA_DeployStructure_HealingTurret_classes.hpp"
#include "GA_DeployStructure_HealingTurret_parameters.hpp"


namespace SDK
{

// Function GA_DeployStructure_HealingTurret.GA_DeployStructure_HealingTurret_C.ExecuteUbergraph_GA_DeployStructure_HealingTurret
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeployStructure_HealingTurret_C::ExecuteUbergraph_GA_DeployStructure_HealingTurret(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeployStructure_HealingTurret_C", "ExecuteUbergraph_GA_DeployStructure_HealingTurret");

	Params::GA_DeployStructure_HealingTurret_C_ExecuteUbergraph_GA_DeployStructure_HealingTurret Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeployStructure_HealingTurret.GA_DeployStructure_HealingTurret_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DeployStructure_HealingTurret_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeployStructure_HealingTurret_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_DeployStructure_HealingTurret.GA_DeployStructure_HealingTurret_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeployStructure_HealingTurret_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeployStructure_HealingTurret_C", "K2_OnEndAbility");

	Params::GA_DeployStructure_HealingTurret_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

