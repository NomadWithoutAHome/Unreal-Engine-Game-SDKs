﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnemyWorld_Mime

#include "Basic.hpp"

#include "BP_jRPG_Enemy_World_Base_Seamless_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyWorld_Mime.BP_EnemyWorld_Mime_C
// 0x0010 (0x0D00 - 0x0CF0)
class ABP_EnemyWorld_Mime_C : public ABP_jRPG_Enemy_World_Base_Seamless_C
{
public:
	class UStaticMeshComponent*                   Baguette;                                          // 0x0CF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Haircut;                                           // 0x0CF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyWorld_Mime_C">();
	}
	static class ABP_EnemyWorld_Mime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnemyWorld_Mime_C>();
	}
};
static_assert(alignof(ABP_EnemyWorld_Mime_C) == 0x000010, "Wrong alignment on ABP_EnemyWorld_Mime_C");
static_assert(sizeof(ABP_EnemyWorld_Mime_C) == 0x000D00, "Wrong size on ABP_EnemyWorld_Mime_C");
static_assert(offsetof(ABP_EnemyWorld_Mime_C, Baguette) == 0x000CF0, "Member 'ABP_EnemyWorld_Mime_C::Baguette' has a wrong offset!");
static_assert(offsetof(ABP_EnemyWorld_Mime_C, Haircut) == 0x000CF8, "Member 'ABP_EnemyWorld_Mime_C::Haircut' has a wrong offset!");

}

