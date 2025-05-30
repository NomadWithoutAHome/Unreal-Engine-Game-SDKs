﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_MoveToEnemy

#include "Basic.hpp"

#include "Task_MoveToEnemy_classes.hpp"
#include "Task_MoveToEnemy_parameters.hpp"


namespace SDK
{

// Function Task_MoveToEnemy.Task_MoveToEnemy_C.ExecuteUbergraph_Task_MoveToEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToEnemy_C::ExecuteUbergraph_Task_MoveToEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToEnemy_C", "ExecuteUbergraph_Task_MoveToEnemy");

	Params::Task_MoveToEnemy_C_ExecuteUbergraph_Task_MoveToEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToEnemy.Task_MoveToEnemy_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToEnemy_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToEnemy_C", "ReceiveExecuteAI");

	Params::Task_MoveToEnemy_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToEnemy.Task_MoveToEnemy_C.OnSuccess_C93C33B54082C1FC2D0E29B13EEC1B53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToEnemy_C::OnSuccess_C93C33B54082C1FC2D0E29B13EEC1B53(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToEnemy_C", "OnSuccess_C93C33B54082C1FC2D0E29B13EEC1B53");

	Params::Task_MoveToEnemy_C_OnSuccess_C93C33B54082C1FC2D0E29B13EEC1B53 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToEnemy.Task_MoveToEnemy_C.OnFail_C93C33B54082C1FC2D0E29B13EEC1B53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToEnemy_C::OnFail_C93C33B54082C1FC2D0E29B13EEC1B53(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToEnemy_C", "OnFail_C93C33B54082C1FC2D0E29B13EEC1B53");

	Params::Task_MoveToEnemy_C_OnFail_C93C33B54082C1FC2D0E29B13EEC1B53 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

