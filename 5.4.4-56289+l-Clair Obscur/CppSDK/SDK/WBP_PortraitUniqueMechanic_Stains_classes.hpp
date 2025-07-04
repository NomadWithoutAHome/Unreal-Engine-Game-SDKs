﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PortraitUniqueMechanic_Stains

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "EStainChangeReason_structs.hpp"
#include "EAttackType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PortraitUniqueMechanic_Stains.WBP_PortraitUniqueMechanic_Stains_C
// 0x0040 (0x0320 - 0x02E0)
class UWBP_PortraitUniqueMechanic_Stains_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_StainsSupport;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_230;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GenericElement_Stain_C*            WBP_GenericElement_Stain_Bottom;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GenericElement_Stain_C*            WBP_GenericElement_Stain_Left;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GenericElement_Stain_C*            WBP_GenericElement_Stain_Right;                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GenericElement_Stain_C*            WBP_GenericElement_Stain_Top;                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_StainHolderComponent_C*             StainComponentRef;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_PortraitUniqueMechanic_Stains(int32 EntryPoint);
	void GetStainWidgets(TArray<class UWBP_GenericElement_Stain_C*>* StainWidgets);
	void OnNewStainAction(EStainChangeReason Reason, const TMap<EAttackType, int32>& GainedStains, const TMap<EAttackType, int32>& LostStains);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PortraitUniqueMechanic_Stains_C">();
	}
	static class UWBP_PortraitUniqueMechanic_Stains_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PortraitUniqueMechanic_Stains_C>();
	}
};
static_assert(alignof(UWBP_PortraitUniqueMechanic_Stains_C) == 0x000008, "Wrong alignment on UWBP_PortraitUniqueMechanic_Stains_C");
static_assert(sizeof(UWBP_PortraitUniqueMechanic_Stains_C) == 0x000320, "Wrong size on UWBP_PortraitUniqueMechanic_Stains_C");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, Image_StainsSupport) == 0x0002E8, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::Image_StainsSupport' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, UniformGridPanel_230) == 0x0002F0, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::UniformGridPanel_230' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, WBP_GenericElement_Stain_Bottom) == 0x0002F8, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::WBP_GenericElement_Stain_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, WBP_GenericElement_Stain_Left) == 0x000300, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::WBP_GenericElement_Stain_Left' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, WBP_GenericElement_Stain_Right) == 0x000308, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::WBP_GenericElement_Stain_Right' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, WBP_GenericElement_Stain_Top) == 0x000310, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::WBP_GenericElement_Stain_Top' has a wrong offset!");
static_assert(offsetof(UWBP_PortraitUniqueMechanic_Stains_C, StainComponentRef) == 0x000318, "Member 'UWBP_PortraitUniqueMechanic_Stains_C::StainComponentRef' has a wrong offset!");

}

