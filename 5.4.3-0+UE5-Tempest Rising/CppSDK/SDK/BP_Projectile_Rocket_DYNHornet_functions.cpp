﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Rocket_DYNHornet

#include "Basic.hpp"

#include "BP_Projectile_Rocket_DYNHornet_classes.hpp"
#include "BP_Projectile_Rocket_DYNHornet_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Rocket_DYNHornet.BP_Projectile_Rocket_DYNHornet_C.ExecuteUbergraph_BP_Projectile_Rocket_DYNHornet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Rocket_DYNHornet_C::ExecuteUbergraph_BP_Projectile_Rocket_DYNHornet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Rocket_DYNHornet_C", "ExecuteUbergraph_BP_Projectile_Rocket_DYNHornet");

	Params::BP_Projectile_Rocket_DYNHornet_C_ExecuteUbergraph_BP_Projectile_Rocket_DYNHornet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Rocket_DYNHornet.BP_Projectile_Rocket_DYNHornet_C.ReceiveOnProjectileHit
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Rocket_DYNHornet_C::ReceiveOnProjectileHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Rocket_DYNHornet_C", "ReceiveOnProjectileHit");

	UObject::ProcessEvent(Func, nullptr);
}

}

