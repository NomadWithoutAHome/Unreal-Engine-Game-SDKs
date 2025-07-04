﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LuminaConsumablePanel

#include "Basic.hpp"

#include "WBP_LuminaConsumablePanel_classes.hpp"
#include "WBP_LuminaConsumablePanel_parameters.hpp"


namespace SDK
{

// Function WBP_LuminaConsumablePanel.WBP_LuminaConsumablePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LuminaConsumablePanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LuminaConsumablePanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LuminaConsumablePanel.WBP_LuminaConsumablePanel_C.ExecuteUbergraph_WBP_LuminaConsumablePanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LuminaConsumablePanel_C::ExecuteUbergraph_WBP_LuminaConsumablePanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LuminaConsumablePanel_C", "ExecuteUbergraph_WBP_LuminaConsumablePanel");

	Params::WBP_LuminaConsumablePanel_C_ExecuteUbergraph_WBP_LuminaConsumablePanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LuminaConsumablePanel.WBP_LuminaConsumablePanel_C.LoadCharactersLuminaUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_LuminaConsumablePanel_C::LoadCharactersLuminaUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LuminaConsumablePanel_C", "LoadCharactersLuminaUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LuminaConsumablePanel.WBP_LuminaConsumablePanel_C.OnCardClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LuminaConsumablePanel_C::OnCardClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LuminaConsumablePanel_C", "OnCardClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LuminaConsumablePanel.WBP_LuminaConsumablePanel_C.UpdateResourceWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_LuminaConsumablePanel_C::UpdateResourceWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LuminaConsumablePanel_C", "UpdateResourceWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

