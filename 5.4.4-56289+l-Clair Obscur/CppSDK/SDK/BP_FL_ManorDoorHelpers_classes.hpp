﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_ManorDoorHelpers

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FL_ManorDoorHelpers.BP_FL_ManorDoorHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FL_ManorDoorHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static void TeleportToManor(const struct FGameplayTag& CurrentLevelSpawnPointTag, const struct FGameplayTag& DestinationSpawnPointTag, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FL_ManorDoorHelpers_C">();
	}
	static class UBP_FL_ManorDoorHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FL_ManorDoorHelpers_C>();
	}
};
static_assert(alignof(UBP_FL_ManorDoorHelpers_C) == 0x000008, "Wrong alignment on UBP_FL_ManorDoorHelpers_C");
static_assert(sizeof(UBP_FL_ManorDoorHelpers_C) == 0x000028, "Wrong size on UBP_FL_ManorDoorHelpers_C");

}

