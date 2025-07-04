﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JournalContent

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_JournalContent.WBP_JournalContent_C
// 0x0038 (0x0340 - 0x0308)
class UWBP_JournalContent_C final : public UCommonUserWidget
{
public:
	class USizeBox*                               ArrowBox;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   JournalEntryContent;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeadingText_C*                     JournalEntryTitle;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       JournalEntryZone;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*           ScrollBox;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool NeedScrollInput)> OnScrollInputNeeded;                        // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetJournalContent(class UBP_JournalViewItem_C* JournalViewItem);
	void UnlockJournalContent(class UBP_JournalViewItem_C* JournalViewItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_JournalContent_C">();
	}
	static class UWBP_JournalContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_JournalContent_C>();
	}
};
static_assert(alignof(UWBP_JournalContent_C) == 0x000008, "Wrong alignment on UWBP_JournalContent_C");
static_assert(sizeof(UWBP_JournalContent_C) == 0x000340, "Wrong size on UWBP_JournalContent_C");
static_assert(offsetof(UWBP_JournalContent_C, ArrowBox) == 0x000308, "Member 'UWBP_JournalContent_C::ArrowBox' has a wrong offset!");
static_assert(offsetof(UWBP_JournalContent_C, JournalEntryContent) == 0x000310, "Member 'UWBP_JournalContent_C::JournalEntryContent' has a wrong offset!");
static_assert(offsetof(UWBP_JournalContent_C, JournalEntryTitle) == 0x000318, "Member 'UWBP_JournalContent_C::JournalEntryTitle' has a wrong offset!");
static_assert(offsetof(UWBP_JournalContent_C, JournalEntryZone) == 0x000320, "Member 'UWBP_JournalContent_C::JournalEntryZone' has a wrong offset!");
static_assert(offsetof(UWBP_JournalContent_C, ScrollBox) == 0x000328, "Member 'UWBP_JournalContent_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_JournalContent_C, OnScrollInputNeeded) == 0x000330, "Member 'UWBP_JournalContent_C::OnScrollInputNeeded' has a wrong offset!");

}

