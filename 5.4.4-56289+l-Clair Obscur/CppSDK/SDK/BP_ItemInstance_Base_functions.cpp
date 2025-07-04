﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemInstance_Base

#include "Basic.hpp"

#include "BP_ItemInstance_Base_classes.hpp"
#include "BP_ItemInstance_Base_parameters.hpp"


namespace SDK
{

// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GenerateItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_jRPG_Item_StaticData&         ItemStaticItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LootContext&                  LootContext                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GeneratedItemInfo_Base_C**    GeneratedItemInfo                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::GenerateItem(struct FS_jRPG_Item_StaticData& ItemStaticItem, struct FS_LootContext& LootContext, class UBP_GeneratedItemInfo_Base_C** GeneratedItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GenerateItem");

	Params::BP_ItemInstance_Base_C_GenerateItem Parms{};

	Parms.ItemStaticItem = std::move(ItemStaticItem);
	Parms.LootContext = std::move(LootContext);

	UObject::ProcessEvent(Func, &Parms);

	ItemStaticItem = std::move(Parms.ItemStaticItem);
	LootContext = std::move(Parms.LootContext);

	if (GeneratedItemInfo != nullptr)
		*GeneratedItemInfo = Parms.GeneratedItemInfo;
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GetChromaValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_ItemInstance_Base_C::GetChromaValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GetChromaValue");

	Params::BP_ItemInstance_Base_C_GetChromaValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.LoadItemDefinition
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_ItemInstance_Base_C::LoadItemDefinition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "LoadItemDefinition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.MergeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ItemInstance_Base_C*          OtherItemInstance                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::MergeItem(class UBP_ItemInstance_Base_C* OtherItemInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "MergeItem");

	Params::BP_ItemInstance_Base_C_MergeItem Parms{};

	Parms.OtherItemInstance = OtherItemInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.BPI_ShouldShowNotification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bShouldShow                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::BPI_ShouldShowNotification(bool* bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "BPI_ShouldShowNotification");

	Params::BP_ItemInstance_Base_C_BPI_ShouldShowNotification Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldShow != nullptr)
		*bShouldShow = Parms.bShouldShow;
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.SetQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Quantity_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::SetQuantity(int32 Quantity_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "SetQuantity");

	Params::BP_ItemInstance_Base_C_SetQuantity Parms{};

	Parms.Quantity_0 = Quantity_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GetAcquiredPlayTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_ItemInstance_Base_C::GetAcquiredPlayTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GetAcquiredPlayTime");

	Params::BP_ItemInstance_Base_C_GetAcquiredPlayTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GetItemStaticData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_jRPG_Item_StaticData*         ItemStaticData_0                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::GetItemStaticData(struct FS_jRPG_Item_StaticData* ItemStaticData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GetItemStaticData");

	Params::BP_ItemInstance_Base_C_GetItemStaticData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemStaticData_0 != nullptr)
		*ItemStaticData_0 = std::move(Parms.ItemStaticData_0);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ItemInstance_Base_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GetQuantity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_ItemInstance_Base_C::GetQuantity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GetQuantity");

	Params::BP_ItemInstance_Base_C_GetQuantity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GetItemDefinitionID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_ItemInstance_Base_C::GetItemDefinitionID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GetItemDefinitionID");

	Params::BP_ItemInstance_Base_C_GetItemDefinitionID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.BPI_OnMarkNotificationAsRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      MarkCaller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::BPI_OnMarkNotificationAsRead(class UUserWidget* MarkCaller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "BPI_OnMarkNotificationAsRead");

	Params::BP_ItemInstance_Base_C_BPI_OnMarkNotificationAsRead Parms{};

	Parms.MarkCaller = MarkCaller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.ExecuteUbergraph_BP_ItemInstance_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::ExecuteUbergraph_BP_ItemInstance_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "ExecuteUbergraph_BP_ItemInstance_Base");

	Params::BP_ItemInstance_Base_C_ExecuteUbergraph_BP_ItemInstance_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemInstance_Base.BP_ItemInstance_Base_C.GetItemType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_jRPG_ItemType*                        Item_Type                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemInstance_Base_C::GetItemType(E_jRPG_ItemType* Item_Type) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemInstance_Base_C", "GetItemType");

	Params::BP_ItemInstance_Base_C_GetItemType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Type != nullptr)
		*Item_Type = Parms.Item_Type;
}

}

