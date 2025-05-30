﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_GDF_Fence_3x5

#include "Basic.hpp"

#include "ABP_BD_GDF_Fence_3x5_classes.hpp"
#include "ABP_BD_GDF_Fence_3x5_parameters.hpp"


namespace SDK
{

// Function ABP_BD_GDF_Fence_3x5.ABP_BD_GDF_Fence_3x5_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_BD_GDF_Fence_3x5_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BD_GDF_Fence_3x5_C", "AnimGraph");

	Params::ABP_BD_GDF_Fence_3x5_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_BD_GDF_Fence_3x5.ABP_BD_GDF_Fence_3x5_C.ExecuteUbergraph_ABP_BD_GDF_Fence_3x5
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BD_GDF_Fence_3x5_C::ExecuteUbergraph_ABP_BD_GDF_Fence_3x5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BD_GDF_Fence_3x5_C", "ExecuteUbergraph_ABP_BD_GDF_Fence_3x5");

	Params::ABP_BD_GDF_Fence_3x5_C_ExecuteUbergraph_ABP_BD_GDF_Fence_3x5 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

