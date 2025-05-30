﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_StealthActive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Stealth_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_StealthActive.GA_StealthActive_C
// 0x0010 (0x0410 - 0x0400)
class UGA_StealthActive_C : public UGA_Stealth_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_StealthActive_C;                 // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UGameplayEffect>            DurationGEClass;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_StealthActive(int32 EntryPoint);
	void K2_ActivateAbility();
	void Removed_8B4947624C3623E177F528BE4B2CE5B7();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_StealthActive_C">();
	}
	static class UGA_StealthActive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_StealthActive_C>();
	}
};
static_assert(alignof(UGA_StealthActive_C) == 0x000008, "Wrong alignment on UGA_StealthActive_C");
static_assert(sizeof(UGA_StealthActive_C) == 0x000410, "Wrong size on UGA_StealthActive_C");
static_assert(offsetof(UGA_StealthActive_C, UberGraphFrame_GA_StealthActive_C) == 0x000400, "Member 'UGA_StealthActive_C::UberGraphFrame_GA_StealthActive_C' has a wrong offset!");
static_assert(offsetof(UGA_StealthActive_C, DurationGEClass) == 0x000408, "Member 'UGA_StealthActive_C::DurationGEClass' has a wrong offset!");

}

