﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_Land_OnAirfield

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_Land_OnAirfield.TedCmd_Land_OnAirfield_C
// 0x0000 (0x0570 - 0x0570)
class UTedCmd_Land_OnAirfield_C final : public UTedPawnCommand_LandOnAirfield
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_Land_OnAirfield_C">();
	}
	static class UTedCmd_Land_OnAirfield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_Land_OnAirfield_C>();
	}
};
static_assert(alignof(UTedCmd_Land_OnAirfield_C) == 0x000008, "Wrong alignment on UTedCmd_Land_OnAirfield_C");
static_assert(sizeof(UTedCmd_Land_OnAirfield_C) == 0x000570, "Wrong size on UTedCmd_Land_OnAirfield_C");

}

