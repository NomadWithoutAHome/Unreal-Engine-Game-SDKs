﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BD_DYN_RadarStation

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BD_DYN_RadarStation.BP_BD_DYN_RadarStation_C
// 0x0120 (0x1B20 - 0x1A00)
class ABP_BD_DYN_RadarStation_C final : public ATedStructureBase
{
public:
	uint8                                         Pad_19F8[0x8];                                     // 0x19F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1A00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      PS_DustStructurePlacement_01_ParamSize;            // 0x1A08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_DustDYNDrillPlacement_01;                       // 0x1A10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildingAmbience_C*                 BP_BuildingAmbience;                               // 0x1A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FireSFX;                                           // 0x1A20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire3;                                          // 0x1A28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire2;                                          // 0x1A30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire1;                                          // 0x1A38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_4;                                      // 0x1A40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_3;                                      // 0x1A48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_2;                                      // 0x1A50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_1;                                      // 0x1A58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox1;                                           // 0x1A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox;                                            // 0x1A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_DeactivateAndDestroy_Dissolve_D8176A0C4949961FDE11679C70D963EB; // 0x1A70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_DeactivateAndDestroy__Direction_D8176A0C4949961FDE11679C70D963EB; // 0x1A74(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A75[0x3];                                     // 0x1A75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_DeactivateAndDestroy;                           // 0x1A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Dissolve_5292EE774DC02A859DC63C8F24C2410B; // 0x1A80(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Explosion_5292EE774DC02A859DC63C8F24C2410B; // 0x1A84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Explosion__Direction_5292EE774DC02A859DC63C8F24C2410B; // 0x1A88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A89[0x7];                                     // 0x1A89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Explosion;                                      // 0x1A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_OnDeath_NewTrack_1_6C0DA9DE4BDED7838A7273BCF99872AC; // 0x1A98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_OnDeath__Direction_6C0DA9DE4BDED7838A7273BCF99872AC; // 0x1A9C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9D[0x3];                                     // 0x1A9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_OnDeath;                                        // 0x1AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_SwitchVisuals__Direction_2710FF614B369C1EA16FD187AA14B56F; // 0x1AA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AA9[0x7];                                     // 0x1AA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_SwitchVisuals;                                  // 0x1AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CachedActorLocation;                               // 0x1AB8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Strength;                                // 0x1AD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Radius;                                  // 0x1AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Falloff_Exp;                             // 0x1AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Explosion_Slot_Array;                              // 0x1AE8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Explosion_Slot_Current;                            // 0x1AF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Explosion_Slot_Found;                              // 0x1B08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B09[0x3];                                     // 0x1B09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CachedSurfaceType;                                 // 0x1B0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimMontageLength;                                 // 0x1B10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Destructible(TArray<class UStaticMesh*>& DestMeshes, TArray<struct FVector>& DestMeshes_Locations, TArray<struct FRotator>& DestMeshes_Rotators, const struct FVector& MeshScale, TArray<class UFXSystemAsset*>& DestMeshes_exploFX, TArray<double>& DestMeshes_exploFX_Scale, TArray<class UFXSystemAsset*>& DestMeshes_attachedFX, TArray<double>& DestMeshes_attachedFX_Scale, TArray<struct FVector>& DestMeshes_LinearImpulse, TArray<struct FVector>& DestMeshes_AngularImpulse, TArray<class AStaticMeshActor*>* SpawnedMeshesArray, TArray<class UFXSystemComponent*>* SpawnedAttachedFXArray);
	void Destructible_Radar_Custom_Setup(class USkeletalMeshComponent* Skeletal_Mesh, TArray<class UStaticMesh*>* DestMeshes, TArray<struct FVector>* DestMeshes_Locations, TArray<struct FRotator>* DestMeshes_Rotators, struct FVector* MeshScale, TArray<class UFXSystemAsset*>* DestMeshes_FX, TArray<double>* DestMeshes_FX_Scale, TArray<class UFXSystemAsset*>* DestMeshes_FXattached, TArray<double>* DestMeshes_FXattached_Scale, TArray<struct FVector>* DestMeshes_LinearImpulse, TArray<struct FVector>* DestMeshes_AngularImpulse);
	void ExecuteUbergraph_BP_BD_DYN_RadarStation(int32 EntryPoint);
	void Found_Free_Explosion_Slot();
	void K2_OnEndSellingStructure();
	void ReceiveBeginPlay();
	void ReceiveHandlePowerStateVisuals(const bool bBlackedOut, const bool bUserPowered, const bool bSufficientPower);
	void ReceiveOnDeath();
	void ReceiveUpdateHealthEffects(float HealthPct);
	void TL_DeactivateAndDestroy__Deactivate_FX__EventFunc();
	void TL_DeactivateAndDestroy__FinishedFunc();
	void TL_DeactivateAndDestroy__UpdateFunc();
	void TL_Explosion__FinishedFunc();
	void TL_Explosion__UpdateFunc();
	void TL_OnDeath__Explosion__EventFunc();
	void TL_OnDeath__ExplosionAudio__EventFunc();
	void TL_OnDeath__FinishedFunc();
	void TL_OnDeath__SpawnChunks__EventFunc();
	void TL_OnDeath__SpawnDecal__EventFunc();
	void TL_OnDeath__UpdateFunc();
	void TL_SwitchVisuals__FinishedFunc();
	void TL_SwitchVisuals__FirstStep__EventFunc();
	void TL_SwitchVisuals__SecondStep__EventFunc();
	void TL_SwitchVisuals__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BD_DYN_RadarStation_C">();
	}
	static class ABP_BD_DYN_RadarStation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BD_DYN_RadarStation_C>();
	}
};
static_assert(alignof(ABP_BD_DYN_RadarStation_C) == 0x000010, "Wrong alignment on ABP_BD_DYN_RadarStation_C");
static_assert(sizeof(ABP_BD_DYN_RadarStation_C) == 0x001B20, "Wrong size on ABP_BD_DYN_RadarStation_C");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, UberGraphFrame) == 0x001A00, "Member 'ABP_BD_DYN_RadarStation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, PS_DustStructurePlacement_01_ParamSize) == 0x001A08, "Member 'ABP_BD_DYN_RadarStation_C::PS_DustStructurePlacement_01_ParamSize' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, PS_DustDYNDrillPlacement_01) == 0x001A10, "Member 'ABP_BD_DYN_RadarStation_C::PS_DustDYNDrillPlacement_01' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, BP_BuildingAmbience) == 0x001A18, "Member 'ABP_BD_DYN_RadarStation_C::BP_BuildingAmbience' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, FireSFX) == 0x001A20, "Member 'ABP_BD_DYN_RadarStation_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, NS_Fire3) == 0x001A28, "Member 'ABP_BD_DYN_RadarStation_C::NS_Fire3' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, NS_Fire2) == 0x001A30, "Member 'ABP_BD_DYN_RadarStation_C::NS_Fire2' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, NS_Fire1) == 0x001A38, "Member 'ABP_BD_DYN_RadarStation_C::NS_Fire1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, PointLight_4) == 0x001A40, "Member 'ABP_BD_DYN_RadarStation_C::PointLight_4' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, PointLight_3) == 0x001A48, "Member 'ABP_BD_DYN_RadarStation_C::PointLight_3' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, PointLight_2) == 0x001A50, "Member 'ABP_BD_DYN_RadarStation_C::PointLight_2' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, PointLight_1) == 0x001A58, "Member 'ABP_BD_DYN_RadarStation_C::PointLight_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, HitBox1) == 0x001A60, "Member 'ABP_BD_DYN_RadarStation_C::HitBox1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, HitBox) == 0x001A68, "Member 'ABP_BD_DYN_RadarStation_C::HitBox' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_DeactivateAndDestroy_Dissolve_D8176A0C4949961FDE11679C70D963EB) == 0x001A70, "Member 'ABP_BD_DYN_RadarStation_C::TL_DeactivateAndDestroy_Dissolve_D8176A0C4949961FDE11679C70D963EB' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_DeactivateAndDestroy__Direction_D8176A0C4949961FDE11679C70D963EB) == 0x001A74, "Member 'ABP_BD_DYN_RadarStation_C::TL_DeactivateAndDestroy__Direction_D8176A0C4949961FDE11679C70D963EB' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_DeactivateAndDestroy) == 0x001A78, "Member 'ABP_BD_DYN_RadarStation_C::TL_DeactivateAndDestroy' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_Explosion_Dissolve_5292EE774DC02A859DC63C8F24C2410B) == 0x001A80, "Member 'ABP_BD_DYN_RadarStation_C::TL_Explosion_Dissolve_5292EE774DC02A859DC63C8F24C2410B' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_Explosion_Explosion_5292EE774DC02A859DC63C8F24C2410B) == 0x001A84, "Member 'ABP_BD_DYN_RadarStation_C::TL_Explosion_Explosion_5292EE774DC02A859DC63C8F24C2410B' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_Explosion__Direction_5292EE774DC02A859DC63C8F24C2410B) == 0x001A88, "Member 'ABP_BD_DYN_RadarStation_C::TL_Explosion__Direction_5292EE774DC02A859DC63C8F24C2410B' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_Explosion) == 0x001A90, "Member 'ABP_BD_DYN_RadarStation_C::TL_Explosion' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_OnDeath_NewTrack_1_6C0DA9DE4BDED7838A7273BCF99872AC) == 0x001A98, "Member 'ABP_BD_DYN_RadarStation_C::TL_OnDeath_NewTrack_1_6C0DA9DE4BDED7838A7273BCF99872AC' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_OnDeath__Direction_6C0DA9DE4BDED7838A7273BCF99872AC) == 0x001A9C, "Member 'ABP_BD_DYN_RadarStation_C::TL_OnDeath__Direction_6C0DA9DE4BDED7838A7273BCF99872AC' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_OnDeath) == 0x001AA0, "Member 'ABP_BD_DYN_RadarStation_C::TL_OnDeath' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_SwitchVisuals__Direction_2710FF614B369C1EA16FD187AA14B56F) == 0x001AA8, "Member 'ABP_BD_DYN_RadarStation_C::TL_SwitchVisuals__Direction_2710FF614B369C1EA16FD187AA14B56F' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, TL_SwitchVisuals) == 0x001AB0, "Member 'ABP_BD_DYN_RadarStation_C::TL_SwitchVisuals' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, CachedActorLocation) == 0x001AB8, "Member 'ABP_BD_DYN_RadarStation_C::CachedActorLocation' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, Explosion_Strength) == 0x001AD0, "Member 'ABP_BD_DYN_RadarStation_C::Explosion_Strength' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, Explosion_Radius) == 0x001AD8, "Member 'ABP_BD_DYN_RadarStation_C::Explosion_Radius' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, Explosion_Falloff_Exp) == 0x001AE0, "Member 'ABP_BD_DYN_RadarStation_C::Explosion_Falloff_Exp' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, Explosion_Slot_Array) == 0x001AE8, "Member 'ABP_BD_DYN_RadarStation_C::Explosion_Slot_Array' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, Explosion_Slot_Current) == 0x001AF8, "Member 'ABP_BD_DYN_RadarStation_C::Explosion_Slot_Current' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, Explosion_Slot_Found) == 0x001B08, "Member 'ABP_BD_DYN_RadarStation_C::Explosion_Slot_Found' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, CachedSurfaceType) == 0x001B0C, "Member 'ABP_BD_DYN_RadarStation_C::CachedSurfaceType' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_RadarStation_C, AnimMontageLength) == 0x001B10, "Member 'ABP_BD_DYN_RadarStation_C::AnimMontageLength' has a wrong offset!");

}

