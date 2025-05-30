﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skill_PowerClap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillBase_classes.hpp"
#include "E_Teams_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Skill_PowerClap.BP_Skill_PowerClap_C
// 0x0020 (0x0270 - 0x0250)
class ABP_Skill_PowerClap_C final : public ABP_SkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_PowerClap_C;               // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         BlastRadius;                                       // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         PushedActors;                                      // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Skill_PowerClap(int32 EntryPoint);
	void MC_BlastingStrikeEffects();
	void GetForceAmount(const struct FVector& EnemyLocation, const struct FVector& OwnLocation, struct FVector* Force);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_PowerClap_C">();
	}
	static class ABP_Skill_PowerClap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_PowerClap_C>();
	}
};
static_assert(alignof(ABP_Skill_PowerClap_C) == 0x000008, "Wrong alignment on ABP_Skill_PowerClap_C");
static_assert(sizeof(ABP_Skill_PowerClap_C) == 0x000270, "Wrong size on ABP_Skill_PowerClap_C");
static_assert(offsetof(ABP_Skill_PowerClap_C, UberGraphFrame_BP_Skill_PowerClap_C) == 0x000250, "Member 'ABP_Skill_PowerClap_C::UberGraphFrame_BP_Skill_PowerClap_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_PowerClap_C, BlastRadius) == 0x000258, "Member 'ABP_Skill_PowerClap_C::BlastRadius' has a wrong offset!");
static_assert(offsetof(ABP_Skill_PowerClap_C, PushedActors) == 0x000260, "Member 'ABP_Skill_PowerClap_C::PushedActors' has a wrong offset!");

}

