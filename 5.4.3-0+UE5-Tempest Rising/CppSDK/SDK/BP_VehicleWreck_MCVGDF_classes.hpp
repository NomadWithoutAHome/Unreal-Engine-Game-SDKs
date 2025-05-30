﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleWreck_MCVGDF

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VehicleWreck_MCVGDF.BP_VehicleWreck_MCVGDF_C
// 0x0100 (0x04A0 - 0x03A0)
class ABP_VehicleWreck_MCVGDF_C final : public ATedVehicleWreckActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FireSFX;                                           // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_3;                      // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_2;                      // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckGDFMCV_04;                                 // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_1;                      // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckGDFMCV_03;                                 // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WreckGDFMCV_02;                                 // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_SmokeVehicleDestroyed;                          // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ActorTransformCache;                               // 0x03F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        VelocityVectorLength;                              // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VelocityToTransfer;                                // 0x0458(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitBaseMesh;                                       // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitPart1;                                          // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472[0x6];                                      // 0x0472(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxBaseVelocityVectorLength;                       // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitPart2;                                          // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitPart3;                                          // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BrokenPart1;                                       // 0x0482(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BrokenPart2;                                       // 0x0483(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BrokenPart3;                                       // 0x0484(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485[0x3];                                      // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MeshLocationCache;                                 // 0x0488(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_VehicleWreck_MCVGDF_SM_WreckGDFHarvester_03_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BP_VehicleWreck_MCVGDF_SM_WreckGDFHarvester_04_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BP_VehicleWreck_MediumTank_Mesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BP_VehicleWreck_MediumTank_SM_WreckMediumTank_02_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_VehicleWreck_MCVGDF(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VehicleWreck_MCVGDF_C">();
	}
	static class ABP_VehicleWreck_MCVGDF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VehicleWreck_MCVGDF_C>();
	}
};
static_assert(alignof(ABP_VehicleWreck_MCVGDF_C) == 0x000010, "Wrong alignment on ABP_VehicleWreck_MCVGDF_C");
static_assert(sizeof(ABP_VehicleWreck_MCVGDF_C) == 0x0004A0, "Wrong size on ABP_VehicleWreck_MCVGDF_C");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, UberGraphFrame) == 0x0003A0, "Member 'ABP_VehicleWreck_MCVGDF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, FireSFX) == 0x0003A8, "Member 'ABP_VehicleWreck_MCVGDF_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, PS_FireAircraftDestruction_3) == 0x0003B0, "Member 'ABP_VehicleWreck_MCVGDF_C::PS_FireAircraftDestruction_3' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, PS_FireAircraftDestruction_2) == 0x0003B8, "Member 'ABP_VehicleWreck_MCVGDF_C::PS_FireAircraftDestruction_2' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, SM_WreckGDFMCV_04) == 0x0003C0, "Member 'ABP_VehicleWreck_MCVGDF_C::SM_WreckGDFMCV_04' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, PS_FireAircraftDestruction_1) == 0x0003C8, "Member 'ABP_VehicleWreck_MCVGDF_C::PS_FireAircraftDestruction_1' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, SM_WreckGDFMCV_03) == 0x0003D0, "Member 'ABP_VehicleWreck_MCVGDF_C::SM_WreckGDFMCV_03' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, SM_WreckGDFMCV_02) == 0x0003D8, "Member 'ABP_VehicleWreck_MCVGDF_C::SM_WreckGDFMCV_02' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, PS_SmokeVehicleDestroyed) == 0x0003E0, "Member 'ABP_VehicleWreck_MCVGDF_C::PS_SmokeVehicleDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, ActorTransformCache) == 0x0003F0, "Member 'ABP_VehicleWreck_MCVGDF_C::ActorTransformCache' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, VelocityVectorLength) == 0x000450, "Member 'ABP_VehicleWreck_MCVGDF_C::VelocityVectorLength' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, VelocityToTransfer) == 0x000458, "Member 'ABP_VehicleWreck_MCVGDF_C::VelocityToTransfer' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, HitBaseMesh) == 0x000470, "Member 'ABP_VehicleWreck_MCVGDF_C::HitBaseMesh' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, HitPart1) == 0x000471, "Member 'ABP_VehicleWreck_MCVGDF_C::HitPart1' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, MaxBaseVelocityVectorLength) == 0x000478, "Member 'ABP_VehicleWreck_MCVGDF_C::MaxBaseVelocityVectorLength' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, HitPart2) == 0x000480, "Member 'ABP_VehicleWreck_MCVGDF_C::HitPart2' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, HitPart3) == 0x000481, "Member 'ABP_VehicleWreck_MCVGDF_C::HitPart3' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, BrokenPart1) == 0x000482, "Member 'ABP_VehicleWreck_MCVGDF_C::BrokenPart1' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, BrokenPart2) == 0x000483, "Member 'ABP_VehicleWreck_MCVGDF_C::BrokenPart2' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, BrokenPart3) == 0x000484, "Member 'ABP_VehicleWreck_MCVGDF_C::BrokenPart3' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_MCVGDF_C, MeshLocationCache) == 0x000488, "Member 'ABP_VehicleWreck_MCVGDF_C::MeshLocationCache' has a wrong offset!");

}

