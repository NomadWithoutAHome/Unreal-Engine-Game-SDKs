﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_SpawnUnit_Vimana

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_SpawnUnit_Vimana.TedCmd_SpawnUnit_Vimana_C
// 0x0000 (0x05C0 - 0x05C0)
class UTedCmd_SpawnUnit_Vimana_C final : public UTedPawnCommandWithBehavior_Ability
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_SpawnUnit_Vimana_C">();
	}
	static class UTedCmd_SpawnUnit_Vimana_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_SpawnUnit_Vimana_C>();
	}
};
static_assert(alignof(UTedCmd_SpawnUnit_Vimana_C) == 0x000008, "Wrong alignment on UTedCmd_SpawnUnit_Vimana_C");
static_assert(sizeof(UTedCmd_SpawnUnit_Vimana_C) == 0x0005C0, "Wrong size on UTedCmd_SpawnUnit_Vimana_C");

}

