﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogueOverlay

#include "Basic.hpp"

#include "WBP_DialogueOverlay_classes.hpp"
#include "WBP_DialogueOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_DialogueOverlay.WBP_DialogueOverlay_C.Appear
// (BlueprintCallable, BlueprintEvent)

void UWBP_DialogueOverlay_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueOverlay_C", "Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogueOverlay.WBP_DialogueOverlay_C.BndEvt__WBP_DialogueOverlay_WBP_DialogueContainer_K2Node_ComponentBoundEvent_0_OnChoiceMade__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ChoiceIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueOverlay_C::BndEvt__WBP_DialogueOverlay_WBP_DialogueContainer_K2Node_ComponentBoundEvent_0_OnChoiceMade__DelegateSignature(int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueOverlay_C", "BndEvt__WBP_DialogueOverlay_WBP_DialogueContainer_K2Node_ComponentBoundEvent_0_OnChoiceMade__DelegateSignature");

	Params::WBP_DialogueOverlay_C_BndEvt__WBP_DialogueOverlay_WBP_DialogueContainer_K2Node_ComponentBoundEvent_0_OnChoiceMade__DelegateSignature Parms{};

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueOverlay.WBP_DialogueOverlay_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void UWBP_DialogueOverlay_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueOverlay_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogueOverlay.WBP_DialogueOverlay_C.ExecuteUbergraph_WBP_DialogueOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueOverlay_C::ExecuteUbergraph_WBP_DialogueOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueOverlay_C", "ExecuteUbergraph_WBP_DialogueOverlay");

	Params::WBP_DialogueOverlay_C_ExecuteUbergraph_WBP_DialogueOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueOverlay.WBP_DialogueOverlay_C.SetChoices
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FText>&              Choices                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DialogueOverlay_C::SetChoices(const TArray<class FText>& Choices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueOverlay_C", "SetChoices");

	Params::WBP_DialogueOverlay_C_SetChoices Parms{};

	Parms.Choices = std::move(Choices);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueOverlay.WBP_DialogueOverlay_C.SetDialogueLines
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      DialogueLine                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      CharacterName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DialogueOverlay_C::SetDialogueLines(const class FText& DialogueLine, const class FText& CharacterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueOverlay_C", "SetDialogueLines");

	Params::WBP_DialogueOverlay_C_SetDialogueLines Parms{};

	Parms.DialogueLine = std::move(DialogueLine);
	Parms.CharacterName = std::move(CharacterName);

	UObject::ProcessEvent(Func, &Parms);
}

}

