﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Rocket_GDFPeacekeeper

#include "Basic.hpp"

#include "BP_Projectile_Rocket_GDFPeacekeeper_classes.hpp"
#include "BP_Projectile_Rocket_GDFPeacekeeper_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Rocket_GDFPeacekeeper.BP_Projectile_Rocket_GDFPeacekeeper_C.ExecuteUbergraph_BP_Projectile_Rocket_GDFPeacekeeper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Rocket_GDFPeacekeeper_C::ExecuteUbergraph_BP_Projectile_Rocket_GDFPeacekeeper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Rocket_GDFPeacekeeper_C", "ExecuteUbergraph_BP_Projectile_Rocket_GDFPeacekeeper");

	Params::BP_Projectile_Rocket_GDFPeacekeeper_C_ExecuteUbergraph_BP_Projectile_Rocket_GDFPeacekeeper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Rocket_GDFPeacekeeper.BP_Projectile_Rocket_GDFPeacekeeper_C.ReceiveOnProjectileHit
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Rocket_GDFPeacekeeper_C::ReceiveOnProjectileHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Rocket_GDFPeacekeeper_C", "ReceiveOnProjectileHit");

	UObject::ProcessEvent(Func, nullptr);
}

}

