﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PanzerShreck

#include "Basic.hpp"

#include "BP_Bazooka_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PanzerShreck.BP_PanzerShreck_C
// 0x0000 (0x0498 - 0x0498)
class ABP_PanzerShreck_C final : public ABP_Bazooka_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PanzerShreck_C">();
	}
	static class ABP_PanzerShreck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PanzerShreck_C>();
	}
};
static_assert(alignof(ABP_PanzerShreck_C) == 0x000008, "Wrong alignment on ABP_PanzerShreck_C");
static_assert(sizeof(ABP_PanzerShreck_C) == 0x000498, "Wrong size on ABP_PanzerShreck_C");

}

