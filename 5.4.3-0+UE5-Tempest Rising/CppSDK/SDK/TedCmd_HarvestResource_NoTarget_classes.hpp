﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_HarvestResource_NoTarget

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_HarvestResource_NoTarget.TedCmd_HarvestResource_NoTarget_C
// 0x0000 (0x0578 - 0x0578)
class UTedCmd_HarvestResource_NoTarget_C final : public UTedUnitCommand_HarvestResource
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_HarvestResource_NoTarget_C">();
	}
	static class UTedCmd_HarvestResource_NoTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_HarvestResource_NoTarget_C>();
	}
};
static_assert(alignof(UTedCmd_HarvestResource_NoTarget_C) == 0x000008, "Wrong alignment on UTedCmd_HarvestResource_NoTarget_C");
static_assert(sizeof(UTedCmd_HarvestResource_NoTarget_C) == 0x000578, "Wrong size on UTedCmd_HarvestResource_NoTarget_C");

}

