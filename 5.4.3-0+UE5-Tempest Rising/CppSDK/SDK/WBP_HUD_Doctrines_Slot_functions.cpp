﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_Doctrines_Slot

#include "Basic.hpp"

#include "WBP_HUD_Doctrines_Slot_classes.hpp"
#include "WBP_HUD_Doctrines_Slot_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUD_Doctrines_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.ExecuteUbergraph_WBP_HUD_Doctrines_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Doctrines_Slot_C::ExecuteUbergraph_WBP_HUD_Doctrines_Slot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "ExecuteUbergraph_WBP_HUD_Doctrines_Slot");

	Params::WBP_HUD_Doctrines_Slot_C_ExecuteUbergraph_WBP_HUD_Doctrines_Slot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.OnRefresh_Progress
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInPaused                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInRunning                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsQueued                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Doctrines_Slot_C::OnRefresh_Progress(bool bInPaused, bool bInRunning, bool bInIsQueued, float InProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "OnRefresh_Progress");

	Params::WBP_HUD_Doctrines_Slot_C_OnRefresh_Progress Parms{};

	Parms.bInPaused = bInPaused;
	Parms.bInRunning = bInRunning;
	Parms.bInIsQueued = bInIsQueued;
	Parms.InProgress = InProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.RefreshConnector
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_Doctrines_Slot_C::RefreshConnector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "RefreshConnector");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.RefreshIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_Doctrines_Slot_C::RefreshIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "RefreshIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.RefreshUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_HUD_Doctrines_Slot_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "RefreshUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPaused                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRunning                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsQueued                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Doctrines_Slot_C::SetProgress(bool bPaused, bool bRunning, bool bIsQueued, double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "SetProgress");

	Params::WBP_HUD_Doctrines_Slot_C_SetProgress Parms{};

	Parms.bPaused = bPaused;
	Parms.bRunning = bRunning;
	Parms.bIsQueued = bIsQueued;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_Doctrines_Slot.WBP_HUD_Doctrines_Slot_C.GetMaterialsSupportingStates
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>*OutMIDs                                                (Parm, OutParm)

void UWBP_HUD_Doctrines_Slot_C::GetMaterialsSupportingStates(TArray<class UMaterialInstanceDynamic*>* OutMIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_Doctrines_Slot_C", "GetMaterialsSupportingStates");

	Params::WBP_HUD_Doctrines_Slot_C_GetMaterialsSupportingStates Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMIDs != nullptr)
		*OutMIDs = std::move(Parms.OutMIDs);
}

}

