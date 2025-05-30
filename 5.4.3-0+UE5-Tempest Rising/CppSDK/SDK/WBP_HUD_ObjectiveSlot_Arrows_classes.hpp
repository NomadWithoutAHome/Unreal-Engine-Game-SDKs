﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_ObjectiveSlot_Arrows

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_ObjectiveSlot_Arrows.WBP_HUD_ObjectiveSlot_Arrows_C
// 0x00B0 (0x0398 - 0x02E8)
class UWBP_HUD_ObjectiveSlot_Arrows_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Show;                                         // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Arrows_Primary;                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Arrows_Secondary;                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Lines_Primary;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Lines_Secondary;                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryArrow_B;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryArrow_L;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryArrow_R;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryArrow_T;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryLine_BL;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryLine_BR;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryLine_TL;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PrimaryLine_TR;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryArrow_B;                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryArrow_L;                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryArrow_R;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryArrow_T;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryLine_BL;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryLine_BR;                            // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryLine_TL;                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SecondaryLine_TR;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HUD_ObjectiveSlot_Arrows(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim(const struct FLinearColor& InColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_ObjectiveSlot_Arrows_C">();
	}
	static class UWBP_HUD_ObjectiveSlot_Arrows_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_ObjectiveSlot_Arrows_C>();
	}
};
static_assert(alignof(UWBP_HUD_ObjectiveSlot_Arrows_C) == 0x000008, "Wrong alignment on UWBP_HUD_ObjectiveSlot_Arrows_C");
static_assert(sizeof(UWBP_HUD_ObjectiveSlot_Arrows_C) == 0x000398, "Wrong size on UWBP_HUD_ObjectiveSlot_Arrows_C");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Anim_Show) == 0x0002F0, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Anim_Show' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, CanvasPanel_Arrows_Primary) == 0x0002F8, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::CanvasPanel_Arrows_Primary' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, CanvasPanel_Arrows_Secondary) == 0x000300, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::CanvasPanel_Arrows_Secondary' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, CanvasPanel_Lines_Primary) == 0x000308, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::CanvasPanel_Lines_Primary' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, CanvasPanel_Lines_Secondary) == 0x000310, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::CanvasPanel_Lines_Secondary' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryArrow_B) == 0x000318, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryArrow_B' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryArrow_L) == 0x000320, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryArrow_L' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryArrow_R) == 0x000328, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryArrow_R' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryArrow_T) == 0x000330, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryArrow_T' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryLine_BL) == 0x000338, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryLine_BL' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryLine_BR) == 0x000340, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryLine_BR' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryLine_TL) == 0x000348, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryLine_TL' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_PrimaryLine_TR) == 0x000350, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_PrimaryLine_TR' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryArrow_B) == 0x000358, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryArrow_B' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryArrow_L) == 0x000360, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryArrow_L' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryArrow_R) == 0x000368, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryArrow_R' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryArrow_T) == 0x000370, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryArrow_T' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryLine_BL) == 0x000378, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryLine_BL' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryLine_BR) == 0x000380, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryLine_BR' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryLine_TL) == 0x000388, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryLine_TL' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_ObjectiveSlot_Arrows_C, Image_SecondaryLine_TR) == 0x000390, "Member 'UWBP_HUD_ObjectiveSlot_Arrows_C::Image_SecondaryLine_TR' has a wrong offset!");

}

