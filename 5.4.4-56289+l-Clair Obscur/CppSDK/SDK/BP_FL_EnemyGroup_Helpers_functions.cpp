﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_EnemyGroup_Helpers

#include "Basic.hpp"

#include "BP_FL_EnemyGroup_Helpers_classes.hpp"
#include "BP_FL_EnemyGroup_Helpers_parameters.hpp"


namespace SDK
{

// Function BP_FL_EnemyGroup_Helpers.BP_FL_EnemyGroup_Helpers_C.UnlinkEnemyWorldToGroup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EnemyGroup_C*                 Group                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_jRPG_Enemy_World_Base_Seamless_C*EnemyWorld                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FL_EnemyGroup_Helpers_C::UnlinkEnemyWorldToGroup(class ABP_EnemyGroup_C* Group, class ABP_jRPG_Enemy_World_Base_Seamless_C* EnemyWorld, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FL_EnemyGroup_Helpers_C", "UnlinkEnemyWorldToGroup");

	Params::BP_FL_EnemyGroup_Helpers_C_UnlinkEnemyWorldToGroup Parms{};

	Parms.Group = Group;
	Parms.EnemyWorld = EnemyWorld;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FL_EnemyGroup_Helpers.BP_FL_EnemyGroup_Helpers_C.LinkEnemyWorldToGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EnemyGroup_C*                 Group                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_jRPG_Enemy_World_Base_Seamless_C*EnemyWorld                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FL_EnemyGroup_Helpers_C::LinkEnemyWorldToGroup(class ABP_EnemyGroup_C* Group, class ABP_jRPG_Enemy_World_Base_Seamless_C* EnemyWorld, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FL_EnemyGroup_Helpers_C", "LinkEnemyWorldToGroup");

	Params::BP_FL_EnemyGroup_Helpers_C_LinkEnemyWorldToGroup Parms{};

	Parms.Group = Group;
	Parms.EnemyWorld = EnemyWorld;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
}

}

