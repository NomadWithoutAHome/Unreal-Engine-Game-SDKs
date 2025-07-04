﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_ToastNotificationHelpers

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "EToastNotificationTheme_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FL_ToastNotificationHelpers.FL_ToastNotificationHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UFL_ToastNotificationHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static void ShowToastNotificationOnWidget(const class FText& Text, EToastNotificationTheme Theme, class UUserWidget* Widget, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FL_ToastNotificationHelpers_C">();
	}
	static class UFL_ToastNotificationHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFL_ToastNotificationHelpers_C>();
	}
};
static_assert(alignof(UFL_ToastNotificationHelpers_C) == 0x000008, "Wrong alignment on UFL_ToastNotificationHelpers_C");
static_assert(sizeof(UFL_ToastNotificationHelpers_C) == 0x000028, "Wrong size on UFL_ToastNotificationHelpers_C");

}

