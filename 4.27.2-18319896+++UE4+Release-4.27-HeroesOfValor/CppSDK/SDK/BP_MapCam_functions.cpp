﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapCam

#include "Basic.hpp"

#include "BP_MapCam_classes.hpp"
#include "BP_MapCam_parameters.hpp"


namespace SDK
{

// Function BP_MapCam.BP_MapCam_C.ExecuteUbergraph_BP_MapCam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapCam_C::ExecuteUbergraph_BP_MapCam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapCam_C", "ExecuteUbergraph_BP_MapCam");

	Params::BP_MapCam_C_ExecuteUbergraph_BP_MapCam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapCam.BP_MapCam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapCam_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapCam_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

