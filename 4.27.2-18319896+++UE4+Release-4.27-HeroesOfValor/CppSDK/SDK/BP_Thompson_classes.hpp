﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Thompson

#include "Basic.hpp"

#include "BP_RangedWeaponBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Thompson.BP_Thompson_C
// 0x0000 (0x0488 - 0x0488)
class ABP_Thompson_C : public ABP_RangedWeaponBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Thompson_C">();
	}
	static class ABP_Thompson_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Thompson_C>();
	}
};
static_assert(alignof(ABP_Thompson_C) == 0x000008, "Wrong alignment on ABP_Thompson_C");
static_assert(sizeof(ABP_Thompson_C) == 0x000488, "Wrong size on ABP_Thompson_C");

}

