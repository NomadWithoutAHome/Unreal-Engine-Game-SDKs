﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_ArtilleryShell_LowArc

#include "Basic.hpp"

#include "BP_Projectile_ArtilleryShell_LowArc_classes.hpp"
#include "BP_Projectile_ArtilleryShell_LowArc_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_ArtilleryShell_LowArc.BP_Projectile_ArtilleryShell_LowArc_C.ExecuteUbergraph_BP_Projectile_ArtilleryShell_LowArc
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_ArtilleryShell_LowArc_C::ExecuteUbergraph_BP_Projectile_ArtilleryShell_LowArc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_ArtilleryShell_LowArc_C", "ExecuteUbergraph_BP_Projectile_ArtilleryShell_LowArc");

	Params::BP_Projectile_ArtilleryShell_LowArc_C_ExecuteUbergraph_BP_Projectile_ArtilleryShell_LowArc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_ArtilleryShell_LowArc.BP_Projectile_ArtilleryShell_LowArc_C.ReceiveOnProjectileHit
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_ArtilleryShell_LowArc_C::ReceiveOnProjectileHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_ArtilleryShell_LowArc_C", "ReceiveOnProjectileHit");

	UObject::ProcessEvent(Func, nullptr);
}

}

