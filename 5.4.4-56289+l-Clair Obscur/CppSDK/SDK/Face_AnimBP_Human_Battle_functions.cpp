﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Face_AnimBP_Human_Battle

#include "Basic.hpp"

#include "Face_AnimBP_Human_Battle_classes.hpp"
#include "Face_AnimBP_Human_Battle_parameters.hpp"


namespace SDK
{

// Function Face_AnimBP_Human_Battle.Face_AnimBP_Human_Battle_C.ExecuteUbergraph_Face_AnimBP_Human_Battle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFace_AnimBP_Human_Battle_C::ExecuteUbergraph_Face_AnimBP_Human_Battle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Face_AnimBP_Human_Battle_C", "ExecuteUbergraph_Face_AnimBP_Human_Battle");

	Params::Face_AnimBP_Human_Battle_C_ExecuteUbergraph_Face_AnimBP_Human_Battle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Face_AnimBP_Human_Battle.Face_AnimBP_Human_Battle_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UFace_AnimBP_Human_Battle_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Face_AnimBP_Human_Battle_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Face_AnimBP_Human_Battle.Face_AnimBP_Human_Battle_C.BlinkSystem
// (BlueprintCallable, BlueprintEvent)

void UFace_AnimBP_Human_Battle_C::BlinkSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Face_AnimBP_Human_Battle_C", "BlinkSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Face_AnimBP_Human_Battle.Face_AnimBP_Human_Battle_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UFace_AnimBP_Human_Battle_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Face_AnimBP_Human_Battle_C", "AnimGraph");

	Params::Face_AnimBP_Human_Battle_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

