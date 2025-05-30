﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedCmd_DeployBridge

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedCmd_DeployBridge.TedCmd_DeployBridge_C
// 0x0000 (0x0580 - 0x0580)
class UTedCmd_DeployBridge_C final : public UTedUnitCommand_ChangeConformationState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedCmd_DeployBridge_C">();
	}
	static class UTedCmd_DeployBridge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedCmd_DeployBridge_C>();
	}
};
static_assert(alignof(UTedCmd_DeployBridge_C) == 0x000008, "Wrong alignment on UTedCmd_DeployBridge_C");
static_assert(sizeof(UTedCmd_DeployBridge_C) == 0x000580, "Wrong size on UTedCmd_DeployBridge_C");

}

