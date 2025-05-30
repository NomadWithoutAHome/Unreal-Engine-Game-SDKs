﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_GenericTooltip_Minimal

#include "Basic.hpp"

#include "WBP_HUD_GenericTooltip_Minimal_classes.hpp"
#include "WBP_HUD_GenericTooltip_Minimal_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_GenericTooltip_Minimal.WBP_HUD_GenericTooltip_Minimal_C.SetupTextBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       InTextBlock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText&                            InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HUD_GenericTooltip_Minimal_C::SetupTextBlock(class UTextBlock* InTextBlock, class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_GenericTooltip_Minimal_C", "SetupTextBlock");

	Params::WBP_HUD_GenericTooltip_Minimal_C_SetupTextBlock Parms{};

	Parms.InTextBlock = InTextBlock;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	InText = std::move(Parms.InText);
}


// Function WBP_HUD_GenericTooltip_Minimal.WBP_HUD_GenericTooltip_Minimal_C.RefreshUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_GenericTooltip_Minimal_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_GenericTooltip_Minimal_C", "RefreshUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_GenericTooltip_Minimal.WBP_HUD_GenericTooltip_Minimal_C.ExecuteUbergraph_WBP_HUD_GenericTooltip_Minimal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_GenericTooltip_Minimal_C::ExecuteUbergraph_WBP_HUD_GenericTooltip_Minimal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_GenericTooltip_Minimal_C", "ExecuteUbergraph_WBP_HUD_GenericTooltip_Minimal");

	Params::WBP_HUD_GenericTooltip_Minimal_C_ExecuteUbergraph_WBP_HUD_GenericTooltip_Minimal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

