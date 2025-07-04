﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tooltip_BattleScreen

#include "Basic.hpp"

#include "WBP_Tooltip_BattleScreen_classes.hpp"
#include "WBP_Tooltip_BattleScreen_parameters.hpp"


namespace SDK
{

// Function WBP_Tooltip_BattleScreen.WBP_Tooltip_BattleScreen_C.Appear
// (BlueprintCallable, BlueprintEvent)

void UWBP_Tooltip_BattleScreen_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tooltip_BattleScreen_C", "Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Tooltip_BattleScreen.WBP_Tooltip_BattleScreen_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void UWBP_Tooltip_BattleScreen_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tooltip_BattleScreen_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Tooltip_BattleScreen.WBP_Tooltip_BattleScreen_C.ExecuteUbergraph_WBP_Tooltip_BattleScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_BattleScreen_C::ExecuteUbergraph_WBP_Tooltip_BattleScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tooltip_BattleScreen_C", "ExecuteUbergraph_WBP_Tooltip_BattleScreen");

	Params::WBP_Tooltip_BattleScreen_C_ExecuteUbergraph_WBP_Tooltip_BattleScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Tooltip_BattleScreen.WBP_Tooltip_BattleScreen_C.IsDisappearAnimPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Tooltip_BattleScreen_C::IsDisappearAnimPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tooltip_BattleScreen_C", "IsDisappearAnimPlaying");

	Params::WBP_Tooltip_BattleScreen_C_IsDisappearAnimPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Tooltip_BattleScreen.WBP_Tooltip_BattleScreen_C.IsTooltipVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsVisible_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_BattleScreen_C::IsTooltipVisible(bool* IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tooltip_BattleScreen_C", "IsTooltipVisible");

	Params::WBP_Tooltip_BattleScreen_C_IsTooltipVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible_0 != nullptr)
		*IsVisible_0 = Parms.IsVisible_0;
}


// Function WBP_Tooltip_BattleScreen.WBP_Tooltip_BattleScreen_C.ShowTooltip
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      TooltipName_0                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class FText&                      TooltipDesc                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Tooltip_BattleScreen_C::ShowTooltip(const class FText& TooltipName_0, const class FText& TooltipDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tooltip_BattleScreen_C", "ShowTooltip");

	Params::WBP_Tooltip_BattleScreen_C_ShowTooltip Parms{};

	Parms.TooltipName_0 = std::move(TooltipName_0);
	Parms.TooltipDesc = std::move(TooltipDesc);

	UObject::ProcessEvent(Func, &Parms);
}

}

