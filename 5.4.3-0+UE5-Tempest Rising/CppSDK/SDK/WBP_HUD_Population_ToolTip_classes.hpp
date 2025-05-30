﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_Population_ToolTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_Population_ToolTip.WBP_HUD_Population_ToolTip_C
// 0x0040 (0x04E0 - 0x04A0)
class UWBP_HUD_Population_ToolTip_C final : public UTedTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Commando_HorizontalBox;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Population_HorizontalBox;                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Specialist_HorizontalBox;                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Value;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Value_1;                                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Value_2;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_HUD_Population_ToolTip(int32 EntryPoint);
	void GetCommandos(class FText* Output);
	void GetPopulation(class FText* Output);
	void GetSpecialists(class FText* Output);
	void OnConstructionQueueChange_Event(class UTedPlayerData* InPlayerData, const struct FTedPlayerDataConstructionQueues& InPrevious, const struct FTedPlayerDataConstructionQueues& InCurrent);
	void OnResourcesChangeEvent_Event(class UTedPlayerData* InPlayerData, const struct FTedPlayerDataResources& InPrevious, const struct FTedPlayerDataResources& InCurrent);
	void OnTooltipShown();
	void RefreshUI();
	void SetupTextBlock(class UTextBlock* InTextBlock, class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_Population_ToolTip_C">();
	}
	static class UWBP_HUD_Population_ToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_Population_ToolTip_C>();
	}
};
static_assert(alignof(UWBP_HUD_Population_ToolTip_C) == 0x000008, "Wrong alignment on UWBP_HUD_Population_ToolTip_C");
static_assert(sizeof(UWBP_HUD_Population_ToolTip_C) == 0x0004E0, "Wrong size on UWBP_HUD_Population_ToolTip_C");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, UberGraphFrame) == 0x0004A0, "Member 'UWBP_HUD_Population_ToolTip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, Commando_HorizontalBox) == 0x0004A8, "Member 'UWBP_HUD_Population_ToolTip_C::Commando_HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, Population_HorizontalBox) == 0x0004B0, "Member 'UWBP_HUD_Population_ToolTip_C::Population_HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, Specialist_HorizontalBox) == 0x0004B8, "Member 'UWBP_HUD_Population_ToolTip_C::Specialist_HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, Text_Value) == 0x0004C0, "Member 'UWBP_HUD_Population_ToolTip_C::Text_Value' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, Text_Value_1) == 0x0004C8, "Member 'UWBP_HUD_Population_ToolTip_C::Text_Value_1' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, Text_Value_2) == 0x0004D0, "Member 'UWBP_HUD_Population_ToolTip_C::Text_Value_2' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Population_ToolTip_C, TextBlock_Name) == 0x0004D8, "Member 'UWBP_HUD_Population_ToolTip_C::TextBlock_Name' has a wrong offset!");

}

