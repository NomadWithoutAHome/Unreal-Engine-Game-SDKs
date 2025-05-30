﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skill_BurningBullets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Skill_BurningBullets.BP_Skill_BurningBullets_C
// 0x0010 (0x0260 - 0x0250)
class ABP_Skill_BurningBullets_C final : public ABP_SkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_BurningBullets_C;          // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Skill_BurningBullets(int32 EntryPoint);
	void EndSkill();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_BurningBullets_C">();
	}
	static class ABP_Skill_BurningBullets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_BurningBullets_C>();
	}
};
static_assert(alignof(ABP_Skill_BurningBullets_C) == 0x000008, "Wrong alignment on ABP_Skill_BurningBullets_C");
static_assert(sizeof(ABP_Skill_BurningBullets_C) == 0x000260, "Wrong size on ABP_Skill_BurningBullets_C");
static_assert(offsetof(ABP_Skill_BurningBullets_C, UberGraphFrame_BP_Skill_BurningBullets_C) == 0x000250, "Member 'ABP_Skill_BurningBullets_C::UberGraphFrame_BP_Skill_BurningBullets_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_BurningBullets_C, ParticleSystem) == 0x000258, "Member 'ABP_Skill_BurningBullets_C::ParticleSystem' has a wrong offset!");

}

