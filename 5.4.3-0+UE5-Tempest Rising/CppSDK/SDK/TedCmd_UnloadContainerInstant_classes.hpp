﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_UnloadContainerInstant

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_UnloadContainerInstant.TedCmd_UnloadContainerInstant_C
// 0x0000 (0x0590 - 0x0590)
class UTedCmd_UnloadContainerInstant_C final : public UTedPawnCommand_AbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_UnloadContainerInstant_C">();
	}
	static class UTedCmd_UnloadContainerInstant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_UnloadContainerInstant_C>();
	}
};
static_assert(alignof(UTedCmd_UnloadContainerInstant_C) == 0x000008, "Wrong alignment on UTedCmd_UnloadContainerInstant_C");
static_assert(sizeof(UTedCmd_UnloadContainerInstant_C) == 0x000590, "Wrong size on UTedCmd_UnloadContainerInstant_C");

}

