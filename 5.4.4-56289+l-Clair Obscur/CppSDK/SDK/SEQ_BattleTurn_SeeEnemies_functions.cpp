﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SEQ_BattleTurn_SeeEnemies

#include "Basic.hpp"

#include "SEQ_BattleTurn_SeeEnemies_classes.hpp"
#include "SEQ_BattleTurn_SeeEnemies_parameters.hpp"


namespace SDK
{

// Function SEQ_BattleTurn_SeeEnemies.SEQ_BattleTurn_SeeEnemies_DirectorBP_C.ExecuteUbergraph_SEQ_BattleTurn_SeeEnemies (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USEQ_BattleTurn_SeeEnemies_DirectorBP_C::ExecuteUbergraph_SEQ_BattleTurn_SeeEnemies__Director_BP_(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SEQ_BattleTurn_SeeEnemies_DirectorBP_C", "ExecuteUbergraph_SEQ_BattleTurn_SeeEnemies (Director BP)");

	Params::SEQ_BattleTurn_SeeEnemies_DirectorBP_C_ExecuteUbergraph_SEQ_BattleTurn_SeeEnemies__Director_BP_ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SEQ_BattleTurn_SeeEnemies.SEQ_BattleTurn_SeeEnemies_DirectorBP_C.BP_Lune_Battle_CHOOSEACTION_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_jRPG_Character_Battle_Base_C* BP_Lune_Battle_CHOOSEACTION                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USEQ_BattleTurn_SeeEnemies_DirectorBP_C::BP_Lune_Battle_CHOOSEACTION_Event_0(class ABP_jRPG_Character_Battle_Base_C* BP_Lune_Battle_CHOOSEACTION)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SEQ_BattleTurn_SeeEnemies_DirectorBP_C", "BP_Lune_Battle_CHOOSEACTION_Event_0");

	Params::SEQ_BattleTurn_SeeEnemies_DirectorBP_C_BP_Lune_Battle_CHOOSEACTION_Event_0 Parms{};

	Parms.BP_Lune_Battle_CHOOSEACTION = BP_Lune_Battle_CHOOSEACTION;

	UObject::ProcessEvent(Func, &Parms);
}

}

