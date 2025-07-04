﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterShieldCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterShieldCounter.WBP_CharacterShieldCounter_C
// 0x0038 (0x0340 - 0x0308)
class UWBP_CharacterShieldCounter_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Disappear;                                    // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Reduce;                                       // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Increase;                                     // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       Image_Shield;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ShieldCounterText;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Shield_Count;                                      // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventDisappear();
	void EventShowShieldOnBar();
	void ExecuteUbergraph_WBP_CharacterShieldCounter(int32 EntryPoint);
	void Finished_34AD2F6C424A5C37F55FE0BCE2F12EB2();
	void SetShieldCounter(int32 InShieldCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterShieldCounter_C">();
	}
	static class UWBP_CharacterShieldCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterShieldCounter_C>();
	}
};
static_assert(alignof(UWBP_CharacterShieldCounter_C) == 0x000008, "Wrong alignment on UWBP_CharacterShieldCounter_C");
static_assert(sizeof(UWBP_CharacterShieldCounter_C) == 0x000340, "Wrong size on UWBP_CharacterShieldCounter_C");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, UberGraphFrame) == 0x000308, "Member 'UWBP_CharacterShieldCounter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, Anim_Disappear) == 0x000310, "Member 'UWBP_CharacterShieldCounter_C::Anim_Disappear' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, Anim_Reduce) == 0x000318, "Member 'UWBP_CharacterShieldCounter_C::Anim_Reduce' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, Anim_Increase) == 0x000320, "Member 'UWBP_CharacterShieldCounter_C::Anim_Increase' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, Image_Shield) == 0x000328, "Member 'UWBP_CharacterShieldCounter_C::Image_Shield' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, ShieldCounterText) == 0x000330, "Member 'UWBP_CharacterShieldCounter_C::ShieldCounterText' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterShieldCounter_C, Shield_Count) == 0x000338, "Member 'UWBP_CharacterShieldCounter_C::Shield_Count' has a wrong offset!");

}

