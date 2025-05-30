﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HarvestersCard

#include "Basic.hpp"

#include "WBP_HarvestersCard_classes.hpp"
#include "WBP_HarvestersCard_parameters.hpp"


namespace SDK
{

// Function WBP_HarvestersCard.WBP_HarvestersCard_C.BndEvt__WBP_WorkersWidget_WorkersPanel_K2Node_ComponentBoundEvent_0_ContentPanelStateDelegateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTedContentPanelBase*             InContentPanel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTedContentPanelSlotBase*         InContentSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ETedContentSlotState                    InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HarvestersCard_C::BndEvt__WBP_WorkersWidget_WorkersPanel_K2Node_ComponentBoundEvent_0_ContentPanelStateDelegateSignature__DelegateSignature(class UTedContentPanelBase* InContentPanel, class UTedContentPanelSlotBase* InContentSlot, ETedContentSlotState InState, bool bInActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HarvestersCard_C", "BndEvt__WBP_WorkersWidget_WorkersPanel_K2Node_ComponentBoundEvent_0_ContentPanelStateDelegateSignature__DelegateSignature");

	Params::WBP_HarvestersCard_C_BndEvt__WBP_WorkersWidget_WorkersPanel_K2Node_ComponentBoundEvent_0_ContentPanelStateDelegateSignature__DelegateSignature Parms{};

	Parms.InContentPanel = InContentPanel;
	Parms.InContentSlot = InContentSlot;
	Parms.InState = InState;
	Parms.bInActivated = bInActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HarvestersCard.WBP_HarvestersCard_C.ExecuteUbergraph_WBP_HarvestersCard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HarvestersCard_C::ExecuteUbergraph_WBP_HarvestersCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HarvestersCard_C", "ExecuteUbergraph_WBP_HarvestersCard");

	Params::WBP_HarvestersCard_C_ExecuteUbergraph_WBP_HarvestersCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

