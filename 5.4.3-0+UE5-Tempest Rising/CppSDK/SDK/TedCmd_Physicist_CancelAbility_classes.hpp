﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Physicist_CancelAbility

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Physicist_CancelAbility.TedCmd_Physicist_CancelAbility_C
// 0x0000 (0x0590 - 0x0590)
class UTedCmd_Physicist_CancelAbility_C final : public UTedPawnCommand_AbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Physicist_CancelAbility_C">();
	}
	static class UTedCmd_Physicist_CancelAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Physicist_CancelAbility_C>();
	}
};
static_assert(alignof(UTedCmd_Physicist_CancelAbility_C) == 0x000008, "Wrong alignment on UTedCmd_Physicist_CancelAbility_C");
static_assert(sizeof(UTedCmd_Physicist_CancelAbility_C) == 0x000590, "Wrong size on UTedCmd_Physicist_CancelAbility_C");

}

