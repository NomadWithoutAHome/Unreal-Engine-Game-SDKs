﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings.WBP_Settings_C
// 0x0010 (0x0710 - 0x0700)
class UWBP_Settings_C final : public UTedSettingsScreen_GameSettings
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0700(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Main_Background;                            // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSize(class UWidget* Widget, double InSize);
	void RefreshLayout();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Settings(int32 EntryPoint);
	void BndEvt__WBP_GameSettings_ButtonsPanel_K2Node_ComponentBoundEvent_0_ContentPanelActionDelegateSignature__DelegateSignature(class UTedContentPanelBase* InContentPanel, class UTedContentPanelSlotBase* InContentSlot, ETedContentSlotAction InAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_C">();
	}
	static class UWBP_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_C>();
	}
};
static_assert(alignof(UWBP_Settings_C) == 0x000008, "Wrong alignment on UWBP_Settings_C");
static_assert(sizeof(UWBP_Settings_C) == 0x000710, "Wrong size on UWBP_Settings_C");
static_assert(offsetof(UWBP_Settings_C, UberGraphFrame) == 0x000700, "Member 'UWBP_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_C, Border_Main_Background) == 0x000708, "Member 'UWBP_Settings_C::Border_Main_Background' has a wrong offset!");

}

