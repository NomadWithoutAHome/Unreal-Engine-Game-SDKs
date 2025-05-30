﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Status_TempestDynamos_Physicist

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCue_Status_TempestDynamos_Physicist.GCue_Status_TempestDynamos_Physicist_C
// 0x0018 (0x0368 - 0x0350)
class AGCue_Status_TempestDynamos_Physicist_C final : public ATedGameplayCueNotify_StatusEffect
{
public:
	class UAudioComponent*                        Dynamos_SFX;                                       // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_LightningTempestDynamos_01_Physicist;           // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCue_Status_TempestDynamos_Physicist_C">();
	}
	static class AGCue_Status_TempestDynamos_Physicist_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCue_Status_TempestDynamos_Physicist_C>();
	}
};
static_assert(alignof(AGCue_Status_TempestDynamos_Physicist_C) == 0x000008, "Wrong alignment on AGCue_Status_TempestDynamos_Physicist_C");
static_assert(sizeof(AGCue_Status_TempestDynamos_Physicist_C) == 0x000368, "Wrong size on AGCue_Status_TempestDynamos_Physicist_C");
static_assert(offsetof(AGCue_Status_TempestDynamos_Physicist_C, Dynamos_SFX) == 0x000350, "Member 'AGCue_Status_TempestDynamos_Physicist_C::Dynamos_SFX' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestDynamos_Physicist_C, PS_LightningTempestDynamos_01_Physicist) == 0x000358, "Member 'AGCue_Status_TempestDynamos_Physicist_C::PS_LightningTempestDynamos_01_Physicist' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestDynamos_Physicist_C, DefaultSceneRoot) == 0x000360, "Member 'AGCue_Status_TempestDynamos_Physicist_C::DefaultSceneRoot' has a wrong offset!");

}

