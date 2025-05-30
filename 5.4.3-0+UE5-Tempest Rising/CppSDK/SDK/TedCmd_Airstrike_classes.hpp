﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Airstrike

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Airstrike.TedCmd_Airstrike_C
// 0x0000 (0x0578 - 0x0578)
class UTedCmd_Airstrike_C final : public UTedUnitCommand_AirStrike
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Airstrike_C">();
	}
	static class UTedCmd_Airstrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Airstrike_C>();
	}
};
static_assert(alignof(UTedCmd_Airstrike_C) == 0x000008, "Wrong alignment on UTedCmd_Airstrike_C");
static_assert(sizeof(UTedCmd_Airstrike_C) == 0x000578, "Wrong size on UTedCmd_Airstrike_C");

}

