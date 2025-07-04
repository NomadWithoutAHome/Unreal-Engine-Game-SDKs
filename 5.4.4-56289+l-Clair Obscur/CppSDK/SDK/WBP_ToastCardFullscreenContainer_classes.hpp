﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToastCardFullscreenContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "EToastNotificationTheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToastCardFullscreenContainer.WBP_ToastCardFullscreenContainer_C
// 0x0030 (0x0310 - 0x02E0)
class UWBP_ToastCardFullscreenContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToastCard_C*                       WBP_ToastCard;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02F8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	EToastNotificationTheme                       Theme;                                             // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ToastCardFullscreenContainer(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SnapOnWidget(class UUserWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToastCardFullscreenContainer_C">();
	}
	static class UWBP_ToastCardFullscreenContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToastCardFullscreenContainer_C>();
	}
};
static_assert(alignof(UWBP_ToastCardFullscreenContainer_C) == 0x000008, "Wrong alignment on UWBP_ToastCardFullscreenContainer_C");
static_assert(sizeof(UWBP_ToastCardFullscreenContainer_C) == 0x000310, "Wrong size on UWBP_ToastCardFullscreenContainer_C");
static_assert(offsetof(UWBP_ToastCardFullscreenContainer_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_ToastCardFullscreenContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ToastCardFullscreenContainer_C, CanvasPanel) == 0x0002E8, "Member 'UWBP_ToastCardFullscreenContainer_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_ToastCardFullscreenContainer_C, WBP_ToastCard) == 0x0002F0, "Member 'UWBP_ToastCardFullscreenContainer_C::WBP_ToastCard' has a wrong offset!");
static_assert(offsetof(UWBP_ToastCardFullscreenContainer_C, Text) == 0x0002F8, "Member 'UWBP_ToastCardFullscreenContainer_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_ToastCardFullscreenContainer_C, Theme) == 0x000308, "Member 'UWBP_ToastCardFullscreenContainer_C::Theme' has a wrong offset!");

}

