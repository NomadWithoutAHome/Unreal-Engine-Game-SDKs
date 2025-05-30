﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Attack_Drone

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Attack_Drone.TedCmd_Attack_Drone_C
// 0x0000 (0x0580 - 0x0580)
class UTedCmd_Attack_Drone_C final : public UTedDroneCommand_Attack
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Attack_Drone_C">();
	}
	static class UTedCmd_Attack_Drone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Attack_Drone_C>();
	}
};
static_assert(alignof(UTedCmd_Attack_Drone_C) == 0x000008, "Wrong alignment on UTedCmd_Attack_Drone_C");
static_assert(sizeof(UTedCmd_Attack_Drone_C) == 0x000580, "Wrong size on UTedCmd_Attack_Drone_C");

}

