﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_IngameChat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_IngameChat.W_IngameChat_C
// 0x0040 (0x02A0 - 0x0260)
class UW_IngameChat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_172;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_2;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_54;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ChatRenderOpacity;                                 // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChatVisbilityTimer;                                // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowChat;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowChatMessageBox;                                // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A[0x2];                                      // 0x029A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxMessageLength;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_IngameChat(int32 EntryPoint);
	void BndEvt__W_IngameChat_EditableTextBox_172_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__W_IngameChat_EditableTextBox_172_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void AddMessage(const class FText& UserName, const class FText& Message, bool SpecialMessage);
	void ResetChatVisibility();
	void ToggleChatMessageMode();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	ESlateVisibility ShowHUD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_IngameChat_C">();
	}
	static class UW_IngameChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_IngameChat_C>();
	}
};
static_assert(alignof(UW_IngameChat_C) == 0x000008, "Wrong alignment on UW_IngameChat_C");
static_assert(sizeof(UW_IngameChat_C) == 0x0002A0, "Wrong size on UW_IngameChat_C");
static_assert(offsetof(UW_IngameChat_C, UberGraphFrame) == 0x000260, "Member 'UW_IngameChat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, CanvasPanel_0) == 0x000268, "Member 'UW_IngameChat_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, EditableTextBox_172) == 0x000270, "Member 'UW_IngameChat_C::EditableTextBox_172' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, SizeBox_2) == 0x000278, "Member 'UW_IngameChat_C::SizeBox_2' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, VerticalBox_54) == 0x000280, "Member 'UW_IngameChat_C::VerticalBox_54' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, WidgetSwitcher_0) == 0x000288, "Member 'UW_IngameChat_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, ChatRenderOpacity) == 0x000290, "Member 'UW_IngameChat_C::ChatRenderOpacity' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, ChatVisbilityTimer) == 0x000294, "Member 'UW_IngameChat_C::ChatVisbilityTimer' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, ShowChat) == 0x000298, "Member 'UW_IngameChat_C::ShowChat' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, ShowChatMessageBox) == 0x000299, "Member 'UW_IngameChat_C::ShowChatMessageBox' has a wrong offset!");
static_assert(offsetof(UW_IngameChat_C, MaxMessageLength) == 0x00029C, "Member 'UW_IngameChat_C::MaxMessageLength' has a wrong offset!");

}

