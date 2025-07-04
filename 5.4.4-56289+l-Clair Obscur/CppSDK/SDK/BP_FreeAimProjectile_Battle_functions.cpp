﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FreeAimProjectile_Battle

#include "Basic.hpp"

#include "BP_FreeAimProjectile_Battle_classes.hpp"
#include "BP_FreeAimProjectile_Battle_parameters.hpp"


namespace SDK
{

// Function BP_FreeAimProjectile_Battle.BP_FreeAimProjectile_Battle_C.ExecuteUbergraph_BP_FreeAimProjectile_Battle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FreeAimProjectile_Battle_C::ExecuteUbergraph_BP_FreeAimProjectile_Battle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAimProjectile_Battle_C", "ExecuteUbergraph_BP_FreeAimProjectile_Battle");

	Params::BP_FreeAimProjectile_Battle_C_ExecuteUbergraph_BP_FreeAimProjectile_Battle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAimProjectile_Battle.BP_FreeAimProjectile_Battle_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FreeAimProjectile_Battle_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAimProjectile_Battle_C", "ReceiveActorBeginOverlap");

	Params::BP_FreeAimProjectile_Battle_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FreeAimProjectile_Battle.BP_FreeAimProjectile_Battle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FreeAimProjectile_Battle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAimProjectile_Battle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FreeAimProjectile_Battle.BP_FreeAimProjectile_Battle_C.Shoot
// (BlueprintCallable, BlueprintEvent)

void ABP_FreeAimProjectile_Battle_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FreeAimProjectile_Battle_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}

}

