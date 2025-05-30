﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GenericMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GenericMenu.WBP_GenericMenu_C
// 0x0068 (0x04F0 - 0x0488)
class UWBP_GenericMenu_C final : public UTedMenuScreenPage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Main_Background;                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ButtonFrames;                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Titles;                              // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Content;                                 // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_ButtonFrames;                               // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TabsPanelSizeBox;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowingWidget_Text_Fill_C*         Title_Primary;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GlowingWidget_Text_Fill_C*         Title_Secondary;                                   // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          OverrideBackgroundImage;                           // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     OverrideBackgroundMaterial;                        // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ConstantTabsHeight;                                // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TabsHeight;                                        // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RefreshTitles(class FText& InPrimary, class FText& InSecondary);
	void PreConstruct(bool IsDesignTime);
	void PageSwitched(int32 Index_0);
	void OnRefreshTitles();
	void OnRefreshBackground(const class USlateBrushAsset* InBackground);
	void ExecuteUbergraph_WBP_GenericMenu(int32 EntryPoint);
	void Construct();
	void BndEvt__WBP_Misc_MenuScreenPage_TabsPanel_K2Node_ComponentBoundEvent_0_ContentPanelStateDelegateSignature__DelegateSignature(class UTedContentPanelBase* InContentPanel, class UTedContentPanelSlotBase* InContentSlot, ETedContentSlotState InState, bool bInActivated);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GenericMenu_C">();
	}
	static class UWBP_GenericMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GenericMenu_C>();
	}
};
static_assert(alignof(UWBP_GenericMenu_C) == 0x000008, "Wrong alignment on UWBP_GenericMenu_C");
static_assert(sizeof(UWBP_GenericMenu_C) == 0x0004F0, "Wrong size on UWBP_GenericMenu_C");
static_assert(offsetof(UWBP_GenericMenu_C, UberGraphFrame) == 0x000488, "Member 'UWBP_GenericMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, Border_Main_Background) == 0x000490, "Member 'UWBP_GenericMenu_C::Border_Main_Background' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, HorizontalBox_ButtonFrames) == 0x000498, "Member 'UWBP_GenericMenu_C::HorizontalBox_ButtonFrames' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, HorizontalBox_Titles) == 0x0004A0, "Member 'UWBP_GenericMenu_C::HorizontalBox_Titles' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, NamedSlot_Content) == 0x0004A8, "Member 'UWBP_GenericMenu_C::NamedSlot_Content' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, Spacer_ButtonFrames) == 0x0004B0, "Member 'UWBP_GenericMenu_C::Spacer_ButtonFrames' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, TabsPanelSizeBox) == 0x0004B8, "Member 'UWBP_GenericMenu_C::TabsPanelSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, Title_Primary) == 0x0004C0, "Member 'UWBP_GenericMenu_C::Title_Primary' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, Title_Secondary) == 0x0004C8, "Member 'UWBP_GenericMenu_C::Title_Secondary' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, OverrideBackgroundImage) == 0x0004D0, "Member 'UWBP_GenericMenu_C::OverrideBackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, OverrideBackgroundMaterial) == 0x0004D8, "Member 'UWBP_GenericMenu_C::OverrideBackgroundMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, ConstantTabsHeight) == 0x0004E0, "Member 'UWBP_GenericMenu_C::ConstantTabsHeight' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_C, TabsHeight) == 0x0004E8, "Member 'UWBP_GenericMenu_C::TabsHeight' has a wrong offset!");

}

