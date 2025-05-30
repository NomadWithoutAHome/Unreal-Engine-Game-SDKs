﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SliderNoStep

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SliderNoStep.W_SliderNoStep_C
// 0x0028 (0x0288 - 0x0260)
class UW_SliderNoStep_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USlider*                                Slider_49;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(float Value)>   OnValueChanged;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         InitialValue;                                      // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinValue;                                          // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_SliderNoStep(int32 EntryPoint);
	void Reload();
	void BndEvt__W_Slider_Slider_49_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SliderNoStep_C">();
	}
	static class UW_SliderNoStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SliderNoStep_C>();
	}
};
static_assert(alignof(UW_SliderNoStep_C) == 0x000008, "Wrong alignment on UW_SliderNoStep_C");
static_assert(sizeof(UW_SliderNoStep_C) == 0x000288, "Wrong size on UW_SliderNoStep_C");
static_assert(offsetof(UW_SliderNoStep_C, UberGraphFrame) == 0x000260, "Member 'UW_SliderNoStep_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SliderNoStep_C, Slider_49) == 0x000268, "Member 'UW_SliderNoStep_C::Slider_49' has a wrong offset!");
static_assert(offsetof(UW_SliderNoStep_C, OnValueChanged) == 0x000270, "Member 'UW_SliderNoStep_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UW_SliderNoStep_C, InitialValue) == 0x000280, "Member 'UW_SliderNoStep_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UW_SliderNoStep_C, MinValue) == 0x000284, "Member 'UW_SliderNoStep_C::MinValue' has a wrong offset!");

}

