﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bayonet

#include "Basic.hpp"

#include "BP_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bayonet.BP_Bayonet_C
// 0x0000 (0x0360 - 0x0360)
class ABP_Bayonet_C : public ABP_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bayonet_C">();
	}
	static class ABP_Bayonet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bayonet_C>();
	}
};
static_assert(alignof(ABP_Bayonet_C) == 0x000010, "Wrong alignment on ABP_Bayonet_C");
static_assert(sizeof(ABP_Bayonet_C) == 0x000360, "Wrong size on ABP_Bayonet_C");

}

