﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterSkinBase_Noah

#include "Basic.hpp"

#include "BP_CharacterSkinBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterSkinBase_Noah.BP_CharacterSkinBase_Noah_C
// 0x0008 (0x0358 - 0x0350)
class ABP_CharacterSkinBase_Noah_C final : public ABP_CharacterSkinBase_C
{
public:
	class UGroomComponent*                        Groom;                                             // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterSkinBase_Noah_C">();
	}
	static class ABP_CharacterSkinBase_Noah_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterSkinBase_Noah_C>();
	}
};
static_assert(alignof(ABP_CharacterSkinBase_Noah_C) == 0x000008, "Wrong alignment on ABP_CharacterSkinBase_Noah_C");
static_assert(sizeof(ABP_CharacterSkinBase_Noah_C) == 0x000358, "Wrong size on ABP_CharacterSkinBase_Noah_C");
static_assert(offsetof(ABP_CharacterSkinBase_Noah_C, Groom) == 0x000350, "Member 'ABP_CharacterSkinBase_Noah_C::Groom' has a wrong offset!");

}

