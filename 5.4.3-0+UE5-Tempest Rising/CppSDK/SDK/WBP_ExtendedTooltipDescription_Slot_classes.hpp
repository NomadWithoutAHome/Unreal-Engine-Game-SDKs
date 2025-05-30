﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ExtendedTooltipDescription_Slot

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ExtendedTooltipDescription_Slot.WBP_ExtendedTooltipDescription_Slot_C
// 0x0010 (0x0420 - 0x0410)
class UWBP_ExtendedTooltipDescription_Slot_C final : public UTedContentPanelSlotBase
{
public:
	class UTextBlock*                             TextBlock_Category;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_List;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	const class UTedUI_InstancedContent* GetContent();
	void RefreshUI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExtendedTooltipDescription_Slot_C">();
	}
	static class UWBP_ExtendedTooltipDescription_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExtendedTooltipDescription_Slot_C>();
	}
};
static_assert(alignof(UWBP_ExtendedTooltipDescription_Slot_C) == 0x000008, "Wrong alignment on UWBP_ExtendedTooltipDescription_Slot_C");
static_assert(sizeof(UWBP_ExtendedTooltipDescription_Slot_C) == 0x000420, "Wrong size on UWBP_ExtendedTooltipDescription_Slot_C");
static_assert(offsetof(UWBP_ExtendedTooltipDescription_Slot_C, TextBlock_Category) == 0x000410, "Member 'UWBP_ExtendedTooltipDescription_Slot_C::TextBlock_Category' has a wrong offset!");
static_assert(offsetof(UWBP_ExtendedTooltipDescription_Slot_C, TextBlock_List) == 0x000418, "Member 'UWBP_ExtendedTooltipDescription_Slot_C::TextBlock_List' has a wrong offset!");

}

