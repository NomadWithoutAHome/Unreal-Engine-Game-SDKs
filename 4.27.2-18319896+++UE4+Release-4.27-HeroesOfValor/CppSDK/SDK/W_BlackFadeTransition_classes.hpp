﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BlackFadeTransition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_BlackFadeTransition.W_BlackFadeTransition_C
// 0x0018 (0x0278 - 0x0260)
class UW_BlackFadeTransition_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_21;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_BlackFadeTransition(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_BlackFadeTransition_C">();
	}
	static class UW_BlackFadeTransition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_BlackFadeTransition_C>();
	}
};
static_assert(alignof(UW_BlackFadeTransition_C) == 0x000008, "Wrong alignment on UW_BlackFadeTransition_C");
static_assert(sizeof(UW_BlackFadeTransition_C) == 0x000278, "Wrong size on UW_BlackFadeTransition_C");
static_assert(offsetof(UW_BlackFadeTransition_C, UberGraphFrame) == 0x000260, "Member 'UW_BlackFadeTransition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_BlackFadeTransition_C, Fade) == 0x000268, "Member 'UW_BlackFadeTransition_C::Fade' has a wrong offset!");
static_assert(offsetof(UW_BlackFadeTransition_C, Image_21) == 0x000270, "Member 'UW_BlackFadeTransition_C::Image_21' has a wrong offset!");

}

