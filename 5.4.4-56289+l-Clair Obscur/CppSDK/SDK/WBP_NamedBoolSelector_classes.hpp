﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NamedBoolSelector

#include "Basic.hpp"

#include "WBP_NamedValueSelector_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NamedBoolSelector.WBP_NamedBoolSelector_C
// 0x0010 (0x1630 - 0x1620)
class UWBP_NamedBoolSelector_C final : public UWBP_NamedValueSelector_C
{
public:
	TMulticastInlineDelegate<void(bool Value, class FText Name, class UUserWidget* Widget)> OnValueChanged; // 0x1620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetSelectedValue(bool Value);
	void GetSelectedValue(bool* Value);
	void SetAvailableValues(const class FText& FalseValue, const class FText& TrueValue);
	void DispatchOnValueChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NamedBoolSelector_C">();
	}
	static class UWBP_NamedBoolSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NamedBoolSelector_C>();
	}
};
static_assert(alignof(UWBP_NamedBoolSelector_C) == 0x000010, "Wrong alignment on UWBP_NamedBoolSelector_C");
static_assert(sizeof(UWBP_NamedBoolSelector_C) == 0x001630, "Wrong size on UWBP_NamedBoolSelector_C");
static_assert(offsetof(UWBP_NamedBoolSelector_C, OnValueChanged) == 0x001620, "Member 'UWBP_NamedBoolSelector_C::OnValueChanged' has a wrong offset!");

}

