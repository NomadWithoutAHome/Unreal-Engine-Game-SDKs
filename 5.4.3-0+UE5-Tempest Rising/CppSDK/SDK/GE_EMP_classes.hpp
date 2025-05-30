﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_EMP

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_EMP.GE_EMP_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_EMP_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_EMP_C">();
	}
	static class UGE_EMP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_EMP_C>();
	}
};
static_assert(alignof(UGE_EMP_C) == 0x000008, "Wrong alignment on UGE_EMP_C");
static_assert(sizeof(UGE_EMP_C) == 0x000A70, "Wrong size on UGE_EMP_C");

}

