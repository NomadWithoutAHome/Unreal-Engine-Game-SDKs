﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialContent

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TutorialContent.WBP_TutorialContent_C
// 0x0018 (0x0320 - 0x0308)
class UWBP_TutorialContent_C final : public UCommonUserWidget
{
public:
	class UCommonHierarchicalScrollBox*           ScrollBox;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   TutorialEntryContent;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeadingText_C*                     TutorialEntryTitle;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTutorialContent(class UBP_TutorialViewItem_C* TutorialViewItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TutorialContent_C">();
	}
	static class UWBP_TutorialContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TutorialContent_C>();
	}
};
static_assert(alignof(UWBP_TutorialContent_C) == 0x000008, "Wrong alignment on UWBP_TutorialContent_C");
static_assert(sizeof(UWBP_TutorialContent_C) == 0x000320, "Wrong size on UWBP_TutorialContent_C");
static_assert(offsetof(UWBP_TutorialContent_C, ScrollBox) == 0x000308, "Member 'UWBP_TutorialContent_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialContent_C, TutorialEntryContent) == 0x000310, "Member 'UWBP_TutorialContent_C::TutorialEntryContent' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialContent_C, TutorialEntryTitle) == 0x000318, "Member 'UWBP_TutorialContent_C::TutorialEntryTitle' has a wrong offset!");

}

