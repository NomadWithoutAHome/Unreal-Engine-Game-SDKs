﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_GameConstants

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FL_GameConstants.FL_GameConstants_C
// 0x0000 (0x0028 - 0x0028)
class UFL_GameConstants_C final : public UBlueprintFunctionLibrary
{
public:
	static int32 GetGearMaxUpgradeLevel(class UObject* __WorldContext);
	static int32 GetMaxConsumableShardsCount(class UObject* __WorldContext);
	static int32 GetMaxSkillsCount(class UObject* __WorldContext);
	static TSoftObjectPtr<class UWorld> GetMainMenuMap(class UObject* __WorldContext);
	static class FName Get99GestralItemName(class UObject* __WorldContext);
	static int32 GetSkillsPerColumn(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FL_GameConstants_C">();
	}
	static class UFL_GameConstants_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFL_GameConstants_C>();
	}
};
static_assert(alignof(UFL_GameConstants_C) == 0x000008, "Wrong alignment on UFL_GameConstants_C");
static_assert(sizeof(UFL_GameConstants_C) == 0x000028, "Wrong size on UFL_GameConstants_C");

}

