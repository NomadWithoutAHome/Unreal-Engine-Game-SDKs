﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattleInput_PlayerTurn

#include "Basic.hpp"

#include "WBP_BattleInput_PlayerTurn_classes.hpp"
#include "WBP_BattleInput_PlayerTurn_parameters.hpp"


namespace SDK
{

// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BindBackButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TDelegate<void(class UCommonButtonBase* Button)>&ClickedEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleInput_PlayerTurn_C::BindBackButton(const TDelegate<void(class UCommonButtonBase* Button)>& ClickedEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "BindBackButton");

	Params::WBP_BattleInput_PlayerTurn_C_BindBackButton Parms{};

	Parms.ClickedEvent = ClickedEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleInput_PlayerTurn_C::BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_Flee_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleInput_PlayerTurn_C::BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_BattleInput_PlayerTurn_C_BndEvt__WBP_BattleInput_PlayerTurn_WBP_GM_PromptGeneric_SkipTurn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_BattleInput_PlayerTurn_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_BattleInput_PlayerTurn_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BattleInput_PlayerTurn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.ExecuteUbergraph_WBP_BattleInput_PlayerTurn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleInput_PlayerTurn_C::ExecuteUbergraph_WBP_BattleInput_PlayerTurn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "ExecuteUbergraph_WBP_BattleInput_PlayerTurn");

	Params::WBP_BattleInput_PlayerTurn_C_ExecuteUbergraph_WBP_BattleInput_PlayerTurn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.OnSkipImpossibleChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkipImpossible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleInput_PlayerTurn_C::OnSkipImpossibleChanged(bool IsSkipImpossible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "OnSkipImpossibleChanged");

	Params::WBP_BattleInput_PlayerTurn_C_OnSkipImpossibleChanged Parms{};

	Parms.IsSkipImpossible = IsSkipImpossible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleInput_PlayerTurn.WBP_BattleInput_PlayerTurn_C.UnbindBackButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TDelegate<void(class UCommonButtonBase* Button)>&ClickedEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleInput_PlayerTurn_C::UnbindBackButton(const TDelegate<void(class UCommonButtonBase* Button)>& ClickedEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleInput_PlayerTurn_C", "UnbindBackButton");

	Params::WBP_BattleInput_PlayerTurn_C_UnbindBackButton Parms{};

	Parms.ClickedEvent = ClickedEvent;

	UObject::ProcessEvent(Func, &Parms);
}

}

