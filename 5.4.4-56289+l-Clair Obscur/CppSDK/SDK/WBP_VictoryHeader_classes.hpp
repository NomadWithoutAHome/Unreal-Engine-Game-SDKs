﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VictoryHeader

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_VictoryHeader.WBP_VictoryHeader_C
// 0x0008 (0x0310 - 0x0308)
class UWBP_VictoryHeader_C final : public UCommonUserWidget
{
public:
	class USafeZone*                              SafeZone_0;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VictoryHeader_C">();
	}
	static class UWBP_VictoryHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VictoryHeader_C>();
	}
};
static_assert(alignof(UWBP_VictoryHeader_C) == 0x000008, "Wrong alignment on UWBP_VictoryHeader_C");
static_assert(sizeof(UWBP_VictoryHeader_C) == 0x000310, "Wrong size on UWBP_VictoryHeader_C");
static_assert(offsetof(UWBP_VictoryHeader_C, SafeZone_0) == 0x000308, "Member 'UWBP_VictoryHeader_C::SafeZone_0' has a wrong offset!");

}

