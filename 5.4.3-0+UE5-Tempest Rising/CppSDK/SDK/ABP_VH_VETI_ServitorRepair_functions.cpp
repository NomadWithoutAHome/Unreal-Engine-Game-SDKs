﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_VETI_ServitorRepair

#include "Basic.hpp"

#include "ABP_VH_VETI_ServitorRepair_classes.hpp"
#include "ABP_VH_VETI_ServitorRepair_parameters.hpp"


namespace SDK
{

// Function ABP_VH_VETI_ServitorRepair.ABP_VH_VETI_ServitorRepair_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_VH_VETI_ServitorRepair_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_VETI_ServitorRepair_C", "AnimGraph");

	Params::ABP_VH_VETI_ServitorRepair_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_VH_VETI_ServitorRepair.ABP_VH_VETI_ServitorRepair_C.ExecuteUbergraph_ABP_VH_VETI_ServitorRepair
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_VETI_ServitorRepair_C::ExecuteUbergraph_ABP_VH_VETI_ServitorRepair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_VETI_ServitorRepair_C", "ExecuteUbergraph_ABP_VH_VETI_ServitorRepair");

	Params::ABP_VH_VETI_ServitorRepair_C_ExecuteUbergraph_ABP_VH_VETI_ServitorRepair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

