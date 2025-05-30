﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SteamProcessingPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SteamProcessingPopup.W_SteamProcessingPopup_C
// 0x0040 (0x02A0 - 0x0260)
class UW_SteamProcessingPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_119;                                     // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber_353;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CloseButton_C*                       W_CloseButton_C_0;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InfoText;                                          // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowCloseButton;                                   // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_SteamProcessingPopup(int32 EntryPoint);
	void BndEvt__W_SteamProcessingPopup_W_CloseButton_C_0_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
	void Construct();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SteamProcessingPopup_C">();
	}
	static class UW_SteamProcessingPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SteamProcessingPopup_C>();
	}
};
static_assert(alignof(UW_SteamProcessingPopup_C) == 0x000008, "Wrong alignment on UW_SteamProcessingPopup_C");
static_assert(sizeof(UW_SteamProcessingPopup_C) == 0x0002A0, "Wrong size on UW_SteamProcessingPopup_C");
static_assert(offsetof(UW_SteamProcessingPopup_C, UberGraphFrame) == 0x000260, "Member 'UW_SteamProcessingPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SteamProcessingPopup_C, TextBlock_119) == 0x000268, "Member 'UW_SteamProcessingPopup_C::TextBlock_119' has a wrong offset!");
static_assert(offsetof(UW_SteamProcessingPopup_C, Throbber_353) == 0x000270, "Member 'UW_SteamProcessingPopup_C::Throbber_353' has a wrong offset!");
static_assert(offsetof(UW_SteamProcessingPopup_C, W_CloseButton_C_0) == 0x000278, "Member 'UW_SteamProcessingPopup_C::W_CloseButton_C_0' has a wrong offset!");
static_assert(offsetof(UW_SteamProcessingPopup_C, InfoText) == 0x000280, "Member 'UW_SteamProcessingPopup_C::InfoText' has a wrong offset!");
static_assert(offsetof(UW_SteamProcessingPopup_C, ShowCloseButton) == 0x000298, "Member 'UW_SteamProcessingPopup_C::ShowCloseButton' has a wrong offset!");

}

