﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Mortar_GDFGrenadeTurret

#include "Basic.hpp"

#include "BP_Projectile_Mortar_GDFGrenadeTurret_classes.hpp"
#include "BP_Projectile_Mortar_GDFGrenadeTurret_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Mortar_GDFGrenadeTurret.BP_Projectile_Mortar_GDFGrenadeTurret_C.ExecuteUbergraph_BP_Projectile_Mortar_GDFGrenadeTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Mortar_GDFGrenadeTurret_C::ExecuteUbergraph_BP_Projectile_Mortar_GDFGrenadeTurret(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Mortar_GDFGrenadeTurret_C", "ExecuteUbergraph_BP_Projectile_Mortar_GDFGrenadeTurret");

	Params::BP_Projectile_Mortar_GDFGrenadeTurret_C_ExecuteUbergraph_BP_Projectile_Mortar_GDFGrenadeTurret Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Mortar_GDFGrenadeTurret.BP_Projectile_Mortar_GDFGrenadeTurret_C.ReceiveOnProjectileHit
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Mortar_GDFGrenadeTurret_C::ReceiveOnProjectileHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Mortar_GDFGrenadeTurret_C", "ReceiveOnProjectileHit");

	UObject::ProcessEvent(Func, nullptr);
}

}

