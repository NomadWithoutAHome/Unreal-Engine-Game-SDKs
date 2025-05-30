﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Land_Aircraft

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Land_Aircraft.GA_Land_Aircraft_C
// 0x0010 (0x0408 - 0x03F8)
class UGA_Land_Aircraft_C final : public UTedAbility_Aircraft_Land
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           MontageId;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Land_Aircraft(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Land_Aircraft_C">();
	}
	static class UGA_Land_Aircraft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Land_Aircraft_C>();
	}
};
static_assert(alignof(UGA_Land_Aircraft_C) == 0x000008, "Wrong alignment on UGA_Land_Aircraft_C");
static_assert(sizeof(UGA_Land_Aircraft_C) == 0x000408, "Wrong size on UGA_Land_Aircraft_C");
static_assert(offsetof(UGA_Land_Aircraft_C, UberGraphFrame) == 0x0003F8, "Member 'UGA_Land_Aircraft_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Land_Aircraft_C, MontageId) == 0x000400, "Member 'UGA_Land_Aircraft_C::MontageId' has a wrong offset!");

}

