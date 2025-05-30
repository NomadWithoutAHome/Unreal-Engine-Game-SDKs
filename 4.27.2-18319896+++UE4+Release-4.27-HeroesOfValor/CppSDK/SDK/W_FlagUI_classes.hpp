﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FlagUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_Teams_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FlagUI.W_FlagUI_C
// 0x0050 (0x02B0 - 0x0260)
class UW_FlagUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_47;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_46;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Flag_C*                             Flag;                                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowCloseUI;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_FlagUI(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	struct FSlateBrush SetFlagIcon();
	ESlateVisibility FarUIVisibility();
	ESlateVisibility CloseUIVisibility();
	ESlateVisibility ShowHUD();
	struct FSlateBrush SetSmallFlagIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FlagUI_C">();
	}
	static class UW_FlagUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FlagUI_C>();
	}
};
static_assert(alignof(UW_FlagUI_C) == 0x000008, "Wrong alignment on UW_FlagUI_C");
static_assert(sizeof(UW_FlagUI_C) == 0x0002B0, "Wrong size on UW_FlagUI_C");
static_assert(offsetof(UW_FlagUI_C, UberGraphFrame) == 0x000260, "Member 'UW_FlagUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, Border_0) == 0x000268, "Member 'UW_FlagUI_C::Border_0' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, CanvasPanel_0) == 0x000270, "Member 'UW_FlagUI_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, Image) == 0x000278, "Member 'UW_FlagUI_C::Image' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, Image_47) == 0x000280, "Member 'UW_FlagUI_C::Image_47' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, ProgressBar) == 0x000288, "Member 'UW_FlagUI_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, ProgressBar_46) == 0x000290, "Member 'UW_FlagUI_C::ProgressBar_46' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, VerticalBox_0) == 0x000298, "Member 'UW_FlagUI_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, Flag) == 0x0002A0, "Member 'UW_FlagUI_C::Flag' has a wrong offset!");
static_assert(offsetof(UW_FlagUI_C, ShowCloseUI) == 0x0002A8, "Member 'UW_FlagUI_C::ShowCloseUI' has a wrong offset!");

}

