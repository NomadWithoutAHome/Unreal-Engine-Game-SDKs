﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PocketSMG_Allied

#include "Basic.hpp"

#include "BP_RangedWeaponBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PocketSMG_Allied.BP_PocketSMG_Allied_C
// 0x0000 (0x0488 - 0x0488)
class ABP_PocketSMG_Allied_C : public ABP_RangedWeaponBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PocketSMG_Allied_C">();
	}
	static class ABP_PocketSMG_Allied_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PocketSMG_Allied_C>();
	}
};
static_assert(alignof(ABP_PocketSMG_Allied_C) == 0x000008, "Wrong alignment on ABP_PocketSMG_Allied_C");
static_assert(sizeof(ABP_PocketSMG_Allied_C) == 0x000488, "Wrong size on ABP_PocketSMG_Allied_C");

}

