﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SG_ServerSettings

#include "Basic.hpp"

#include "ST_ServerSettings_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SG_ServerSettings.SG_ServerSettings_C
// 0x0040 (0x0068 - 0x0028)
class USG_ServerSettings_C final : public USaveGame
{
public:
	struct FST_ServerSettings                     ServerSettings;                                    // 0x0028(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SG_ServerSettings_C">();
	}
	static class USG_ServerSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USG_ServerSettings_C>();
	}
};
static_assert(alignof(USG_ServerSettings_C) == 0x000008, "Wrong alignment on USG_ServerSettings_C");
static_assert(sizeof(USG_ServerSettings_C) == 0x000068, "Wrong size on USG_ServerSettings_C");
static_assert(offsetof(USG_ServerSettings_C, ServerSettings) == 0x000028, "Member 'USG_ServerSettings_C::ServerSettings' has a wrong offset!");

}

