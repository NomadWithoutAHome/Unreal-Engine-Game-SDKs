﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScoreScreen_Objective_Panel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScoreScreen_Objective_Panel.WBP_ScoreScreen_Objective_Panel_C
// 0x0068 (0x0A40 - 0x09D8)
class UWBP_ScoreScreen_Objective_Panel_C final : public UTedObjectivePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GlowingWidget_Text_Fill_C*         Text_Title;                                        // 0x09E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x09E8(0x0010)(Edit, BlueprintVisible)
	struct FMargin                                SlotPadding;                                       // 0x09F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TMulticastInlineDelegate<void()>              AllObjectivesActive;                               // 0x0A08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(double ReqauisitionProvided)> ObjectiveActivated;                  // 0x0A18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Iterator;                                          // 0x0A28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2C[0x4];                                      // 0x0A2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ScoreScreen_Objective_Slot_C*      LastActivatedSlot;                                 // 0x0A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ActivationStarted;                                 // 0x0A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateNexSlot();
	void Construct();
	void ExecuteUbergraph_WBP_ScoreScreen_Objective_Panel(int32 EntryPoint);
	void OnActiveTabChanged(bool bIsActive);
	void OnSlotActivated(double RequsitionGained);
	void PreConstruct(bool IsDesignTime);
	void RefreshUI();
	void SetEnabledAmount(int32 Amount);
	void ShowAnimated();
	void ShowChildren();
	void StartActivateObjectives();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScoreScreen_Objective_Panel_C">();
	}
	static class UWBP_ScoreScreen_Objective_Panel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScoreScreen_Objective_Panel_C>();
	}
};
static_assert(alignof(UWBP_ScoreScreen_Objective_Panel_C) == 0x000008, "Wrong alignment on UWBP_ScoreScreen_Objective_Panel_C");
static_assert(sizeof(UWBP_ScoreScreen_Objective_Panel_C) == 0x000A40, "Wrong size on UWBP_ScoreScreen_Objective_Panel_C");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, UberGraphFrame) == 0x0009D8, "Member 'UWBP_ScoreScreen_Objective_Panel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, Text_Title) == 0x0009E0, "Member 'UWBP_ScoreScreen_Objective_Panel_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, Title) == 0x0009E8, "Member 'UWBP_ScoreScreen_Objective_Panel_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, SlotPadding) == 0x0009F8, "Member 'UWBP_ScoreScreen_Objective_Panel_C::SlotPadding' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, AllObjectivesActive) == 0x000A08, "Member 'UWBP_ScoreScreen_Objective_Panel_C::AllObjectivesActive' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, ObjectiveActivated) == 0x000A18, "Member 'UWBP_ScoreScreen_Objective_Panel_C::ObjectiveActivated' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, Iterator) == 0x000A28, "Member 'UWBP_ScoreScreen_Objective_Panel_C::Iterator' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, LastActivatedSlot) == 0x000A30, "Member 'UWBP_ScoreScreen_Objective_Panel_C::LastActivatedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Objective_Panel_C, ActivationStarted) == 0x000A38, "Member 'UWBP_ScoreScreen_Objective_Panel_C::ActivationStarted' has a wrong offset!");

}

