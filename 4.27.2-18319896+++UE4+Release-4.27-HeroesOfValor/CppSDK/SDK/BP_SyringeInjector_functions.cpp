﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SyringeInjector

#include "Basic.hpp"

#include "BP_SyringeInjector_classes.hpp"
#include "BP_SyringeInjector_parameters.hpp"


namespace SDK
{

// Function BP_SyringeInjector.BP_SyringeInjector_C.ExecuteUbergraph_BP_SyringeInjector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SyringeInjector_C::ExecuteUbergraph_BP_SyringeInjector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SyringeInjector_C", "ExecuteUbergraph_BP_SyringeInjector");

	Params::BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SyringeInjector.BP_SyringeInjector_C.CharacterHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SyringeInjector_C::CharacterHit(class ABP_Character_C* Character, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SyringeInjector_C", "CharacterHit");

	Params::BP_SyringeInjector_C_CharacterHit Parms{};

	Parms.Character = Character;
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SyringeInjector.BP_SyringeInjector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SyringeInjector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SyringeInjector_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

