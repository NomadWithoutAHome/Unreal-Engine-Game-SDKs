﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LuneStain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EAttackType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LuneStain.BP_LuneStain_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_LuneStain_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FX_Stain;                                          // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EAttackType                                   ElementType;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Disappear();
	void ExecuteUbergraph_BP_LuneStain(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LuneStain_C">();
	}
	static class ABP_LuneStain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LuneStain_C>();
	}
};
static_assert(alignof(ABP_LuneStain_C) == 0x000008, "Wrong alignment on ABP_LuneStain_C");
static_assert(sizeof(ABP_LuneStain_C) == 0x0002B0, "Wrong size on ABP_LuneStain_C");
static_assert(offsetof(ABP_LuneStain_C, UberGraphFrame) == 0x000290, "Member 'ABP_LuneStain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LuneStain_C, FX_Stain) == 0x000298, "Member 'ABP_LuneStain_C::FX_Stain' has a wrong offset!");
static_assert(offsetof(ABP_LuneStain_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_LuneStain_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LuneStain_C, ElementType) == 0x0002A8, "Member 'ABP_LuneStain_C::ElementType' has a wrong offset!");

}

