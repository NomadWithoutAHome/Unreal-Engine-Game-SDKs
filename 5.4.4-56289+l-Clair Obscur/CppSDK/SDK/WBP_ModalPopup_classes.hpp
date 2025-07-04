﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModalPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "EModalUIResponse_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ModalStandardButton_structs.hpp"
#include "CommonInput_structs.hpp"
#include "E_jRPG_YesNoQuestions_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModalPopup.WBP_ModalPopup_C
// 0x01C0 (0x05F0 - 0x0430)
class UWBP_ModalPopup_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonLazyImage*                       Background;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonPromptContainer;                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionBinding_C*              CancelActionBinding;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BaseButton_C*                      CancelButton;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WrappingText_C*                    CancelTextBlock;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionBinding_C*              ConfirmActionBinding;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BaseButton_C*                      ConfirmButton;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WrappingText_C*                    ConfirmTextBlock;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionBinding_C*              HoldConfirmActionBinding;                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BaseButton_C*                      HoldConfirmButton;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WrappingText_C*                    HoldConfirmTextBlock;                              // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                InputGuard;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ModalSizeBox;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PopupMessage;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeadingText_C*                     PopupTitle;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionBinding_C*              SwapActionBinding;                                 // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BaseButton_C*                      SwapButton;                                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WrappingText_C*                    SwapTextBlock;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PopupTitleText;                                    // 0x04C8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   PopupMessageText;                                  // 0x04D8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	E_ModalStandardButton                         ResponseButtonType;                                // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsHoldConfirm;                                     // 0x04E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4EA[0x6];                                      // 0x04EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    SD_OpenSound;                                      // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SD_CancelSound;                                    // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	E_jRPG_YesNoQuestions                         Decision;                                          // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511[0x7];                                      // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(EModalUIResponse InUserResponse)> OnUserResponse;                  // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool IsAccepted)> OnUserResponseForSave;                           // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SelectedGameSaveSlot;                              // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         SaveSlot;                                          // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C[0x4];                                      // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PreviewPopupTitleText;                             // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PreviewPopupMessageText;                           // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>              ShortBackgroundTexture;                            // 0x0570(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              LargeBackgroundTexture;                            // 0x0598(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_LatentAction_LoadGame_C*            LoadGameLatentAction;                              // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              VeryLargeBackgroundTexture;                        // 0x05C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_ModalPopup_CancelButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModalPopup_CancelButton_K2Node_ComponentBoundEvent_7_OnButtonBaseActionProgress__DelegateSignature(double Progress);
	void BndEvt__WBP_ModalPopup_ConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModalPopup_ConfirmButton_K2Node_ComponentBoundEvent_5_OnButtonBaseActionProgress__DelegateSignature(double Progress);
	void BndEvt__WBP_ModalPopup_HoldConfirmButton_K2Node_ComponentBoundEvent_1_OnButtonBaseActionProgress__DelegateSignature(double Progress);
	void BndEvt__WBP_ModalPopup_HoldConfirmButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModalPopup_SwapButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModalPopup_SwapButton_K2Node_ComponentBoundEvent_6_OnButtonBaseActionProgress__DelegateSignature(double Progress);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ClickCancel();
	void ClickConfirm();
	void ClickSwap();
	class UWidget* DoCustomNavigationCancelButton(EUINavigation Navigation_0);
	void ExecuteUbergraph_WBP_ModalPopup(int32 EntryPoint);
	class UBP_LatentAction_LoadGame_C* GetLoadGameLatentAction();
	void NotifyUserResponse(EModalUIResponse InUserResponse);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void PreConstruct(bool IsDesignTime);
	void SaveGame(E_jRPG_YesNoQuestions InDecision);
	void SetCustomConfirmText(const class FText& InConfirmText);
	void SetSaveSlot(E_jRPG_YesNoQuestions Decision_0, const class FString& SelectedGameSaveSlot_0, int32 SaveSlot_0);
	void SetupButtons();
	void SetupInputMethod(ECommonInputType InInputMethod);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModalPopup_C">();
	}
	static class UWBP_ModalPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModalPopup_C>();
	}
};
static_assert(alignof(UWBP_ModalPopup_C) == 0x000008, "Wrong alignment on UWBP_ModalPopup_C");
static_assert(sizeof(UWBP_ModalPopup_C) == 0x0005F0, "Wrong size on UWBP_ModalPopup_C");
static_assert(offsetof(UWBP_ModalPopup_C, UberGraphFrame) == 0x000430, "Member 'UWBP_ModalPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, Background) == 0x000438, "Member 'UWBP_ModalPopup_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ButtonPromptContainer) == 0x000440, "Member 'UWBP_ModalPopup_C::ButtonPromptContainer' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, CancelActionBinding) == 0x000448, "Member 'UWBP_ModalPopup_C::CancelActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, CancelButton) == 0x000450, "Member 'UWBP_ModalPopup_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, CancelTextBlock) == 0x000458, "Member 'UWBP_ModalPopup_C::CancelTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ConfirmActionBinding) == 0x000460, "Member 'UWBP_ModalPopup_C::ConfirmActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ConfirmButton) == 0x000468, "Member 'UWBP_ModalPopup_C::ConfirmButton' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ConfirmTextBlock) == 0x000470, "Member 'UWBP_ModalPopup_C::ConfirmTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, HoldConfirmActionBinding) == 0x000478, "Member 'UWBP_ModalPopup_C::HoldConfirmActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, HoldConfirmButton) == 0x000480, "Member 'UWBP_ModalPopup_C::HoldConfirmButton' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, HoldConfirmTextBlock) == 0x000488, "Member 'UWBP_ModalPopup_C::HoldConfirmTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, InputGuard) == 0x000490, "Member 'UWBP_ModalPopup_C::InputGuard' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ModalSizeBox) == 0x000498, "Member 'UWBP_ModalPopup_C::ModalSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, PopupMessage) == 0x0004A0, "Member 'UWBP_ModalPopup_C::PopupMessage' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, PopupTitle) == 0x0004A8, "Member 'UWBP_ModalPopup_C::PopupTitle' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SwapActionBinding) == 0x0004B0, "Member 'UWBP_ModalPopup_C::SwapActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SwapButton) == 0x0004B8, "Member 'UWBP_ModalPopup_C::SwapButton' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SwapTextBlock) == 0x0004C0, "Member 'UWBP_ModalPopup_C::SwapTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, PopupTitleText) == 0x0004C8, "Member 'UWBP_ModalPopup_C::PopupTitleText' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, PopupMessageText) == 0x0004D8, "Member 'UWBP_ModalPopup_C::PopupMessageText' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ResponseButtonType) == 0x0004E8, "Member 'UWBP_ModalPopup_C::ResponseButtonType' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, IsHoldConfirm) == 0x0004E9, "Member 'UWBP_ModalPopup_C::IsHoldConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SD_OpenSound) == 0x0004F0, "Member 'UWBP_ModalPopup_C::SD_OpenSound' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SD_CancelSound) == 0x000500, "Member 'UWBP_ModalPopup_C::SD_CancelSound' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, Decision) == 0x000510, "Member 'UWBP_ModalPopup_C::Decision' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, OnUserResponse) == 0x000518, "Member 'UWBP_ModalPopup_C::OnUserResponse' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, OnUserResponseForSave) == 0x000528, "Member 'UWBP_ModalPopup_C::OnUserResponseForSave' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SelectedGameSaveSlot) == 0x000538, "Member 'UWBP_ModalPopup_C::SelectedGameSaveSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, SaveSlot) == 0x000548, "Member 'UWBP_ModalPopup_C::SaveSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, PreviewPopupTitleText) == 0x000550, "Member 'UWBP_ModalPopup_C::PreviewPopupTitleText' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, PreviewPopupMessageText) == 0x000560, "Member 'UWBP_ModalPopup_C::PreviewPopupMessageText' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, ShortBackgroundTexture) == 0x000570, "Member 'UWBP_ModalPopup_C::ShortBackgroundTexture' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, LargeBackgroundTexture) == 0x000598, "Member 'UWBP_ModalPopup_C::LargeBackgroundTexture' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, LoadGameLatentAction) == 0x0005C0, "Member 'UWBP_ModalPopup_C::LoadGameLatentAction' has a wrong offset!");
static_assert(offsetof(UWBP_ModalPopup_C, VeryLargeBackgroundTexture) == 0x0005C8, "Member 'UWBP_ModalPopup_C::VeryLargeBackgroundTexture' has a wrong offset!");

}

