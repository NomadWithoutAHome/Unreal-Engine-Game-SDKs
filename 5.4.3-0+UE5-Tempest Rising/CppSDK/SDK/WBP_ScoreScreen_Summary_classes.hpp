﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScoreScreen_Summary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScoreScreen_Summary.WBP_ScoreScreen_Summary_C
// 0x0018 (0x0518 - 0x0500)
class UWBP_ScoreScreen_Summary_C final : public UTedScoreScreenStatsTableTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                                HeadersScrollbarPadding;                           // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTedScrollBox*                          TedScrollBox_1;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ScoreScreen_Summary(int32 EntryPoint);
	void OnScrollBarVisibilityChanged(ESlateVisibility NewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScoreScreen_Summary_C">();
	}
	static class UWBP_ScoreScreen_Summary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScoreScreen_Summary_C>();
	}
};
static_assert(alignof(UWBP_ScoreScreen_Summary_C) == 0x000008, "Wrong alignment on UWBP_ScoreScreen_Summary_C");
static_assert(sizeof(UWBP_ScoreScreen_Summary_C) == 0x000518, "Wrong size on UWBP_ScoreScreen_Summary_C");
static_assert(offsetof(UWBP_ScoreScreen_Summary_C, UberGraphFrame) == 0x000500, "Member 'UWBP_ScoreScreen_Summary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Summary_C, HeadersScrollbarPadding) == 0x000508, "Member 'UWBP_ScoreScreen_Summary_C::HeadersScrollbarPadding' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Summary_C, TedScrollBox_1) == 0x000510, "Member 'UWBP_ScoreScreen_Summary_C::TedScrollBox_1' has a wrong offset!");

}

