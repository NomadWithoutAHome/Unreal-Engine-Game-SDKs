﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GM_SkillElementShort

#include "Basic.hpp"

#include "WBP_GM_SkillElementShort_classes.hpp"
#include "WBP_GM_SkillElementShort_parameters.hpp"


namespace SDK
{

// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BPI_ShouldShowNotification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bShouldShow                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::BPI_ShouldShowNotification(bool* bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BPI_ShouldShowNotification");

	Params::WBP_GM_SkillElementShort_C_BPI_ShouldShowNotification Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldShow != nullptr)
		*bShouldShow = Parms.bShouldShow;
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.UnbindOnSkillMarkedAsRead
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GM_SkillElementShort_C::UnbindOnSkillMarkedAsRead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "UnbindOnSkillMarkedAsRead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.LoadNotificationData
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GM_SkillElementShort_C::LoadNotificationData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "LoadNotificationData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.GetSlotIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32*                                  SlotIndex_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::GetSlotIndex(int32* SlotIndex_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "GetSlotIndex");

	Params::WBP_GM_SkillElementShort_C_GetSlotIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotIndex_0 != nullptr)
		*SlotIndex_0 = Parms.SlotIndex_0;
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.GetSkillData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_DataAsset_Skill_C**           SkillData_0                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::GetSkillData(class UBP_DataAsset_Skill_C** SkillData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "GetSkillData");

	Params::WBP_GM_SkillElementShort_C_GetSkillData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkillData_0 != nullptr)
		*SkillData_0 = Parms.SkillData_0;
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.Load Skill Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DataAsset_Skill_C*            SkillData_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::Load_Skill_Data(class UBP_DataAsset_Skill_C* SkillData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "Load Skill Data");

	Params::WBP_GM_SkillElementShort_C_Load_Skill_Data Parms{};

	Parms.SkillData_0 = SkillData_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BP_OnItemExpansionChanged");

	Params::WBP_GM_SkillElementShort_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BP_OnItemSelectionChanged");

	Params::WBP_GM_SkillElementShort_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "OnListItemObjectSet");

	Params::WBP_GM_SkillElementShort_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_GM_SkillElementShort_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "OnAddedToFocusPath");

	Params::WBP_GM_SkillElementShort_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_GM_SkillElementShort_C_BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FFocusEvent&               InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_GM_SkillElementShort_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "OnRemovedFromFocusPath");

	Params::WBP_GM_SkillElementShort_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocusedHold__DelegateSignature
// (BlueprintEvent)

void UWBP_GM_SkillElementShort_C::BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocusedHold__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocusedHold__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BPI_OnMarkNotificationAsRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      MarkCaller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::BPI_OnMarkNotificationAsRead(class UUserWidget* MarkCaller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BPI_OnMarkNotificationAsRead");

	Params::WBP_GM_SkillElementShort_C_BPI_OnMarkNotificationAsRead Parms{};

	Parms.MarkCaller = MarkCaller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.OnSkillMarkedAsRead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              PoolTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FName                             ObjectName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Mark_Caller                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::OnSkillMarkedAsRead(const struct FGameplayTag& PoolTag, class FName ObjectName, class UUserWidget* Mark_Caller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "OnSkillMarkedAsRead");

	Params::WBP_GM_SkillElementShort_C_OnSkillMarkedAsRead Parms{};

	Parms.PoolTag = std::move(PoolTag);
	Parms.ObjectName = ObjectName;
	Parms.Mark_Caller = Mark_Caller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_GM_SkillElementShort_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature");

	Params::WBP_GM_SkillElementShort_C_BndEvt__WBP_GM_SkillElementShort_BaseButton_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GM_SkillElementShort.WBP_GM_SkillElementShort_C.ExecuteUbergraph_WBP_GM_SkillElementShort
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GM_SkillElementShort_C::ExecuteUbergraph_WBP_GM_SkillElementShort(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GM_SkillElementShort_C", "ExecuteUbergraph_WBP_GM_SkillElementShort");

	Params::WBP_GM_SkillElementShort_C_ExecuteUbergraph_WBP_GM_SkillElementShort Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

