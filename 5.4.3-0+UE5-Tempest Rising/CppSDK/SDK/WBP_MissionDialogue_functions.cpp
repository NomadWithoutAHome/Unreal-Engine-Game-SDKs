﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MissionDialogue

#include "Basic.hpp"

#include "WBP_MissionDialogue_classes.hpp"
#include "WBP_MissionDialogue_parameters.hpp"


namespace SDK
{

// Function WBP_MissionDialogue.WBP_MissionDialogue_C.BndEvt__WBP_MissionDialogue_WBP_MissionDialogue_Subtitles_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MissionDialogue_C::BndEvt__WBP_MissionDialogue_WBP_MissionDialogue_Subtitles_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "BndEvt__WBP_MissionDialogue_WBP_MissionDialogue_Subtitles_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::WBP_MissionDialogue_C_BndEvt__WBP_MissionDialogue_WBP_MissionDialogue_Subtitles_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MissionDialogue_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.ExecuteUbergraph_WBP_MissionDialogue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MissionDialogue_C::ExecuteUbergraph_WBP_MissionDialogue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "ExecuteUbergraph_WBP_MissionDialogue");

	Params::WBP_MissionDialogue_C_ExecuteUbergraph_WBP_MissionDialogue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.K2_OnIntroStarted
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_MissionDialogue_C::K2_OnIntroStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "K2_OnIntroStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.K2_OnOutroStarted
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_MissionDialogue_C::K2_OnOutroStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "K2_OnOutroStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.PlayIntroAfterOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_MissionDialogue_C::PlayIntroAfterOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "PlayIntroAfterOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.SyncSubtitlesVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MissionDialogue_C::SyncSubtitlesVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "SyncSubtitlesVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MissionDialogue_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "Tick");

	Params::WBP_MissionDialogue_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MissionDialogue.WBP_MissionDialogue_C.TryPlayIntroAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_MissionDialogue_C::TryPlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MissionDialogue_C", "TryPlayIntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

