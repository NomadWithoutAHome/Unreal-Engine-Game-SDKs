﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_StanceMechanicSkill

#include "Basic.hpp"

#include "BPI_StanceMechanicSkill_classes.hpp"
#include "BPI_StanceMechanicSkill_parameters.hpp"


namespace SDK
{

// Function BPI_StanceMechanicSkill.BPI_StanceMechanicSkill_C.BPI_GetNextStance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsDefined                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_StanceType*                           DesiredStance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StanceMechanicSkill_C::BPI_GetNextStance(bool* IsDefined, E_StanceType* DesiredStance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_StanceMechanicSkill_C", "BPI_GetNextStance");

	Params::BPI_StanceMechanicSkill_C_BPI_GetNextStance Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (IsDefined != nullptr)
		*IsDefined = Parms.IsDefined;

	if (DesiredStance != nullptr)
		*DesiredStance = Parms.DesiredStance;
}

}

