﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Popup_Working

#include "Basic.hpp"

#include "WBP_Popup_Working_classes.hpp"
#include "WBP_Popup_Working_parameters.hpp"


namespace SDK
{

// Function WBP_Popup_Working.WBP_Popup_Working_C.RefreshUI
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Popup_Working_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Popup_Working_C", "RefreshUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

