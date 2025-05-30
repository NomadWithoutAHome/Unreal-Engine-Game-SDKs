﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainMenuCam

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MainMenuCam.BP_MainMenuCam_C
// 0x0010 (0x0290 - 0x0280)
class ABP_MainMenuCam_C final : public APawn
{
public:
	class UCameraComponent*                       Camera;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MainMenuCam_C">();
	}
	static class ABP_MainMenuCam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MainMenuCam_C>();
	}
};
static_assert(alignof(ABP_MainMenuCam_C) == 0x000008, "Wrong alignment on ABP_MainMenuCam_C");
static_assert(sizeof(ABP_MainMenuCam_C) == 0x000290, "Wrong size on ABP_MainMenuCam_C");
static_assert(offsetof(ABP_MainMenuCam_C, Camera) == 0x000280, "Member 'ABP_MainMenuCam_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_MainMenuCam_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_MainMenuCam_C::DefaultSceneRoot' has a wrong offset!");

}

