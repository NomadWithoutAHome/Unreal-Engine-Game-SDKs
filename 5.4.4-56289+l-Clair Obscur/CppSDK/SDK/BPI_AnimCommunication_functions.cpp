﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AnimCommunication

#include "Basic.hpp"

#include "BPI_AnimCommunication_classes.hpp"
#include "BPI_AnimCommunication_parameters.hpp"


namespace SDK
{

// Function BPI_AnimCommunication.BPI_AnimCommunication_C.GetCharacterCombatStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_jRPG_CombatStyle*                     CombatStyle                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimCommunication_C::GetCharacterCombatStyle(E_jRPG_CombatStyle* CombatStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AnimCommunication_C", "GetCharacterCombatStyle");

	Params::BPI_AnimCommunication_C_GetCharacterCombatStyle Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (CombatStyle != nullptr)
		*CombatStyle = Parms.CombatStyle;
}


// Function BPI_AnimCommunication.BPI_AnimCommunication_C.GetIsDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Dead                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimCommunication_C::GetIsDead(bool* Dead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AnimCommunication_C", "GetIsDead");

	Params::BPI_AnimCommunication_C_GetIsDead Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Dead != nullptr)
		*Dead = Parms.Dead;
}


// Function BPI_AnimCommunication.BPI_AnimCommunication_C.GetIsDefending
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Defending                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimCommunication_C::GetIsDefending(bool* Defending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AnimCommunication_C", "GetIsDefending");

	Params::BPI_AnimCommunication_C_GetIsDefending Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Defending != nullptr)
		*Defending = Parms.Defending;
}


// Function BPI_AnimCommunication.BPI_AnimCommunication_C.GetBattlePostureAnimations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<EBattleTurnState, class UAnimSequenceBase*>*BattlePostureAnimations                                (Parm, OutParm)

void IBPI_AnimCommunication_C::GetBattlePostureAnimations(TMap<EBattleTurnState, class UAnimSequenceBase*>* BattlePostureAnimations) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AnimCommunication_C", "GetBattlePostureAnimations");

	Params::BPI_AnimCommunication_C_GetBattlePostureAnimations Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (BattlePostureAnimations != nullptr)
		*BattlePostureAnimations = std::move(Parms.BattlePostureAnimations);
}


// Function BPI_AnimCommunication.BPI_AnimCommunication_C.GetCurrentBattlePosture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBattleTurnState*                       CurrentBattlePosture                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimCommunication_C::GetCurrentBattlePosture(EBattleTurnState* CurrentBattlePosture) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_AnimCommunication_C", "GetCurrentBattlePosture");

	Params::BPI_AnimCommunication_C_GetCurrentBattlePosture Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (CurrentBattlePosture != nullptr)
		*CurrentBattlePosture = Parms.CurrentBattlePosture;
}

}

