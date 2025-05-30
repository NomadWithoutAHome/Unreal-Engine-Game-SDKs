﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Popup_Working_1Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Popup_Working_1Button.WBP_Popup_Working_1Button_C
// 0x0020 (0x04A8 - 0x0488)
class UWBP_Popup_Working_1Button_C final : public UTedPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_w_Text_C*                   Button_One;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowingWidget_Text_Fill_C*         GlowingText_Header;                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTedHudPopup*                           ParentHudPopup;                                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Popup_Working_1Button_Button_One_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UTedUserWidget* InWidget);
	void ExecuteUbergraph_WBP_Popup_Working_1Button(int32 EntryPoint);
	void HideButton_Event();
	void RefreshUI();
	void ShowButton_Event();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Popup_Working_1Button_C">();
	}
	static class UWBP_Popup_Working_1Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Popup_Working_1Button_C>();
	}
};
static_assert(alignof(UWBP_Popup_Working_1Button_C) == 0x000008, "Wrong alignment on UWBP_Popup_Working_1Button_C");
static_assert(sizeof(UWBP_Popup_Working_1Button_C) == 0x0004A8, "Wrong size on UWBP_Popup_Working_1Button_C");
static_assert(offsetof(UWBP_Popup_Working_1Button_C, UberGraphFrame) == 0x000488, "Member 'UWBP_Popup_Working_1Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_Working_1Button_C, Button_One) == 0x000490, "Member 'UWBP_Popup_Working_1Button_C::Button_One' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_Working_1Button_C, GlowingText_Header) == 0x000498, "Member 'UWBP_Popup_Working_1Button_C::GlowingText_Header' has a wrong offset!");
static_assert(offsetof(UWBP_Popup_Working_1Button_C, ParentHudPopup) == 0x0004A0, "Member 'UWBP_Popup_Working_1Button_C::ParentHudPopup' has a wrong offset!");

}

