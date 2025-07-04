﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemUnlockConditionCard

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemUnlockConditionCard.WBP_ItemUnlockConditionCard_C
// 0x0008 (0x02E8 - 0x02E0)
class UWBP_ItemUnlockConditionCard_C final : public UUserWidget
{
public:
	class UCommonTextBlock*                       ConditionDescription;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetConditionText(const class FText& ConditionText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemUnlockConditionCard_C">();
	}
	static class UWBP_ItemUnlockConditionCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemUnlockConditionCard_C>();
	}
};
static_assert(alignof(UWBP_ItemUnlockConditionCard_C) == 0x000008, "Wrong alignment on UWBP_ItemUnlockConditionCard_C");
static_assert(sizeof(UWBP_ItemUnlockConditionCard_C) == 0x0002E8, "Wrong size on UWBP_ItemUnlockConditionCard_C");
static_assert(offsetof(UWBP_ItemUnlockConditionCard_C, ConditionDescription) == 0x0002E0, "Member 'UWBP_ItemUnlockConditionCard_C::ConditionDescription' has a wrong offset!");

}

