﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TakeOff_Drone

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TakeOff_Drone.GA_TakeOff_Drone_C
// 0x0000 (0x03E0 - 0x03E0)
class UGA_TakeOff_Drone_C final : public UTedAbility_Aircraft_TakeOff
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TakeOff_Drone_C">();
	}
	static class UGA_TakeOff_Drone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TakeOff_Drone_C>();
	}
};
static_assert(alignof(UGA_TakeOff_Drone_C) == 0x000008, "Wrong alignment on UGA_TakeOff_Drone_C");
static_assert(sizeof(UGA_TakeOff_Drone_C) == 0x0003E0, "Wrong size on UGA_TakeOff_Drone_C");

}

