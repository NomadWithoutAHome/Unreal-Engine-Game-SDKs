﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmdAbility_TempestChaff

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmdAbility_TempestChaff.TedCmdAbility_TempestChaff_C
// 0x0000 (0x05C0 - 0x05C0)
class UTedCmdAbility_TempestChaff_C final : public UTedPawnCommandWithBehavior_Ability
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmdAbility_TempestChaff_C">();
	}
	static class UTedCmdAbility_TempestChaff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmdAbility_TempestChaff_C>();
	}
};
static_assert(alignof(UTedCmdAbility_TempestChaff_C) == 0x000008, "Wrong alignment on UTedCmdAbility_TempestChaff_C");
static_assert(sizeof(UTedCmdAbility_TempestChaff_C) == 0x0005C0, "Wrong size on UTedCmdAbility_TempestChaff_C");

}

