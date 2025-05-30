﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedPlayerController_BP

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedPlayerController_BP.TedPlayerController_BP_C
// 0x0008 (0x1828 - 0x1820)
class ATedPlayerController_BP_C final : public ATedPlayerController
{
public:
	class ABP_SoundManager_C*                     BP_SoundManager;                                   // 0x1820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedPlayerController_BP_C">();
	}
	static class ATedPlayerController_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATedPlayerController_BP_C>();
	}
};
static_assert(alignof(ATedPlayerController_BP_C) == 0x000008, "Wrong alignment on ATedPlayerController_BP_C");
static_assert(sizeof(ATedPlayerController_BP_C) == 0x001828, "Wrong size on ATedPlayerController_BP_C");
static_assert(offsetof(ATedPlayerController_BP_C, BP_SoundManager) == 0x001820, "Member 'ATedPlayerController_BP_C::BP_SoundManager' has a wrong offset!");

}

