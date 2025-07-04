﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamStatusEntry

#include "Basic.hpp"

#include "WBP_TeamStatusEntry_classes.hpp"
#include "WBP_TeamStatusEntry_parameters.hpp"


namespace SDK
{

// Function WBP_TeamStatusEntry.WBP_TeamStatusEntry_C.LoadCharacterData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterData_C*              CharacterData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TeamStatusEntry_C::LoadCharacterData(class UBP_CharacterData_C* CharacterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TeamStatusEntry_C", "LoadCharacterData");

	Params::WBP_TeamStatusEntry_C_LoadCharacterData Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);
}

}

