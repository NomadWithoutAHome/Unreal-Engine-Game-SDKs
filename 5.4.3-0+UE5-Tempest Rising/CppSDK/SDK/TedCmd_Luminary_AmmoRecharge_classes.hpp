﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Luminary_AmmoRecharge

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Luminary_AmmoRecharge.TedCmd_Luminary_AmmoRecharge_C
// 0x0000 (0x0590 - 0x0590)
class UTedCmd_Luminary_AmmoRecharge_C final : public UTedPawnCommand_ToggleAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Luminary_AmmoRecharge_C">();
	}
	static class UTedCmd_Luminary_AmmoRecharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Luminary_AmmoRecharge_C>();
	}
};
static_assert(alignof(UTedCmd_Luminary_AmmoRecharge_C) == 0x000008, "Wrong alignment on UTedCmd_Luminary_AmmoRecharge_C");
static_assert(sizeof(UTedCmd_Luminary_AmmoRecharge_C) == 0x000590, "Wrong size on UTedCmd_Luminary_AmmoRecharge_C");

}

