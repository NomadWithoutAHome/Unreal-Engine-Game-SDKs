﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleProjectilebase

#include "Basic.hpp"

#include "BP_SimpleProjectilebase_classes.hpp"
#include "BP_SimpleProjectilebase_parameters.hpp"


namespace SDK
{

// Function BP_SimpleProjectilebase.BP_SimpleProjectilebase_C.ExecuteUbergraph_BP_SimpleProjectilebase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleProjectilebase_C::ExecuteUbergraph_BP_SimpleProjectilebase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleProjectilebase_C", "ExecuteUbergraph_BP_SimpleProjectilebase");

	Params::BP_SimpleProjectilebase_C_ExecuteUbergraph_BP_SimpleProjectilebase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SimpleProjectilebase.BP_SimpleProjectilebase_C.CharacterHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleProjectilebase_C::CharacterHit(class ABP_Character_C* Character, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleProjectilebase_C", "CharacterHit");

	Params::BP_SimpleProjectilebase_C_CharacterHit Parms{};

	Parms.Character = Character;
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SimpleProjectilebase.BP_SimpleProjectilebase_C.SetMeleeWeaponSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkinIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleProjectilebase_C::SetMeleeWeaponSkin(int32 SkinIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleProjectilebase_C", "SetMeleeWeaponSkin");

	Params::BP_SimpleProjectilebase_C_SetMeleeWeaponSkin Parms{};

	Parms.SkinIndex = SkinIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SimpleProjectilebase.BP_SimpleProjectilebase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleProjectilebase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleProjectilebase_C", "ReceiveTick");

	Params::BP_SimpleProjectilebase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SimpleProjectilebase.BP_SimpleProjectilebase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SimpleProjectilebase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleProjectilebase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SimpleProjectilebase.BP_SimpleProjectilebase_C.FindClosestCharacterBone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   ImpactPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName*                            ClosestBoneName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SimpleProjectilebase_C::FindClosestCharacterBone(const struct FVector& ImpactPoint, class ABP_Character_C* Character, class FName* ClosestBoneName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SimpleProjectilebase_C", "FindClosestCharacterBone");

	Params::BP_SimpleProjectilebase_C_FindClosestCharacterBone Parms{};

	Parms.ImpactPoint = std::move(ImpactPoint);
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestBoneName != nullptr)
		*ClosestBoneName = Parms.ClosestBoneName;
}

}

