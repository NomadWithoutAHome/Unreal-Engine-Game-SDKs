﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_Teams_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EquipPreview.BP_EquipPreview_C
// 0x0018 (0x0238 - 0x0220)
class ABP_EquipPreview_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActor;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EquipPreview(int32 EntryPoint);
	void SetTeam(E_Teams Team);
	void LoadActor(TSubclassOf<class AActor> ActorClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipPreview_C">();
	}
	static class ABP_EquipPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EquipPreview_C>();
	}
};
static_assert(alignof(ABP_EquipPreview_C) == 0x000008, "Wrong alignment on ABP_EquipPreview_C");
static_assert(sizeof(ABP_EquipPreview_C) == 0x000238, "Wrong size on ABP_EquipPreview_C");
static_assert(offsetof(ABP_EquipPreview_C, UberGraphFrame) == 0x000220, "Member 'ABP_EquipPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EquipPreview_C, ChildActor) == 0x000228, "Member 'ABP_EquipPreview_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_EquipPreview_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_EquipPreview_C::DefaultSceneRoot' has a wrong offset!");

}

