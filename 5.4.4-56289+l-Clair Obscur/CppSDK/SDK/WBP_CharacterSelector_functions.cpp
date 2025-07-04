﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterSelector

#include "Basic.hpp"

#include "WBP_CharacterSelector_classes.hpp"
#include "WBP_CharacterSelector_parameters.hpp"


namespace SDK
{

// Function WBP_CharacterSelector.WBP_CharacterSelector_C.BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_ButtonBinding_C*             PromptWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelector_C::BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(class UWBP_ButtonBinding_C* PromptWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");

	Params::WBP_CharacterSelector_C_BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature Parms{};

	Parms.PromptWidget = PromptWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_RightSelection_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_ButtonBinding_C*             PromptWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelector_C::BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_RightSelection_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(class UWBP_ButtonBinding_C* PromptWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_RightSelection_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	Params::WBP_CharacterSelector_C_BndEvt__WBP_CharacterSelector_WBP_ButtonBinding_RightSelection_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature Parms{};

	Parms.PromptWidget = PromptWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_CharacterSelector_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_CharacterSelector_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.ClearSelectedCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterSelector_C::ClearSelectedCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "ClearSelectedCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.ExecuteUbergraph_WBP_CharacterSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelector_C::ExecuteUbergraph_WBP_CharacterSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "ExecuteUbergraph_WBP_CharacterSelector");

	Params::WBP_CharacterSelector_C_ExecuteUbergraph_WBP_CharacterSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.LoadCharacterCollection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_CharacterData_C*>&     CharacterList_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CharacterSelector_C::LoadCharacterCollection(TArray<class UBP_CharacterData_C*>& CharacterList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "LoadCharacterCollection");

	Params::WBP_CharacterSelector_C_LoadCharacterCollection Parms{};

	Parms.CharacterList_0 = std::move(CharacterList_0);

	UObject::ProcessEvent(Func, &Parms);

	CharacterList_0 = std::move(Parms.CharacterList_0);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.LockCharacterSelector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelector_C::LockCharacterSelector(bool IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "LockCharacterSelector");

	Params::WBP_CharacterSelector_C_LockCharacterSelector Parms{};

	Parms.IsLocked = IsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.PreSetSelectedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterData_C*              SelectedCharacter_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelector_C::PreSetSelectedCharacter(class UBP_CharacterData_C* SelectedCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "PreSetSelectedCharacter");

	Params::WBP_CharacterSelector_C_PreSetSelectedCharacter Parms{};

	Parms.SelectedCharacter_0 = SelectedCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.SetSelectedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterData_C*              CharacterData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterSelector_C::SetSelectedCharacter(class UBP_CharacterData_C* CharacterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "SetSelectedCharacter");

	Params::WBP_CharacterSelector_C_SetSelectedCharacter Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterSelector.WBP_CharacterSelector_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharacterSelector_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterSelector_C", "BP_GetDesiredFocusTarget");

	Params::WBP_CharacterSelector_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

