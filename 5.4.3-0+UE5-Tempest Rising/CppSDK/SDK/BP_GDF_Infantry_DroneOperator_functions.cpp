﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GDF_Infantry_DroneOperator

#include "Basic.hpp"

#include "BP_GDF_Infantry_DroneOperator_classes.hpp"
#include "BP_GDF_Infantry_DroneOperator_parameters.hpp"


namespace SDK
{

// Function BP_GDF_Infantry_DroneOperator.BP_GDF_Infantry_DroneOperator_C.BndEvt__BP_DYN_Vehicle_TempestSphere_AbilityPreviewDecal_K2Node_ComponentBoundEvent_0_RangeDecalDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_GDF_Infantry_DroneOperator_C::BndEvt__BP_DYN_Vehicle_TempestSphere_AbilityPreviewDecal_K2Node_ComponentBoundEvent_0_RangeDecalDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Infantry_DroneOperator_C", "BndEvt__BP_DYN_Vehicle_TempestSphere_AbilityPreviewDecal_K2Node_ComponentBoundEvent_0_RangeDecalDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Infantry_DroneOperator.BP_GDF_Infantry_DroneOperator_C.BndEvt__BP_DYN_Vehicle_TempestSphere_AbilityPreviewDecal_K2Node_ComponentBoundEvent_2_RangeDecalDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_GDF_Infantry_DroneOperator_C::BndEvt__BP_DYN_Vehicle_TempestSphere_AbilityPreviewDecal_K2Node_ComponentBoundEvent_2_RangeDecalDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Infantry_DroneOperator_C", "BndEvt__BP_DYN_Vehicle_TempestSphere_AbilityPreviewDecal_K2Node_ComponentBoundEvent_2_RangeDecalDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GDF_Infantry_DroneOperator.BP_GDF_Infantry_DroneOperator_C.ExecuteUbergraph_BP_GDF_Infantry_DroneOperator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GDF_Infantry_DroneOperator_C::ExecuteUbergraph_BP_GDF_Infantry_DroneOperator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Infantry_DroneOperator_C", "ExecuteUbergraph_BP_GDF_Infantry_DroneOperator");

	Params::BP_GDF_Infantry_DroneOperator_C_ExecuteUbergraph_BP_GDF_Infantry_DroneOperator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GDF_Infantry_DroneOperator.BP_GDF_Infantry_DroneOperator_C.OnSelectionChanged_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bIsSelected                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const bool                              bIsHovered                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GDF_Infantry_DroneOperator_C::OnSelectionChanged_Blueprint(const bool bIsSelected, const bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Infantry_DroneOperator_C", "OnSelectionChanged_Blueprint");

	Params::BP_GDF_Infantry_DroneOperator_C_OnSelectionChanged_Blueprint Parms{};

	Parms.bIsSelected = bIsSelected;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GDF_Infantry_DroneOperator.BP_GDF_Infantry_DroneOperator_C.UpdateRangeDecal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GDF_Infantry_DroneOperator_C::UpdateRangeDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GDF_Infantry_DroneOperator_C", "UpdateRangeDecal");

	UObject::ProcessEvent(Func, nullptr);
}

}

