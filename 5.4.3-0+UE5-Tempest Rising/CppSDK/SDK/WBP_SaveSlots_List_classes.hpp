﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SaveSlots_List

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SaveSlots_List.WBP_SaveSlots_List_C
// 0x0048 (0x0850 - 0x0808)
class UWBP_SaveSlots_List_C final : public UTedSaveLoadContentPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0808(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       NewSaveFileName;                                   // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NoSaves_Title;                                     // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Titles;                                            // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         Banned_Chars;                                      // 0x0828(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxSaveFileNameLen;                                // 0x0838(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83C[0x4];                                      // 0x083C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnNewSaveNameCommited;                             // 0x0840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void UpdateLabelPaddings(bool IsScrollbarVisible);
	void Show_Internal();
	void Sanitize(const class FString& InputPin);
	void RefreshUI();
	void OnRegisterContentSlot(class UTedContentPanelSlotBase* InContentSlot, ETedContentPanelRegistration InMode);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_SaveSlots_List(int32 EntryPoint);
	void ClearSelection();
	void BndEvt__WBP_SaveSlots_List_NewSaveFileName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WBP_SaveSlots_List_NewSaveFileName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__WBP_LoadSlots_List_InnerContentPanel_K2Node_ComponentBoundEvent_0_OnScrollBarVisibilityChangedEvent__DelegateSignature(ESlateVisibility NewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SaveSlots_List_C">();
	}
	static class UWBP_SaveSlots_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SaveSlots_List_C>();
	}
};
static_assert(alignof(UWBP_SaveSlots_List_C) == 0x000008, "Wrong alignment on UWBP_SaveSlots_List_C");
static_assert(sizeof(UWBP_SaveSlots_List_C) == 0x000850, "Wrong size on UWBP_SaveSlots_List_C");
static_assert(offsetof(UWBP_SaveSlots_List_C, UberGraphFrame) == 0x000808, "Member 'UWBP_SaveSlots_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SaveSlots_List_C, NewSaveFileName) == 0x000810, "Member 'UWBP_SaveSlots_List_C::NewSaveFileName' has a wrong offset!");
static_assert(offsetof(UWBP_SaveSlots_List_C, NoSaves_Title) == 0x000818, "Member 'UWBP_SaveSlots_List_C::NoSaves_Title' has a wrong offset!");
static_assert(offsetof(UWBP_SaveSlots_List_C, Titles) == 0x000820, "Member 'UWBP_SaveSlots_List_C::Titles' has a wrong offset!");
static_assert(offsetof(UWBP_SaveSlots_List_C, Banned_Chars) == 0x000828, "Member 'UWBP_SaveSlots_List_C::Banned_Chars' has a wrong offset!");
static_assert(offsetof(UWBP_SaveSlots_List_C, MaxSaveFileNameLen) == 0x000838, "Member 'UWBP_SaveSlots_List_C::MaxSaveFileNameLen' has a wrong offset!");
static_assert(offsetof(UWBP_SaveSlots_List_C, OnNewSaveNameCommited) == 0x000840, "Member 'UWBP_SaveSlots_List_C::OnNewSaveNameCommited' has a wrong offset!");

}

