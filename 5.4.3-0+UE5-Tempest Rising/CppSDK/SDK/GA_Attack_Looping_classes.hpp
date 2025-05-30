﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Attack_Looping

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Attack_Looping.GA_Attack_Looping_C
// 0x0008 (0x0418 - 0x0410)
class UGA_Attack_Looping_C final : public UTedAbility_Attack
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Attack_Looping(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Attack_Looping_C">();
	}
	static class UGA_Attack_Looping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Attack_Looping_C>();
	}
};
static_assert(alignof(UGA_Attack_Looping_C) == 0x000008, "Wrong alignment on UGA_Attack_Looping_C");
static_assert(sizeof(UGA_Attack_Looping_C) == 0x000418, "Wrong size on UGA_Attack_Looping_C");
static_assert(offsetof(UGA_Attack_Looping_C, UberGraphFrame) == 0x000410, "Member 'UGA_Attack_Looping_C::UberGraphFrame' has a wrong offset!");

}

