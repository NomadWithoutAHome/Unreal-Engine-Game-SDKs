﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_StructureControls_Slot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_StructureControls_Slot.WBP_HUD_StructureControls_Slot_C
// 0x0020 (0x0468 - 0x0448)
class UWBP_HUD_StructureControls_Slot_C final : public UTedStructureCommandButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Background;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hover;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HUD_StructureControls_Slot(int32 EntryPoint);
	void OnActivateState(ETedContentSlotState InState, bool bInActivated);
	void RefreshHoverVisibility();
	void RefreshIcon();
	void RefreshUI();

	void GetMaterialsSupportingStates(TArray<class UMaterialInstanceDynamic*>* OutMIDs) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_StructureControls_Slot_C">();
	}
	static class UWBP_HUD_StructureControls_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_StructureControls_Slot_C>();
	}
};
static_assert(alignof(UWBP_HUD_StructureControls_Slot_C) == 0x000008, "Wrong alignment on UWBP_HUD_StructureControls_Slot_C");
static_assert(sizeof(UWBP_HUD_StructureControls_Slot_C) == 0x000468, "Wrong size on UWBP_HUD_StructureControls_Slot_C");
static_assert(offsetof(UWBP_HUD_StructureControls_Slot_C, UberGraphFrame) == 0x000448, "Member 'UWBP_HUD_StructureControls_Slot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_StructureControls_Slot_C, Image_Background) == 0x000450, "Member 'UWBP_HUD_StructureControls_Slot_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_StructureControls_Slot_C, Image_Hover) == 0x000458, "Member 'UWBP_HUD_StructureControls_Slot_C::Image_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_StructureControls_Slot_C, Image_Icon) == 0x000460, "Member 'UWBP_HUD_StructureControls_Slot_C::Image_Icon' has a wrong offset!");

}

