﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleWreck_Artillery

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VehicleWreck_Artillery.BP_VehicleWreck_Artillery_C
// 0x0150 (0x04F0 - 0x03A0)
class ABP_VehicleWreck_Artillery_C final : public ATedVehicleWreckActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FireSFX;                                           // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_7;                      // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_08;                              // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_6;                      // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_07;                              // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_4;                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_5;                      // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_3;                      // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_2;                      // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_1;                      // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_SmokeVehicleDestroyed;                          // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_06;                              // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_05;                              // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_04;                              // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_03;                              // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckArtillery_02;                              // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_428[0x8];                                      // 0x0428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ActorTransformCache;                               // 0x0430(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        VelocityVectorLength;                              // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VelocityToTransfer;                                // 0x0498(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitBaseMesh;                                       // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitPart1;                                          // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B2[0x6];                                      // 0x04B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxBaseVelocityVectorLength;                       // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitPart2;                                          // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1[0x7];                                      // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BaseMeshLocCache;                                  // 0x04C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BrokenPart1;                                       // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BrokenPart2;                                       // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_VehicleWreck_HarvesterDYN_SM_WreckDYNHarvesterMiner_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BP_VehicleWreck_MediumTank_Mesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BP_VehicleWreck_MediumTank_SM_WreckMediumTank_02_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_VehicleWreck_Artillery(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VehicleWreck_Artillery_C">();
	}
	static class ABP_VehicleWreck_Artillery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VehicleWreck_Artillery_C>();
	}
};
static_assert(alignof(ABP_VehicleWreck_Artillery_C) == 0x000010, "Wrong alignment on ABP_VehicleWreck_Artillery_C");
static_assert(sizeof(ABP_VehicleWreck_Artillery_C) == 0x0004F0, "Wrong size on ABP_VehicleWreck_Artillery_C");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, UberGraphFrame) == 0x0003A0, "Member 'ABP_VehicleWreck_Artillery_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, FireSFX) == 0x0003A8, "Member 'ABP_VehicleWreck_Artillery_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_7) == 0x0003B0, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_7' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_08) == 0x0003B8, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_08' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_6) == 0x0003C0, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_6' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_07) == 0x0003C8, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_07' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_4) == 0x0003D0, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_4' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_5) == 0x0003D8, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_5' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_3) == 0x0003E0, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_3' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_2) == 0x0003E8, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_2' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_FireAircraftDestruction_1) == 0x0003F0, "Member 'ABP_VehicleWreck_Artillery_C::PS_FireAircraftDestruction_1' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, PS_SmokeVehicleDestroyed) == 0x0003F8, "Member 'ABP_VehicleWreck_Artillery_C::PS_SmokeVehicleDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_06) == 0x000400, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_06' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_05) == 0x000408, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_05' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_04) == 0x000410, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_04' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_03) == 0x000418, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_03' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, SM_WreckArtillery_02) == 0x000420, "Member 'ABP_VehicleWreck_Artillery_C::SM_WreckArtillery_02' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, ActorTransformCache) == 0x000430, "Member 'ABP_VehicleWreck_Artillery_C::ActorTransformCache' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, VelocityVectorLength) == 0x000490, "Member 'ABP_VehicleWreck_Artillery_C::VelocityVectorLength' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, VelocityToTransfer) == 0x000498, "Member 'ABP_VehicleWreck_Artillery_C::VelocityToTransfer' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, HitBaseMesh) == 0x0004B0, "Member 'ABP_VehicleWreck_Artillery_C::HitBaseMesh' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, HitPart1) == 0x0004B1, "Member 'ABP_VehicleWreck_Artillery_C::HitPart1' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, MaxBaseVelocityVectorLength) == 0x0004B8, "Member 'ABP_VehicleWreck_Artillery_C::MaxBaseVelocityVectorLength' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, HitPart2) == 0x0004C0, "Member 'ABP_VehicleWreck_Artillery_C::HitPart2' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, BaseMeshLocCache) == 0x0004C8, "Member 'ABP_VehicleWreck_Artillery_C::BaseMeshLocCache' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, BrokenPart1) == 0x0004E0, "Member 'ABP_VehicleWreck_Artillery_C::BrokenPart1' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_Artillery_C, BrokenPart2) == 0x0004E1, "Member 'ABP_VehicleWreck_Artillery_C::BrokenPart2' has a wrong offset!");

}

