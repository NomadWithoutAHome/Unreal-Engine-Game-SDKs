﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Status_TempestSphereRam_Default

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCue_Status_TempestSphereRam_Default.GCue_Status_TempestSphereRam_Default_C
// 0x0070 (0x03C0 - 0x0350)
class AGCue_Status_TempestSphereRam_Default_C final : public ATedGameplayCueNotify_StatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Charge_SFX;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_SmokeTempestSphere_01_Scorchmark;               // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_LightningTempestSphereRam_01_GroundTrail;       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_LightningTempestSphereRam_01;                   // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ATedUnitBase*                           TedUnitCastCache;                                  // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Finished;                                          // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ActorLocationCache;                                // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ActorLocationCurrent;                              // 0x03A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCue_Status_TempestSphereRam_Default(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Scorchmark();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCue_Status_TempestSphereRam_Default_C">();
	}
	static class AGCue_Status_TempestSphereRam_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCue_Status_TempestSphereRam_Default_C>();
	}
};
static_assert(alignof(AGCue_Status_TempestSphereRam_Default_C) == 0x000008, "Wrong alignment on AGCue_Status_TempestSphereRam_Default_C");
static_assert(sizeof(AGCue_Status_TempestSphereRam_Default_C) == 0x0003C0, "Wrong size on AGCue_Status_TempestSphereRam_Default_C");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, UberGraphFrame) == 0x000350, "Member 'AGCue_Status_TempestSphereRam_Default_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, Charge_SFX) == 0x000358, "Member 'AGCue_Status_TempestSphereRam_Default_C::Charge_SFX' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, PS_SmokeTempestSphere_01_Scorchmark) == 0x000360, "Member 'AGCue_Status_TempestSphereRam_Default_C::PS_SmokeTempestSphere_01_Scorchmark' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, PS_LightningTempestSphereRam_01_GroundTrail) == 0x000368, "Member 'AGCue_Status_TempestSphereRam_Default_C::PS_LightningTempestSphereRam_01_GroundTrail' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, PS_LightningTempestSphereRam_01) == 0x000370, "Member 'AGCue_Status_TempestSphereRam_Default_C::PS_LightningTempestSphereRam_01' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, DefaultSceneRoot) == 0x000378, "Member 'AGCue_Status_TempestSphereRam_Default_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, TedUnitCastCache) == 0x000380, "Member 'AGCue_Status_TempestSphereRam_Default_C::TedUnitCastCache' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, Finished) == 0x000388, "Member 'AGCue_Status_TempestSphereRam_Default_C::Finished' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, ActorLocationCache) == 0x000390, "Member 'AGCue_Status_TempestSphereRam_Default_C::ActorLocationCache' has a wrong offset!");
static_assert(offsetof(AGCue_Status_TempestSphereRam_Default_C, ActorLocationCurrent) == 0x0003A8, "Member 'AGCue_Status_TempestSphereRam_Default_C::ActorLocationCurrent' has a wrong offset!");

}

