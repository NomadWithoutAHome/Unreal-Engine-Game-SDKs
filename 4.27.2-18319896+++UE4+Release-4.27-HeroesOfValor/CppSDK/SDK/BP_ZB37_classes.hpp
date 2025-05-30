﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZB37

#include "Basic.hpp"

#include "BP_Browning_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ZB37.BP_ZB37_C
// 0x0000 (0x0488 - 0x0488)
class ABP_ZB37_C final : public ABP_Browning_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZB37_C">();
	}
	static class ABP_ZB37_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZB37_C>();
	}
};
static_assert(alignof(ABP_ZB37_C) == 0x000008, "Wrong alignment on ABP_ZB37_C");
static_assert(sizeof(ABP_ZB37_C) == 0x000488, "Wrong size on ABP_ZB37_C");

}

