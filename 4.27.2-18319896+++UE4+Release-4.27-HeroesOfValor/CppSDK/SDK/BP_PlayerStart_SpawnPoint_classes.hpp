﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerStart_SpawnPoint

#include "Basic.hpp"

#include "E_Teams_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerStart_SpawnPoint.BP_PlayerStart_SpawnPoint_C
// 0x0028 (0x0248 - 0x0220)
class ABP_PlayerStart_SpawnPoint_C final : public AActor
{
public:
	class UBillboardComponent*                    Billboard1;                                        // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	E_Teams                                       Team;                                              // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerStart_SpawnPoint_C">();
	}
	static class ABP_PlayerStart_SpawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerStart_SpawnPoint_C>();
	}
};
static_assert(alignof(ABP_PlayerStart_SpawnPoint_C) == 0x000008, "Wrong alignment on ABP_PlayerStart_SpawnPoint_C");
static_assert(sizeof(ABP_PlayerStart_SpawnPoint_C) == 0x000248, "Wrong size on ABP_PlayerStart_SpawnPoint_C");
static_assert(offsetof(ABP_PlayerStart_SpawnPoint_C, Billboard1) == 0x000220, "Member 'ABP_PlayerStart_SpawnPoint_C::Billboard1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_SpawnPoint_C, Arrow) == 0x000228, "Member 'ABP_PlayerStart_SpawnPoint_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_SpawnPoint_C, Billboard) == 0x000230, "Member 'ABP_PlayerStart_SpawnPoint_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_SpawnPoint_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_PlayerStart_SpawnPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_SpawnPoint_C, Team) == 0x000240, "Member 'ABP_PlayerStart_SpawnPoint_C::Team' has a wrong offset!");

}

