﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CS_TankFireShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_TankFireShake.CS_TankFireShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UCS_TankFireShake_C final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_TankFireShake_C">();
	}
	static class UCS_TankFireShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_TankFireShake_C>();
	}
};
static_assert(alignof(UCS_TankFireShake_C) == 0x000010, "Wrong alignment on UCS_TankFireShake_C");
static_assert(sizeof(UCS_TankFireShake_C) == 0x0000B0, "Wrong size on UCS_TankFireShake_C");

}

