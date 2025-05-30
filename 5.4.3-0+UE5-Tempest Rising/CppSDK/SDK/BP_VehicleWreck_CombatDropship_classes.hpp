﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleWreck_CombatDropship

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VehicleWreck_CombatDropship.BP_VehicleWreck_CombatDropship_C
// 0x0090 (0x0430 - 0x03A0)
class ABP_VehicleWreck_CombatDropship_C final : public ATedVehicleWreckActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FireSFX;                                           // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_Front;                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_FireAircraftDestruction_Right;                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Hit;                                               // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Rotation_Force_Multiplier;                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentPlayRate;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Forward_Force;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Rotation_Force_Axis;                               // 0x03E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  Rotation_Force_Locked_Axis;                        // 0x0400(0x0010)(Edit, BlueprintVisible)
	struct FVector                                Forward_Force_Direction;                           // 0x0410(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Target_Rotor_Anim_Play_Rate;                       // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void ExecuteUbergraph_BP_VehicleWreck_CombatDropship(int32 EntryPoint);
	void Hit_Aircraft_Ground_Flip_Force(class USkeletalMeshComponent* Skeletal_Mesh, class FName Bone_Name, const struct FVector& Rotation_Axis, double Flip_Force, const struct FVector& Side_Vector);
	void Initial_Aircraft_Destruction_Force(class USkeletalMeshComponent* Skeletal_Mesh, class UStaticMeshComponent* Static_Mesh__TEMP_, class FName Bone_Name, const struct FVector& Rotation_Force_Axis_0, double Rotation_Force_Multiplier_0, TArray<bool>& Rotation_Force_Locked_Axis_0, const struct FVector& Forward_Force_Direction_0, double Forward_Force_0);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VehicleWreck_CombatDropship_C">();
	}
	static class ABP_VehicleWreck_CombatDropship_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VehicleWreck_CombatDropship_C>();
	}
};
static_assert(alignof(ABP_VehicleWreck_CombatDropship_C) == 0x000008, "Wrong alignment on ABP_VehicleWreck_CombatDropship_C");
static_assert(sizeof(ABP_VehicleWreck_CombatDropship_C) == 0x000430, "Wrong size on ABP_VehicleWreck_CombatDropship_C");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, UberGraphFrame) == 0x0003A0, "Member 'ABP_VehicleWreck_CombatDropship_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, FireSFX) == 0x0003A8, "Member 'ABP_VehicleWreck_CombatDropship_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, PS_FireAircraftDestruction_Front) == 0x0003B0, "Member 'ABP_VehicleWreck_CombatDropship_C::PS_FireAircraftDestruction_Front' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, PS_FireAircraftDestruction_Right) == 0x0003B8, "Member 'ABP_VehicleWreck_CombatDropship_C::PS_FireAircraftDestruction_Right' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, SkeletalMesh) == 0x0003C0, "Member 'ABP_VehicleWreck_CombatDropship_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Hit) == 0x0003C8, "Member 'ABP_VehicleWreck_CombatDropship_C::Hit' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Rotation_Force_Multiplier) == 0x0003D0, "Member 'ABP_VehicleWreck_CombatDropship_C::Rotation_Force_Multiplier' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, CurrentPlayRate) == 0x0003D8, "Member 'ABP_VehicleWreck_CombatDropship_C::CurrentPlayRate' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Forward_Force) == 0x0003E0, "Member 'ABP_VehicleWreck_CombatDropship_C::Forward_Force' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Rotation_Force_Axis) == 0x0003E8, "Member 'ABP_VehicleWreck_CombatDropship_C::Rotation_Force_Axis' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Rotation_Force_Locked_Axis) == 0x000400, "Member 'ABP_VehicleWreck_CombatDropship_C::Rotation_Force_Locked_Axis' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Forward_Force_Direction) == 0x000410, "Member 'ABP_VehicleWreck_CombatDropship_C::Forward_Force_Direction' has a wrong offset!");
static_assert(offsetof(ABP_VehicleWreck_CombatDropship_C, Target_Rotor_Anim_Play_Rate) == 0x000428, "Member 'ABP_VehicleWreck_CombatDropship_C::Target_Rotor_Anim_Play_Rate' has a wrong offset!");

}

