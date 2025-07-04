﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemFilterSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SandFall_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemFilterSelector.WBP_ItemFilterSelector_C
// 0x00D0 (0x0500 - 0x0430)
class UWBP_ItemFilterSelector_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TypeSelector_Generic_C*            WBP_TypeSelector_Generic;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, class UBP_ItemFilter_Base_C*> ItemFilters;                                     // 0x0440(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FText>                ItemFilterNames;                                   // 0x0490(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(class UBP_ItemFilter_Base_C* ItemFilter)> OnFilterSelected;        // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSoundEventDataTableRowHandle          SD_OnSelectionChanged;                             // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BndEvt__WBP_ItemFilterSelector_WBP_TypeSelector_Generic_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(class FName SelectionID);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_WBP_ItemFilterSelector(int32 EntryPoint);
	void GetCurrentFilter(class UBP_ItemFilter_Base_C** Filter);
	void Load_Item_Filters(TArray<class UClass*>& ItemFilters_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemFilterSelector_C">();
	}
	static class UWBP_ItemFilterSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemFilterSelector_C>();
	}
};
static_assert(alignof(UWBP_ItemFilterSelector_C) == 0x000008, "Wrong alignment on UWBP_ItemFilterSelector_C");
static_assert(sizeof(UWBP_ItemFilterSelector_C) == 0x000500, "Wrong size on UWBP_ItemFilterSelector_C");
static_assert(offsetof(UWBP_ItemFilterSelector_C, UberGraphFrame) == 0x000430, "Member 'UWBP_ItemFilterSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemFilterSelector_C, WBP_TypeSelector_Generic) == 0x000438, "Member 'UWBP_ItemFilterSelector_C::WBP_TypeSelector_Generic' has a wrong offset!");
static_assert(offsetof(UWBP_ItemFilterSelector_C, ItemFilters) == 0x000440, "Member 'UWBP_ItemFilterSelector_C::ItemFilters' has a wrong offset!");
static_assert(offsetof(UWBP_ItemFilterSelector_C, ItemFilterNames) == 0x000490, "Member 'UWBP_ItemFilterSelector_C::ItemFilterNames' has a wrong offset!");
static_assert(offsetof(UWBP_ItemFilterSelector_C, OnFilterSelected) == 0x0004E0, "Member 'UWBP_ItemFilterSelector_C::OnFilterSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ItemFilterSelector_C, SD_OnSelectionChanged) == 0x0004F0, "Member 'UWBP_ItemFilterSelector_C::SD_OnSelectionChanged' has a wrong offset!");

}

