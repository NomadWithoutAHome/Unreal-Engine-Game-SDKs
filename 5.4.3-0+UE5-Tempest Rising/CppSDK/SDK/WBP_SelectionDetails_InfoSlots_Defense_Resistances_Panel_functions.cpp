﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel

#include "Basic.hpp"

#include "WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel_classes.hpp"
#include "WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel_parameters.hpp"


namespace SDK
{

// Function WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel.WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel_C.OnRegisterContentSlot
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTedContentPanelSlotBase*         InContentSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ETedContentPanelRegistration            InMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel_C::OnRegisterContentSlot(class UTedContentPanelSlotBase* InContentSlot, ETedContentPanelRegistration InMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel_C", "OnRegisterContentSlot");

	Params::WBP_SelectionDetails_InfoSlots_Defense_Resistances_Panel_C_OnRegisterContentSlot Parms{};

	Parms.InContentSlot = InContentSlot;
	Parms.InMode = InMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

