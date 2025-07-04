﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioControlSystem

#include "Basic.hpp"

#include "BP_AudioControlSystem_classes.hpp"
#include "BP_AudioControlSystem_parameters.hpp"


namespace SDK
{

// Function BP_AudioControlSystem.BP_AudioControlSystem_C.ActivateBusMixForMainMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::ActivateBusMixForMainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "ActivateBusMixForMainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.ActivateExplorationControlBusMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundControlBusMix*              Mix                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::ActivateExplorationControlBusMix(class USoundControlBusMix* Mix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "ActivateExplorationControlBusMix");

	Params::BP_AudioControlSystem_C_ActivateExplorationControlBusMix Parms{};

	Parms.Mix = Mix;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.ApplyAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::ApplyAudioSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "ApplyAudioSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.ApplySoundUserSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::ApplySoundUserSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "ApplySoundUserSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.DeactivateExplorationControlBusMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundControlBusMix*              Mix                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::DeactivateExplorationControlBusMix(class USoundControlBusMix* Mix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "DeactivateExplorationControlBusMix");

	Params::BP_AudioControlSystem_C_DeactivateExplorationControlBusMix Parms{};

	Parms.Mix = Mix;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.GetLastActivatedExplorationControlBusMix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundControlBusMix**             ControlBusMix                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::GetLastActivatedExplorationControlBusMix(class USoundControlBusMix** ControlBusMix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "GetLastActivatedExplorationControlBusMix");

	Params::BP_AudioControlSystem_C_GetLastActivatedExplorationControlBusMix Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ControlBusMix != nullptr)
		*ControlBusMix = Parms.ControlBusMix;
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnChangeMapProcessFinished
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelDestination                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::OnChangeMapProcessFinished(class FName LevelDestination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnChangeMapProcessFinished");

	Params::BP_AudioControlSystem_C_OnChangeMapProcessFinished Parms{};

	Parms.LevelDestination = LevelDestination;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnChangeMapProcessStarted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelDestination                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::OnChangeMapProcessStarted(class FName LevelDestination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnChangeMapProcessStarted");

	Params::BP_AudioControlSystem_C_OnChangeMapProcessStarted Parms{};

	Parms.LevelDestination = LevelDestination;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnCinematicFinishedEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnCinematicFinishedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnCinematicFinishedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnCinematicStartedEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnCinematicStartedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnCinematicStartedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnDialogueFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Dialogue_C*                   Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::OnDialogueFinished(class ABP_Dialogue_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnDialogueFinished");

	Params::BP_AudioControlSystem_C_OnDialogueFinished Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnDialogueStarted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Dialogue_C*                   Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioControlSystem_C::OnDialogueStarted(class ABP_Dialogue_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnDialogueStarted");

	Params::BP_AudioControlSystem_C_OnDialogueStarted Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnDocumentActorClosed
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnDocumentActorClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnDocumentActorClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnDocumentActorOpened
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnDocumentActorOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnDocumentActorOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnInWorldDialogueFinished
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnInWorldDialogueFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnInWorldDialogueFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnInWorldDialogueStarted
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnInWorldDialogueStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnInWorldDialogueStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnMainMenuClosed
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnMainMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnMainMenuClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnMainMenuOpened
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnMainMenuOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnMainMenuOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnPauseMenuClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnPauseMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnPauseMenuClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnPauseMenuOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnPauseMenuOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnPauseMenuOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnSavePointMenuClosed
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnSavePointMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnSavePointMenuClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.OnSavePointMenuOpened
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::OnSavePointMenuOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "OnSavePointMenuOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.RegisterBusMixEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::RegisterBusMixEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "RegisterBusMixEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.RegisterCinematicEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::RegisterCinematicEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "RegisterCinematicEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.RegisterControllerEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::RegisterControllerEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "RegisterControllerEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.RegisterDialogueEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::RegisterDialogueEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "RegisterDialogueEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.RegisterGameInstanceEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::RegisterGameInstanceEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "RegisterGameInstanceEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AudioControlSystem.BP_AudioControlSystem_C.ResetBusMixStates
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AudioControlSystem_C::ResetBusMixStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AudioControlSystem_C", "ResetBusMixStates");

	UObject::ProcessEvent(Func, nullptr);
}

}

