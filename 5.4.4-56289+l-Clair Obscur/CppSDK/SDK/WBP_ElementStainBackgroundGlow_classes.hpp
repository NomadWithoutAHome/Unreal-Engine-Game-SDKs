﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ElementStainBackgroundGlow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ElementStainBackgroundGlow.WBP_ElementStainBackgroundGlow_C
// 0x0020 (0x0300 - 0x02E0)
class UWBP_ElementStainBackgroundGlow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Fade;                                         // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BackgroundGlow;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Appear();
	void Construct();
	void Disappear();
	void ExecuteUbergraph_WBP_ElementStainBackgroundGlow(int32 EntryPoint);
	void SetGlowColor(const struct FLinearColor& InColorAndOpacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ElementStainBackgroundGlow_C">();
	}
	static class UWBP_ElementStainBackgroundGlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ElementStainBackgroundGlow_C>();
	}
};
static_assert(alignof(UWBP_ElementStainBackgroundGlow_C) == 0x000008, "Wrong alignment on UWBP_ElementStainBackgroundGlow_C");
static_assert(sizeof(UWBP_ElementStainBackgroundGlow_C) == 0x000300, "Wrong size on UWBP_ElementStainBackgroundGlow_C");
static_assert(offsetof(UWBP_ElementStainBackgroundGlow_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_ElementStainBackgroundGlow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ElementStainBackgroundGlow_C, Anim_Fade) == 0x0002E8, "Member 'UWBP_ElementStainBackgroundGlow_C::Anim_Fade' has a wrong offset!");
static_assert(offsetof(UWBP_ElementStainBackgroundGlow_C, BackgroundGlow) == 0x0002F0, "Member 'UWBP_ElementStainBackgroundGlow_C::BackgroundGlow' has a wrong offset!");
static_assert(offsetof(UWBP_ElementStainBackgroundGlow_C, RetainerBox) == 0x0002F8, "Member 'UWBP_ElementStainBackgroundGlow_C::RetainerBox' has a wrong offset!");

}

