﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Dismantle_Refinery

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Dismantle_Refinery.TedCmd_Dismantle_Refinery_C
// 0x0000 (0x0590 - 0x0590)
class UTedCmd_Dismantle_Refinery_C final : public UTedPawnCommand_AbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Dismantle_Refinery_C">();
	}
	static class UTedCmd_Dismantle_Refinery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Dismantle_Refinery_C>();
	}
};
static_assert(alignof(UTedCmd_Dismantle_Refinery_C) == 0x000008, "Wrong alignment on UTedCmd_Dismantle_Refinery_C");
static_assert(sizeof(UTedCmd_Dismantle_Refinery_C) == 0x000590, "Wrong size on UTedCmd_Dismantle_Refinery_C");

}

