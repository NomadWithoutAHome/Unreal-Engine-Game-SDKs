﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_DYN_MissileTurret_01

#include "Basic.hpp"

#include "ABP_BD_DYN_MissileTurret_01_classes.hpp"
#include "ABP_BD_DYN_MissileTurret_01_parameters.hpp"


namespace SDK
{

// Function ABP_BD_DYN_MissileTurret_01.ABP_BD_DYN_MissileTurret_01_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_BD_DYN_MissileTurret_01_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BD_DYN_MissileTurret_01_C", "AnimGraph");

	Params::ABP_BD_DYN_MissileTurret_01_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_BD_DYN_MissileTurret_01.ABP_BD_DYN_MissileTurret_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01_AnimGraphNode_ModifyBone_65EB118F4740AF0844B32EA173D930ED
// (BlueprintEvent)

void UABP_BD_DYN_MissileTurret_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01_AnimGraphNode_ModifyBone_65EB118F4740AF0844B32EA173D930ED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BD_DYN_MissileTurret_01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01_AnimGraphNode_ModifyBone_65EB118F4740AF0844B32EA173D930ED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BD_DYN_MissileTurret_01.ABP_BD_DYN_MissileTurret_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01_AnimGraphNode_ModifyBone_7D781ED7492D920FD8BD37B1F4477033
// (BlueprintEvent)

void UABP_BD_DYN_MissileTurret_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01_AnimGraphNode_ModifyBone_7D781ED7492D920FD8BD37B1F4477033()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BD_DYN_MissileTurret_01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01_AnimGraphNode_ModifyBone_7D781ED7492D920FD8BD37B1F4477033");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_BD_DYN_MissileTurret_01.ABP_BD_DYN_MissileTurret_01_C.ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BD_DYN_MissileTurret_01_C::ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BD_DYN_MissileTurret_01_C", "ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01");

	Params::ABP_BD_DYN_MissileTurret_01_C_ExecuteUbergraph_ABP_BD_DYN_MissileTurret_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

