﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mp40

#include "Basic.hpp"

#include "BP_Thompson_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Mp40.BP_Mp40_C
// 0x0000 (0x0488 - 0x0488)
class ABP_Mp40_C final : public ABP_Thompson_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Mp40_C">();
	}
	static class ABP_Mp40_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Mp40_C>();
	}
};
static_assert(alignof(ABP_Mp40_C) == 0x000008, "Wrong alignment on ABP_Mp40_C");
static_assert(sizeof(ABP_Mp40_C) == 0x000488, "Wrong size on ABP_Mp40_C");

}

