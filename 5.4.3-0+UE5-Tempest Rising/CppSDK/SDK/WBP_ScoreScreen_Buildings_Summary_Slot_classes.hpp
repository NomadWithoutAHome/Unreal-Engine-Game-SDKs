﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScoreScreen_Buildings_Summary_Slot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScoreScreen_Buildings_Summary_Slot.WBP_ScoreScreen_Buildings_Summary_Slot_C
// 0x0050 (0x0480 - 0x0430)
class UWBP_ScoreScreen_Buildings_Summary_Slot_C final : public UTedGenericDataContentSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Values;                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_Captured;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_DamageDealt;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_Lost;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Player_C* Value_Player;                                    // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_Produced;                                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_Sold;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_Team;                                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreScreen_StatTable_Cell_Text_C* Value_UnitsKilled;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ScoreScreen_Buildings_Summary_Slot(int32 EntryPoint);
	void RefreshFaction();
	void RefreshName();
	void RefreshPortrait();
	void RefreshTeam();
	void RefreshUI();
	void SetAvatar(class UTexture2D* InTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScoreScreen_Buildings_Summary_Slot_C">();
	}
	static class UWBP_ScoreScreen_Buildings_Summary_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScoreScreen_Buildings_Summary_Slot_C>();
	}
};
static_assert(alignof(UWBP_ScoreScreen_Buildings_Summary_Slot_C) == 0x000008, "Wrong alignment on UWBP_ScoreScreen_Buildings_Summary_Slot_C");
static_assert(sizeof(UWBP_ScoreScreen_Buildings_Summary_Slot_C) == 0x000480, "Wrong size on UWBP_ScoreScreen_Buildings_Summary_Slot_C");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, UberGraphFrame) == 0x000430, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, HorizontalBox_Values) == 0x000438, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::HorizontalBox_Values' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_Captured) == 0x000440, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_Captured' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_DamageDealt) == 0x000448, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_DamageDealt' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_Lost) == 0x000450, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_Lost' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_Player) == 0x000458, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_Player' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_Produced) == 0x000460, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_Produced' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_Sold) == 0x000468, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_Sold' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_Team) == 0x000470, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_Team' has a wrong offset!");
static_assert(offsetof(UWBP_ScoreScreen_Buildings_Summary_Slot_C, Value_UnitsKilled) == 0x000478, "Member 'UWBP_ScoreScreen_Buildings_Summary_Slot_C::Value_UnitsKilled' has a wrong offset!");

}

