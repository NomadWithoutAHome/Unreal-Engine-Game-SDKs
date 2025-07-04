﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StainBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EAttackType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StainBase.BP_StainBase_C
// 0x0018 (0x0330 - 0x0318)
class ABP_StainBase_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EAttackType                                   ElementType;                                       // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Appear();
	void Disappear();
	void ExecuteUbergraph_BP_StainBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StainBase_C">();
	}
	static class ABP_StainBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StainBase_C>();
	}
};
static_assert(alignof(ABP_StainBase_C) == 0x000008, "Wrong alignment on ABP_StainBase_C");
static_assert(sizeof(ABP_StainBase_C) == 0x000330, "Wrong size on ABP_StainBase_C");
static_assert(offsetof(ABP_StainBase_C, UberGraphFrame) == 0x000318, "Member 'ABP_StainBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StainBase_C, DefaultSceneRoot) == 0x000320, "Member 'ABP_StainBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_StainBase_C, ElementType) == 0x000328, "Member 'ABP_StainBase_C::ElementType' has a wrong offset!");

}

