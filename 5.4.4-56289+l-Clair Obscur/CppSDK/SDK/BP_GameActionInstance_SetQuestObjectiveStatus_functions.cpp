﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_SetQuestObjectiveStatus

#include "Basic.hpp"

#include "BP_GameActionInstance_SetQuestObjectiveStatus_classes.hpp"
#include "BP_GameActionInstance_SetQuestObjectiveStatus_parameters.hpp"


namespace SDK
{

// Function BP_GameActionInstance_SetQuestObjectiveStatus.BP_GameActionInstance_SetQuestObjectiveStatus_C.ExecuteUbergraph_BP_GameActionInstance_SetQuestObjectiveStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_SetQuestObjectiveStatus_C::ExecuteUbergraph_BP_GameActionInstance_SetQuestObjectiveStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_SetQuestObjectiveStatus_C", "ExecuteUbergraph_BP_GameActionInstance_SetQuestObjectiveStatus");

	Params::BP_GameActionInstance_SetQuestObjectiveStatus_C_ExecuteUbergraph_BP_GameActionInstance_SetQuestObjectiveStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameActionInstance_SetQuestObjectiveStatus.BP_GameActionInstance_SetQuestObjectiveStatus_C.ExecuteGameAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class APlayerController*          Controller                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GameActionInstance_SetQuestObjectiveStatus_C::ExecuteGameAction(const class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_SetQuestObjectiveStatus_C", "ExecuteGameAction");

	Params::BP_GameActionInstance_SetQuestObjectiveStatus_C_ExecuteGameAction Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameActionInstance_SetQuestObjectiveStatus.BP_GameActionInstance_SetQuestObjectiveStatus_C.GetDebugString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_GameActionInstance_SetQuestObjectiveStatus_C::GetDebugString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameActionInstance_SetQuestObjectiveStatus_C", "GetDebugString");

	Params::BP_GameActionInstance_SetQuestObjectiveStatus_C_GetDebugString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

