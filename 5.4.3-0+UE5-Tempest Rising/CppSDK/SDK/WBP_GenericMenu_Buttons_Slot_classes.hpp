﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GenericMenu_Buttons_Slot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C
// 0x0078 (0x04A8 - 0x0430)
class UWBP_GenericMenu_Buttons_Slot_C final : public UTedContentPanelSlotButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_InnerFrame;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Link_Left;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Link_Right;                                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Button;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            TextColor_Default;                                 // 0x0458(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColor_Selected;                                // 0x046C(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColor_Hovered;                                 // 0x0480(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColor_Disabled;                                // 0x0494(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateGlowPosition();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetupLinks(bool bInHasLeftConnection, bool bInHasRightConnection);
	void SetupLink(class UImage* InLinkImage, bool bInHasConnection, class UMaterialInterface* InConnectionMaterial, class UMaterialInterface* InNoConnectionMaterial, const struct FVector2D& TextureSize);
	void RefreshUI();
	void RefreshLinks();
	void Refresh_Visuals();
	void PreConstruct(bool IsDesignTime);
	void OnActivateState(ETedContentSlotState InState, bool bInActivated);
	void GetContentPanel(class UTedContentPanelInstanced** Out);
	class UTedUI_InstancedContent* GetContent();
	void ExecuteUbergraph_WBP_GenericMenu_Buttons_Slot(int32 EntryPoint);

	void GetTextColor(struct FSlateColor* TextColor_Disabled_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GenericMenu_Buttons_Slot_C">();
	}
	static class UWBP_GenericMenu_Buttons_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GenericMenu_Buttons_Slot_C>();
	}
};
static_assert(alignof(UWBP_GenericMenu_Buttons_Slot_C) == 0x000008, "Wrong alignment on UWBP_GenericMenu_Buttons_Slot_C");
static_assert(sizeof(UWBP_GenericMenu_Buttons_Slot_C) == 0x0004A8, "Wrong size on UWBP_GenericMenu_Buttons_Slot_C");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, UberGraphFrame) == 0x000430, "Member 'UWBP_GenericMenu_Buttons_Slot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, Image_InnerFrame) == 0x000438, "Member 'UWBP_GenericMenu_Buttons_Slot_C::Image_InnerFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, Image_Link_Left) == 0x000440, "Member 'UWBP_GenericMenu_Buttons_Slot_C::Image_Link_Left' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, Image_Link_Right) == 0x000448, "Member 'UWBP_GenericMenu_Buttons_Slot_C::Image_Link_Right' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, TextBlock_Button) == 0x000450, "Member 'UWBP_GenericMenu_Buttons_Slot_C::TextBlock_Button' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, TextColor_Default) == 0x000458, "Member 'UWBP_GenericMenu_Buttons_Slot_C::TextColor_Default' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, TextColor_Selected) == 0x00046C, "Member 'UWBP_GenericMenu_Buttons_Slot_C::TextColor_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, TextColor_Hovered) == 0x000480, "Member 'UWBP_GenericMenu_Buttons_Slot_C::TextColor_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_GenericMenu_Buttons_Slot_C, TextColor_Disabled) == 0x000494, "Member 'UWBP_GenericMenu_Buttons_Slot_C::TextColor_Disabled' has a wrong offset!");

}

