﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Artillery_VehicleMode

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Artillery_VehicleMode.TedCmd_Artillery_VehicleMode_C
// 0x0000 (0x0590 - 0x0590)
class UTedCmd_Artillery_VehicleMode_C final : public UTedPawnCommand_AbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Artillery_VehicleMode_C">();
	}
	static class UTedCmd_Artillery_VehicleMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Artillery_VehicleMode_C>();
	}
};
static_assert(alignof(UTedCmd_Artillery_VehicleMode_C) == 0x000008, "Wrong alignment on UTedCmd_Artillery_VehicleMode_C");
static_assert(sizeof(UTedCmd_Artillery_VehicleMode_C) == 0x000590, "Wrong size on UTedCmd_Artillery_VehicleMode_C");

}

