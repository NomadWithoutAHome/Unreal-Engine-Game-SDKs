﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Grenade_GDFRiotTrooper

#include "Basic.hpp"

#include "BP_Projectile_Grenade_GDFRiotTrooper_classes.hpp"
#include "BP_Projectile_Grenade_GDFRiotTrooper_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Grenade_GDFRiotTrooper.BP_Projectile_Grenade_GDFRiotTrooper_C.ExecuteUbergraph_BP_Projectile_Grenade_GDFRiotTrooper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Grenade_GDFRiotTrooper_C::ExecuteUbergraph_BP_Projectile_Grenade_GDFRiotTrooper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Grenade_GDFRiotTrooper_C", "ExecuteUbergraph_BP_Projectile_Grenade_GDFRiotTrooper");

	Params::BP_Projectile_Grenade_GDFRiotTrooper_C_ExecuteUbergraph_BP_Projectile_Grenade_GDFRiotTrooper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Grenade_GDFRiotTrooper.BP_Projectile_Grenade_GDFRiotTrooper_C.ReceiveOnProjectileHit
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Grenade_GDFRiotTrooper_C::ReceiveOnProjectileHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Grenade_GDFRiotTrooper_C", "ReceiveOnProjectileHit");

	UObject::ProcessEvent(Func, nullptr);
}

}

