﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_Minimap

#include "Basic.hpp"

#include "WBP_HUD_Minimap_classes.hpp"
#include "WBP_HUD_Minimap_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_Minimap.WBP_HUD_Minimap_C.OnMinimapStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bFullMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Minimap_C::OnMinimapStateChanged(bool bFullMode) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Minimap_C", "OnMinimapStateChanged");

	Params::WBP_HUD_Minimap_C_OnMinimapStateChanged Parms{};

	Parms.bFullMode = bFullMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

