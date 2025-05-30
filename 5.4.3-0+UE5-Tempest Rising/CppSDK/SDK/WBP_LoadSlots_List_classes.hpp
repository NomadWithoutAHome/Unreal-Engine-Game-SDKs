﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadSlots_List

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoadSlots_List.WBP_LoadSlots_List_C
// 0x0018 (0x0820 - 0x0808)
class UWBP_LoadSlots_List_C final : public UTedSaveLoadContentPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0808(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             NoSaves_Title;                                     // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Titles;                                            // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateLabelPaddings(bool IsScrollbarVisible);
	void RefreshUI();
	void OnRegisterContentSlot(class UTedContentPanelSlotBase* InContentSlot, ETedContentPanelRegistration InMode);
	void ExecuteUbergraph_WBP_LoadSlots_List(int32 EntryPoint);
	void BndEvt__WBP_LoadSlots_List_InnerContentPanel_K2Node_ComponentBoundEvent_0_OnScrollBarVisibilityChangedEvent__DelegateSignature(ESlateVisibility NewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoadSlots_List_C">();
	}
	static class UWBP_LoadSlots_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoadSlots_List_C>();
	}
};
static_assert(alignof(UWBP_LoadSlots_List_C) == 0x000008, "Wrong alignment on UWBP_LoadSlots_List_C");
static_assert(sizeof(UWBP_LoadSlots_List_C) == 0x000820, "Wrong size on UWBP_LoadSlots_List_C");
static_assert(offsetof(UWBP_LoadSlots_List_C, UberGraphFrame) == 0x000808, "Member 'UWBP_LoadSlots_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoadSlots_List_C, NoSaves_Title) == 0x000810, "Member 'UWBP_LoadSlots_List_C::NoSaves_Title' has a wrong offset!");
static_assert(offsetof(UWBP_LoadSlots_List_C, Titles) == 0x000818, "Member 'UWBP_LoadSlots_List_C::Titles' has a wrong offset!");

}

