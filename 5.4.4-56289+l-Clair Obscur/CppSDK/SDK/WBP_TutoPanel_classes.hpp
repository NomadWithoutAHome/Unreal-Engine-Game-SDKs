﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutoPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TutoPanel.WBP_TutoPanel_C
// 0x0038 (0x0318 - 0x02E0)
class UWBP_TutoPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BackGroundAppearAnim;                              // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelBack;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TutoText;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TutoTitle;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_TutoPanel(int32 EntryPoint);
	void ExitTuto();
	void SetTutoText(class UMediaSource* Media_Source, class UMediaTexture* Video, const class FText& NameToSet, const class FText& DescriptionToSet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TutoPanel_C">();
	}
	static class UWBP_TutoPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TutoPanel_C>();
	}
};
static_assert(alignof(UWBP_TutoPanel_C) == 0x000008, "Wrong alignment on UWBP_TutoPanel_C");
static_assert(sizeof(UWBP_TutoPanel_C) == 0x000318, "Wrong size on UWBP_TutoPanel_C");
static_assert(offsetof(UWBP_TutoPanel_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_TutoPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TutoPanel_C, BackGroundAppearAnim) == 0x0002E8, "Member 'UWBP_TutoPanel_C::BackGroundAppearAnim' has a wrong offset!");
static_assert(offsetof(UWBP_TutoPanel_C, Background) == 0x0002F0, "Member 'UWBP_TutoPanel_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_TutoPanel_C, Image_0) == 0x0002F8, "Member 'UWBP_TutoPanel_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_TutoPanel_C, PanelBack) == 0x000300, "Member 'UWBP_TutoPanel_C::PanelBack' has a wrong offset!");
static_assert(offsetof(UWBP_TutoPanel_C, TutoText) == 0x000308, "Member 'UWBP_TutoPanel_C::TutoText' has a wrong offset!");
static_assert(offsetof(UWBP_TutoPanel_C, TutoTitle) == 0x000310, "Member 'UWBP_TutoPanel_C::TutoTitle' has a wrong offset!");

}

