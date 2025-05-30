﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SaveGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"
#include "SavedGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SaveGame.WBP_SaveGame_C
// 0x0068 (0x0488 - 0x0420)
class UWBP_SaveGame_C final : public UTedSaveLoadMenuScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_w_Text_C*                   Button_Cancel;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_w_Text_C*                   Button_Save;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Popup_2Buttons_C*         DeleteSlotPopUp;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameSavedNotification_C*           GameSavedNotification;                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowingWidget_Text_Fill_C*         GlowingText_Header;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Popup_2Buttons_C*         SavePopUp;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapInfo_Vertical_C*                SelectedMapDetails;                                // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnCancel;                                          // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UTedMapInfo* InMapInfo)> OnConfirm;                          // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	bool WillHandleGoBackEvent();
	void StartSave();
	void Show();
	void RefreshUI();
	void HideAfterPopupFadesOut();
	void Hide();
	void GoBack();
	void GetSavePanel(class UWBP_SaveSlots_List_C** Out);
	void ExecuteUbergraph_WBP_SaveGame(int32 EntryPoint);
	void Construct();
	void BndEvt__WBP_SaveGame_SaveSlots_List_K2Node_ComponentBoundEvent_9_OnNewSaveNameCommited__DelegateSignature();
	void BndEvt__WBP_SaveGame_SaveSlots_List_K2Node_ComponentBoundEvent_8_ContentPanelActionDelegateSignature__DelegateSignature(class UTedContentPanelBase* InContentPanel, class UTedContentPanelSlotBase* InContentSlot, ETedContentSlotAction InAction);
	void BndEvt__WBP_SaveGame_SaveSlots_List_K2Node_ComponentBoundEvent_7_OnDeleteSaveSlotRequested__DelegateSignature(class USavedGameSlotInfo* SlotInfoToDelete);
	void BndEvt__WBP_SaveGame_SaveSlots_List_K2Node_ComponentBoundEvent_4_ContentPanelStateDelegateSignature__DelegateSignature(class UTedContentPanelBase* InContentPanel, class UTedContentPanelSlotBase* InContentSlot, ETedContentSlotState InState, bool bInActivated);
	void BndEvt__WBP_SaveGame_SavePopUp_K2Node_ComponentBoundEvent_3_OnClicked_Two__DelegateSignature();
	void BndEvt__WBP_SaveGame_SavePopUp_K2Node_ComponentBoundEvent_2_OnClicked_One__DelegateSignature();
	void BndEvt__WBP_SaveGame_DeleteSlotPopUp_K2Node_ComponentBoundEvent_6_OnClicked_Two__DelegateSignature();
	void BndEvt__WBP_SaveGame_DeleteSlotPopUp_K2Node_ComponentBoundEvent_5_OnClicked_One__DelegateSignature();
	void BndEvt__WBP_SaveGame_Button_Save_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UTedUserWidget* InWidget);
	void BndEvt__WBP_Misc_MapSelector_Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UTedUserWidget* InWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SaveGame_C">();
	}
	static class UWBP_SaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SaveGame_C>();
	}
};
static_assert(alignof(UWBP_SaveGame_C) == 0x000008, "Wrong alignment on UWBP_SaveGame_C");
static_assert(sizeof(UWBP_SaveGame_C) == 0x000488, "Wrong size on UWBP_SaveGame_C");
static_assert(offsetof(UWBP_SaveGame_C, UberGraphFrame) == 0x000420, "Member 'UWBP_SaveGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, Button_Cancel) == 0x000428, "Member 'UWBP_SaveGame_C::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, Button_Save) == 0x000430, "Member 'UWBP_SaveGame_C::Button_Save' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, CanvasPanel_0) == 0x000438, "Member 'UWBP_SaveGame_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, DeleteSlotPopUp) == 0x000440, "Member 'UWBP_SaveGame_C::DeleteSlotPopUp' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, GameSavedNotification) == 0x000448, "Member 'UWBP_SaveGame_C::GameSavedNotification' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, GlowingText_Header) == 0x000450, "Member 'UWBP_SaveGame_C::GlowingText_Header' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, SavePopUp) == 0x000458, "Member 'UWBP_SaveGame_C::SavePopUp' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, SelectedMapDetails) == 0x000460, "Member 'UWBP_SaveGame_C::SelectedMapDetails' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, OnCancel) == 0x000468, "Member 'UWBP_SaveGame_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UWBP_SaveGame_C, OnConfirm) == 0x000478, "Member 'UWBP_SaveGame_C::OnConfirm' has a wrong offset!");

}

