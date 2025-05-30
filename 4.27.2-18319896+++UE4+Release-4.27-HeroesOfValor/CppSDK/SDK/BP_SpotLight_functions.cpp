﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpotLight

#include "Basic.hpp"

#include "BP_SpotLight_classes.hpp"
#include "BP_SpotLight_parameters.hpp"


namespace SDK
{

// Function BP_SpotLight.BP_SpotLight_C.ExecuteUbergraph_BP_SpotLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpotLight_C::ExecuteUbergraph_BP_SpotLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpotLight_C", "ExecuteUbergraph_BP_SpotLight");

	Params::BP_SpotLight_C_ExecuteUbergraph_BP_SpotLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpotLight.BP_SpotLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpotLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpotLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpotLight.BP_SpotLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpotLight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpotLight_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

