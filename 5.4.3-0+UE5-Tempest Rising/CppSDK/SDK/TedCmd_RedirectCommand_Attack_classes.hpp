﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_RedirectCommand_Attack

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_RedirectCommand_Attack.TedCmd_RedirectCommand_Attack_C
// 0x0000 (0x0558 - 0x0558)
class UTedCmd_RedirectCommand_Attack_C final : public UTedPawnCommand_RedirectCommand
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_RedirectCommand_Attack_C">();
	}
	static class UTedCmd_RedirectCommand_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_RedirectCommand_Attack_C>();
	}
};
static_assert(alignof(UTedCmd_RedirectCommand_Attack_C) == 0x000008, "Wrong alignment on UTedCmd_RedirectCommand_Attack_C");
static_assert(sizeof(UTedCmd_RedirectCommand_Attack_C) == 0x000558, "Wrong size on UTedCmd_RedirectCommand_Attack_C");

}

