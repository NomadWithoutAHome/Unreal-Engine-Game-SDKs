﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Commands_Slot_Glowing_Short

#include "Basic.hpp"

#include "WBP_Commands_Slot_Glowing_Short_classes.hpp"
#include "WBP_Commands_Slot_Glowing_Short_parameters.hpp"


namespace SDK
{

// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.CheckForHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Commands_Slot_Glowing_Short_C::CheckForHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "CheckForHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.ExecuteUbergraph_WBP_Commands_Slot_Glowing_Short
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Commands_Slot_Glowing_Short_C::ExecuteUbergraph_WBP_Commands_Slot_Glowing_Short(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "ExecuteUbergraph_WBP_Commands_Slot_Glowing_Short");

	Params::WBP_Commands_Slot_Glowing_Short_C_ExecuteUbergraph_WBP_Commands_Slot_Glowing_Short Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.GetCommandsPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTedCommandsPanel*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UTedCommandsPanel* UWBP_Commands_Slot_Glowing_Short_C::GetCommandsPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "GetCommandsPanel");

	Params::WBP_Commands_Slot_Glowing_Short_C_GetCommandsPanel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.GetSlotCDO
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class UTedCommand*                ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

const class UTedCommand* UWBP_Commands_Slot_Glowing_Short_C::GetSlotCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "GetSlotCDO");

	Params::WBP_Commands_Slot_Glowing_Short_C_GetSlotCDO Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.OnActivateState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETedContentSlotState                    InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Commands_Slot_Glowing_Short_C::OnActivateState(ETedContentSlotState InState, bool bInActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "OnActivateState");

	Params::WBP_Commands_Slot_Glowing_Short_C_OnActivateState Parms{};

	Parms.InState = InState;
	Parms.bInActivated = bInActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.OnRefreshControlMappings
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Commands_Slot_Glowing_Short_C::OnRefreshControlMappings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "OnRefreshControlMappings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Commands_Slot_Glowing_Short_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "PreConstruct");

	Params::WBP_Commands_Slot_Glowing_Short_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.RefreshUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Commands_Slot_Glowing_Short_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "RefreshUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.SetActiveEffectColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Commands_Slot_Glowing_Short_C::SetActiveEffectColor(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "SetActiveEffectColor");

	Params::WBP_Commands_Slot_Glowing_Short_C_SetActiveEffectColor Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.SetupCooldownImage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Commands_Slot_Glowing_Short_C::SetupCooldownImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "SetupCooldownImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Commands_Slot_Glowing_Short_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "Tick");

	Params::WBP_Commands_Slot_Glowing_Short_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.ToggleActiveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bToggle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           ImageToToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Commands_Slot_Glowing_Short_C::ToggleActiveEffect(bool bToggle, class UImage* ImageToToggle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "ToggleActiveEffect");

	Params::WBP_Commands_Slot_Glowing_Short_C_ToggleActiveEffect Parms{};

	Parms.bToggle = bToggle;
	Parms.ImageToToggle = ImageToToggle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Commands_Slot_Glowing_Short.WBP_Commands_Slot_Glowing_Short_C.GetMaterialsSupportingStates
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>*OutMIDs                                                (Parm, OutParm)

void UWBP_Commands_Slot_Glowing_Short_C::GetMaterialsSupportingStates(TArray<class UMaterialInstanceDynamic*>* OutMIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Commands_Slot_Glowing_Short_C", "GetMaterialsSupportingStates");

	Params::WBP_Commands_Slot_Glowing_Short_C_GetMaterialsSupportingStates Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMIDs != nullptr)
		*OutMIDs = std::move(Parms.OutMIDs);
}

}

