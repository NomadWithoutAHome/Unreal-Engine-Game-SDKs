﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_GenericParameterListWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Debug_GenericParameterListWidget.WBP_Debug_GenericParameterListWidget_C
// 0x0010 (0x02F0 - 0x02E0)
class UWBP_Debug_GenericParameterListWidget_C final : public UUserWidget
{
public:
	class UTextBlock*                             ParameterNameText;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ParameterValueText;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetParameterName(const class FString& Name_0);
	void SetParameterValueAsActorArray(TArray<class AActor*>& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Debug_GenericParameterListWidget_C">();
	}
	static class UWBP_Debug_GenericParameterListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Debug_GenericParameterListWidget_C>();
	}
};
static_assert(alignof(UWBP_Debug_GenericParameterListWidget_C) == 0x000008, "Wrong alignment on UWBP_Debug_GenericParameterListWidget_C");
static_assert(sizeof(UWBP_Debug_GenericParameterListWidget_C) == 0x0002F0, "Wrong size on UWBP_Debug_GenericParameterListWidget_C");
static_assert(offsetof(UWBP_Debug_GenericParameterListWidget_C, ParameterNameText) == 0x0002E0, "Member 'UWBP_Debug_GenericParameterListWidget_C::ParameterNameText' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GenericParameterListWidget_C, ParameterValueText) == 0x0002E8, "Member 'UWBP_Debug_GenericParameterListWidget_C::ParameterValueText' has a wrong offset!");

}

