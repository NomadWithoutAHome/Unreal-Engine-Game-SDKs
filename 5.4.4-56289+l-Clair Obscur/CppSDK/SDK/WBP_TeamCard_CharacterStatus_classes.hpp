﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamCard_CharacterStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TeamCard_CharacterStatus.WBP_TeamCard_CharacterStatus_C
// 0x0080 (0x0388 - 0x0308)
class UWBP_TeamCard_CharacterStatus_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_HeadingText_C*                     CharacterName;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       PartyIndicator;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BaseButton_C*                      WBP_BaseButton;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterLevel_C*                  WBP_CharacterLevel;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HealthBar_C*                       WBP_HealthBar;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                                WorldAnchor;                                       // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UWBP_TeamCard_CharacterStatus_C* CardWidget)> OnCharacterFocused; // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWBP_TeamCard_CharacterStatus_C* CardWidget)> OnCharacterSelected; // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_CharacterData_C*                    CharacterData;                                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UWBP_TeamCard_CharacterStatus_C* CardWidget)> OnCharacterUnfocused; // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_TeamCard_CharacterStatus_WBP_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseFocused__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TeamCard_CharacterStatus_WBP_BaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TeamCard_CharacterStatus_WBP_BaseButton_K2Node_ComponentBoundEvent_2_OnButtonBaseUnfocused__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_TeamCard_CharacterStatus(int32 EntryPoint);
	void GetTiedObject(class UObject** Object);
	void LoadCharacter(class UBP_CharacterData_C* CharacterData_0);
	void OnAddedToGroup(bool Instant);
	void OnRemovedFromGroup(bool Instant);
	void OnUIAction();
	void OnUINavigationFocus(const class UBP_UINavigationFocusEvent_C* FocusEventBP);
	void OnUINavigationFocusLost();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TeamCard_CharacterStatus_C">();
	}
	static class UWBP_TeamCard_CharacterStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TeamCard_CharacterStatus_C>();
	}
};
static_assert(alignof(UWBP_TeamCard_CharacterStatus_C) == 0x000008, "Wrong alignment on UWBP_TeamCard_CharacterStatus_C");
static_assert(sizeof(UWBP_TeamCard_CharacterStatus_C) == 0x000388, "Wrong size on UWBP_TeamCard_CharacterStatus_C");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, UberGraphFrame) == 0x000308, "Member 'UWBP_TeamCard_CharacterStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, CharacterName) == 0x000310, "Member 'UWBP_TeamCard_CharacterStatus_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, PartyIndicator) == 0x000318, "Member 'UWBP_TeamCard_CharacterStatus_C::PartyIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, WBP_BaseButton) == 0x000320, "Member 'UWBP_TeamCard_CharacterStatus_C::WBP_BaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, WBP_CharacterLevel) == 0x000328, "Member 'UWBP_TeamCard_CharacterStatus_C::WBP_CharacterLevel' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, WBP_HealthBar) == 0x000330, "Member 'UWBP_TeamCard_CharacterStatus_C::WBP_HealthBar' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, WorldAnchor) == 0x000338, "Member 'UWBP_TeamCard_CharacterStatus_C::WorldAnchor' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, OnCharacterFocused) == 0x000350, "Member 'UWBP_TeamCard_CharacterStatus_C::OnCharacterFocused' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, OnCharacterSelected) == 0x000360, "Member 'UWBP_TeamCard_CharacterStatus_C::OnCharacterSelected' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, CharacterData) == 0x000370, "Member 'UWBP_TeamCard_CharacterStatus_C::CharacterData' has a wrong offset!");
static_assert(offsetof(UWBP_TeamCard_CharacterStatus_C, OnCharacterUnfocused) == 0x000378, "Member 'UWBP_TeamCard_CharacterStatus_C::OnCharacterUnfocused' has a wrong offset!");

}

