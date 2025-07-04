﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NamedFloatSelector

#include "Basic.hpp"

#include "WBP_NamedValueSelector_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NamedFloatSelector.WBP_NamedFloatSelector_C
// 0x0020 (0x1640 - 0x1620)
class UWBP_NamedFloatSelector_C final : public UWBP_NamedValueSelector_C
{
public:
	TArray<double>                                AvailableFloats;                                   // 0x1620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(double Value, class FText Name, class UUserWidget* Widget)> OnValueChanged; // 0x1630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void DispatchOnValueChanged();
	void GetSelectedValue(double* Value);
	void SetAvailableValues(const TMap<double, class FText>& Values);
	void SetSelectedValue(const double& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NamedFloatSelector_C">();
	}
	static class UWBP_NamedFloatSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NamedFloatSelector_C>();
	}
};
static_assert(alignof(UWBP_NamedFloatSelector_C) == 0x000010, "Wrong alignment on UWBP_NamedFloatSelector_C");
static_assert(sizeof(UWBP_NamedFloatSelector_C) == 0x001640, "Wrong size on UWBP_NamedFloatSelector_C");
static_assert(offsetof(UWBP_NamedFloatSelector_C, AvailableFloats) == 0x001620, "Member 'UWBP_NamedFloatSelector_C::AvailableFloats' has a wrong offset!");
static_assert(offsetof(UWBP_NamedFloatSelector_C, OnValueChanged) == 0x001630, "Member 'UWBP_NamedFloatSelector_C::OnValueChanged' has a wrong offset!");

}

