﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_UpdateSpeedRelatedToDistance

#include "Basic.hpp"

#include "BTService_UpdateSpeedRelatedToDistance_classes.hpp"
#include "BTService_UpdateSpeedRelatedToDistance_parameters.hpp"


namespace SDK
{

// Function BTService_UpdateSpeedRelatedToDistance.BTService_UpdateSpeedRelatedToDistance_C.ComputeSpeed
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBTService_UpdateSpeedRelatedToDistance_C::ComputeSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_UpdateSpeedRelatedToDistance_C", "ComputeSpeed");

	Params::BTService_UpdateSpeedRelatedToDistance_C_ComputeSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BTService_UpdateSpeedRelatedToDistance.BTService_UpdateSpeedRelatedToDistance_C.ExecuteUbergraph_BTService_UpdateSpeedRelatedToDistance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTService_UpdateSpeedRelatedToDistance_C::ExecuteUbergraph_BTService_UpdateSpeedRelatedToDistance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_UpdateSpeedRelatedToDistance_C", "ExecuteUbergraph_BTService_UpdateSpeedRelatedToDistance");

	Params::BTService_UpdateSpeedRelatedToDistance_C_ExecuteUbergraph_BTService_UpdateSpeedRelatedToDistance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTService_UpdateSpeedRelatedToDistance.BTService_UpdateSpeedRelatedToDistance_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTService_UpdateSpeedRelatedToDistance_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_UpdateSpeedRelatedToDistance_C", "ReceiveActivationAI");

	Params::BTService_UpdateSpeedRelatedToDistance_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTService_UpdateSpeedRelatedToDistance.BTService_UpdateSpeedRelatedToDistance_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTService_UpdateSpeedRelatedToDistance_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_UpdateSpeedRelatedToDistance_C", "ReceiveDeactivationAI");

	Params::BTService_UpdateSpeedRelatedToDistance_C_ReceiveDeactivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTService_UpdateSpeedRelatedToDistance.BTService_UpdateSpeedRelatedToDistance_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTService_UpdateSpeedRelatedToDistance_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_UpdateSpeedRelatedToDistance_C", "ReceiveTickAI");

	Params::BTService_UpdateSpeedRelatedToDistance_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

