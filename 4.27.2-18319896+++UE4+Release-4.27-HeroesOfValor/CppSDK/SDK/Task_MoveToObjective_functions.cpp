﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_MoveToObjective

#include "Basic.hpp"

#include "Task_MoveToObjective_classes.hpp"
#include "Task_MoveToObjective_parameters.hpp"


namespace SDK
{

// Function Task_MoveToObjective.Task_MoveToObjective_C.ExecuteUbergraph_Task_MoveToObjective
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToObjective_C::ExecuteUbergraph_Task_MoveToObjective(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToObjective_C", "ExecuteUbergraph_Task_MoveToObjective");

	Params::Task_MoveToObjective_C_ExecuteUbergraph_Task_MoveToObjective Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToObjective.Task_MoveToObjective_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToObjective_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToObjective_C", "ReceiveExecuteAI");

	Params::Task_MoveToObjective_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToObjective.Task_MoveToObjective_C.OnSuccess_D0C780294E32A35C6CC435B2A0EB9EB6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToObjective_C::OnSuccess_D0C780294E32A35C6CC435B2A0EB9EB6(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToObjective_C", "OnSuccess_D0C780294E32A35C6CC435B2A0EB9EB6");

	Params::Task_MoveToObjective_C_OnSuccess_D0C780294E32A35C6CC435B2A0EB9EB6 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToObjective.Task_MoveToObjective_C.OnFail_D0C780294E32A35C6CC435B2A0EB9EB6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToObjective_C::OnFail_D0C780294E32A35C6CC435B2A0EB9EB6(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToObjective_C", "OnFail_D0C780294E32A35C6CC435B2A0EB9EB6");

	Params::Task_MoveToObjective_C_OnFail_D0C780294E32A35C6CC435B2A0EB9EB6 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToObjective.Task_MoveToObjective_C.OnSuccess_CE9416B347F4F6D7ED0A25B053161052
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToObjective_C::OnSuccess_CE9416B347F4F6D7ED0A25B053161052(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToObjective_C", "OnSuccess_CE9416B347F4F6D7ED0A25B053161052");

	Params::Task_MoveToObjective_C_OnSuccess_CE9416B347F4F6D7ED0A25B053161052 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Task_MoveToObjective.Task_MoveToObjective_C.OnFail_CE9416B347F4F6D7ED0A25B053161052
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_MoveToObjective_C::OnFail_CE9416B347F4F6D7ED0A25B053161052(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Task_MoveToObjective_C", "OnFail_CE9416B347F4F6D7ED0A25B053161052");

	Params::Task_MoveToObjective_C_OnFail_CE9416B347F4F6D7ED0A25B053161052 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

