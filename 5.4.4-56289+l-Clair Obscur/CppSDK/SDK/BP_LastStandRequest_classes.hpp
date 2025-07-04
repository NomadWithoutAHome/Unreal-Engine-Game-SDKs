﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LastStandRequest

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LastStandRequest.BP_LastStandRequest_C
// 0x0020 (0x0048 - 0x0028)
class UBP_LastStandRequest_C final : public UObject
{
public:
	TMulticastInlineDelegate<void()>              PerformLastStand;                                  // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_jRPG_Character_Battle_Base_C*       TargetCharacter;                                   // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBound;                                           // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RequestLastStand(const TDelegate<void()>& StartLastStand);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LastStandRequest_C">();
	}
	static class UBP_LastStandRequest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LastStandRequest_C>();
	}
};
static_assert(alignof(UBP_LastStandRequest_C) == 0x000008, "Wrong alignment on UBP_LastStandRequest_C");
static_assert(sizeof(UBP_LastStandRequest_C) == 0x000048, "Wrong size on UBP_LastStandRequest_C");
static_assert(offsetof(UBP_LastStandRequest_C, PerformLastStand) == 0x000028, "Member 'UBP_LastStandRequest_C::PerformLastStand' has a wrong offset!");
static_assert(offsetof(UBP_LastStandRequest_C, TargetCharacter) == 0x000038, "Member 'UBP_LastStandRequest_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(UBP_LastStandRequest_C, IsBound) == 0x000040, "Member 'UBP_LastStandRequest_C::IsBound' has a wrong offset!");

}

