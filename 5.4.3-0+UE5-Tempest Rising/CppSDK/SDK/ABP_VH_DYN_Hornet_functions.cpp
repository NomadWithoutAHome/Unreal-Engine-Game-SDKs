﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_DYN_Hornet

#include "Basic.hpp"

#include "ABP_VH_DYN_Hornet_classes.hpp"
#include "ABP_VH_DYN_Hornet_parameters.hpp"


namespace SDK
{

// Function ABP_VH_DYN_Hornet.ABP_VH_DYN_Hornet_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_VH_DYN_Hornet_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_DYN_Hornet_C", "AnimGraph");

	Params::ABP_VH_DYN_Hornet_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_VH_DYN_Hornet.ABP_VH_DYN_Hornet_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_BlendListByBool_B8028B3A4DFC300C93D3508B2DE3760C
// (BlueprintEvent)

void UABP_VH_DYN_Hornet_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_BlendListByBool_B8028B3A4DFC300C93D3508B2DE3760C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_DYN_Hornet_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_BlendListByBool_B8028B3A4DFC300C93D3508B2DE3760C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_VH_DYN_Hornet.ABP_VH_DYN_Hornet_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_ModifyBone_DDE85858427C945A44C651A77B702D31
// (BlueprintEvent)

void UABP_VH_DYN_Hornet_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_ModifyBone_DDE85858427C945A44C651A77B702D31()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_DYN_Hornet_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_ModifyBone_DDE85858427C945A44C651A77B702D31");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_VH_DYN_Hornet.ABP_VH_DYN_Hornet_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_RotationOffsetBlendSpace_80232FCA435EFC4733D44EA7C1F112B4
// (BlueprintEvent)

void UABP_VH_DYN_Hornet_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_RotationOffsetBlendSpace_80232FCA435EFC4733D44EA7C1F112B4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_DYN_Hornet_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_RotationOffsetBlendSpace_80232FCA435EFC4733D44EA7C1F112B4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_VH_DYN_Hornet.ABP_VH_DYN_Hornet_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_TransitionResult_F3686AC046776B6217083596798C1D41
// (BlueprintEvent)

void UABP_VH_DYN_Hornet_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_TransitionResult_F3686AC046776B6217083596798C1D41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_DYN_Hornet_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_DYN_Hornet_AnimGraphNode_TransitionResult_F3686AC046776B6217083596798C1D41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_VH_DYN_Hornet.ABP_VH_DYN_Hornet_C.ExecuteUbergraph_ABP_VH_DYN_Hornet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_DYN_Hornet_C::ExecuteUbergraph_ABP_VH_DYN_Hornet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_DYN_Hornet_C", "ExecuteUbergraph_ABP_VH_DYN_Hornet");

	Params::ABP_VH_DYN_Hornet_C_ExecuteUbergraph_ABP_VH_DYN_Hornet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

