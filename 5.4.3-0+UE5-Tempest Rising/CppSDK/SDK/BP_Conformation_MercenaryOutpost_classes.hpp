﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Conformation_MercenaryOutpost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Conformation_MercenaryOutpost.BP_Conformation_MercenaryOutpost_C
// 0x0170 (0x1C70 - 0x1B00)
class ABP_Conformation_MercenaryOutpost_C final : public ATedConformationBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1B00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Flag_Neutral_02;                                // 0x1B08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Flag_Neutral_01;                                // 0x1B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FireSFX;                                           // 0x1B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_DestroyConformationMercenaryOutpost;            // 0x1B20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_RepairConformationMercenaryOutpost;             // 0x1B28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_NEU_MercenaryOutpost_WindowPlanes;              // 0x1B30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight6;                                        // 0x1B38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight5;                                        // 0x1B40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight3;                                        // 0x1B48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight2;                                        // 0x1B50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight1;                                        // 0x1B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x1B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ProductionLights;                                  // 0x1B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire4;                                          // 0x1B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire2;                                          // 0x1B78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire1;                                          // 0x1B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire3;                                          // 0x1B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       SpawnSpline;                                       // 0x1B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox3;                                           // 0x1B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox2;                                           // 0x1BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox1;                                           // 0x1BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Dissolve_4F7E49154093D93963E7C4BCDD96B32E; // 0x1BB0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Explosion_4F7E49154093D93963E7C4BCDD96B32E; // 0x1BB4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Explosion__Direction_4F7E49154093D93963E7C4BCDD96B32E; // 0x1BB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BB9[0x7];                                     // 0x1BB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Explosion;                                      // 0x1BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Deployed;                                     // 0x1BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DeployDuration;                                    // 0x1BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATedVehicle*                            DeployingVehicle;                                  // 0x1BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DebrisInitialLocation;                             // 0x1BE0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitPart1;                                          // 0x1BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitPart2;                                          // 0x1BFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitPart3;                                          // 0x1C00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitLimit;                                          // 0x1C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnWaterSurface;                                    // 0x1C08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyed;                                        // 0x1C09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C0A[0x6];                                     // 0x1C0A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TH_VFX;                                            // 0x1C10(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Explosion_Slot_Array;                              // 0x1C18(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Explosion_Slot_Current;                            // 0x1C28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Explosion_Slot_Found;                              // 0x1C38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C39[0x7];                                     // 0x1C39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Explosion_Radius;                                  // 0x1C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Falloff_Exp;                             // 0x1C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Strength;                                // 0x1C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CachedActorLocation;                               // 0x1C58(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Conformation_MercenaryOutpost(int32 EntryPoint);
	void ExplosionFXOnFoliage();
	void Found_Free_Explosion_Slot();
	void HideFXs();
	void OnCapturedCosmetic(ETedPlayerID NewPlayerID);
	void OnRequestChangeState(class AActor* InInstigator, const struct FGameplayTag& InState, const float InValue);
	void OnStateChangeCosmetic(const struct FGameplayTag& InState, const float InValue);
	void ReceiveBeginPlay();
	void ReceiveHandleConstructionVisuals(const bool bInConstructing);
	void ReceiveOnDeath();
	void ReceiveUpdateHealthEffects(float HealthPct);
	void Repair();
	void SetDestroyedMesh();
	void SetDestroyedMeshOnVisibilityChange();
	void TL_Explosion__FinishedFunc();
	void TL_Explosion__UpdateFunc();
	void Update_Build_Progress(double InStateValue);

	bool CanChangeState(const class AActor* InInstigator, const struct FGameplayTag& InState, const float InValue) const;
	class UStreamableRenderAsset* GetConformationPreviewMesh(struct FTransform* Offset) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Conformation_MercenaryOutpost_C">();
	}
	static class ABP_Conformation_MercenaryOutpost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Conformation_MercenaryOutpost_C>();
	}
};
static_assert(alignof(ABP_Conformation_MercenaryOutpost_C) == 0x000010, "Wrong alignment on ABP_Conformation_MercenaryOutpost_C");
static_assert(sizeof(ABP_Conformation_MercenaryOutpost_C) == 0x001C70, "Wrong size on ABP_Conformation_MercenaryOutpost_C");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, UberGraphFrame) == 0x001B00, "Member 'ABP_Conformation_MercenaryOutpost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SM_Flag_Neutral_02) == 0x001B08, "Member 'ABP_Conformation_MercenaryOutpost_C::SM_Flag_Neutral_02' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SM_Flag_Neutral_01) == 0x001B10, "Member 'ABP_Conformation_MercenaryOutpost_C::SM_Flag_Neutral_01' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, FireSFX) == 0x001B18, "Member 'ABP_Conformation_MercenaryOutpost_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, PS_DestroyConformationMercenaryOutpost) == 0x001B20, "Member 'ABP_Conformation_MercenaryOutpost_C::PS_DestroyConformationMercenaryOutpost' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, PS_RepairConformationMercenaryOutpost) == 0x001B28, "Member 'ABP_Conformation_MercenaryOutpost_C::PS_RepairConformationMercenaryOutpost' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SM_NEU_MercenaryOutpost_WindowPlanes) == 0x001B30, "Member 'ABP_Conformation_MercenaryOutpost_C::SM_NEU_MercenaryOutpost_WindowPlanes' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpotLight6) == 0x001B38, "Member 'ABP_Conformation_MercenaryOutpost_C::SpotLight6' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpotLight5) == 0x001B40, "Member 'ABP_Conformation_MercenaryOutpost_C::SpotLight5' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpotLight3) == 0x001B48, "Member 'ABP_Conformation_MercenaryOutpost_C::SpotLight3' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpotLight2) == 0x001B50, "Member 'ABP_Conformation_MercenaryOutpost_C::SpotLight2' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpotLight1) == 0x001B58, "Member 'ABP_Conformation_MercenaryOutpost_C::SpotLight1' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpotLight) == 0x001B60, "Member 'ABP_Conformation_MercenaryOutpost_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, ProductionLights) == 0x001B68, "Member 'ABP_Conformation_MercenaryOutpost_C::ProductionLights' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, NS_Fire4) == 0x001B70, "Member 'ABP_Conformation_MercenaryOutpost_C::NS_Fire4' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, NS_Fire2) == 0x001B78, "Member 'ABP_Conformation_MercenaryOutpost_C::NS_Fire2' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, NS_Fire1) == 0x001B80, "Member 'ABP_Conformation_MercenaryOutpost_C::NS_Fire1' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, NS_Fire3) == 0x001B88, "Member 'ABP_Conformation_MercenaryOutpost_C::NS_Fire3' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, SpawnSpline) == 0x001B90, "Member 'ABP_Conformation_MercenaryOutpost_C::SpawnSpline' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitBox3) == 0x001B98, "Member 'ABP_Conformation_MercenaryOutpost_C::HitBox3' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitBox2) == 0x001BA0, "Member 'ABP_Conformation_MercenaryOutpost_C::HitBox2' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitBox1) == 0x001BA8, "Member 'ABP_Conformation_MercenaryOutpost_C::HitBox1' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, TL_Explosion_Dissolve_4F7E49154093D93963E7C4BCDD96B32E) == 0x001BB0, "Member 'ABP_Conformation_MercenaryOutpost_C::TL_Explosion_Dissolve_4F7E49154093D93963E7C4BCDD96B32E' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, TL_Explosion_Explosion_4F7E49154093D93963E7C4BCDD96B32E) == 0x001BB4, "Member 'ABP_Conformation_MercenaryOutpost_C::TL_Explosion_Explosion_4F7E49154093D93963E7C4BCDD96B32E' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, TL_Explosion__Direction_4F7E49154093D93963E7C4BCDD96B32E) == 0x001BB8, "Member 'ABP_Conformation_MercenaryOutpost_C::TL_Explosion__Direction_4F7E49154093D93963E7C4BCDD96B32E' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, TL_Explosion) == 0x001BC0, "Member 'ABP_Conformation_MercenaryOutpost_C::TL_Explosion' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Mesh_Deployed) == 0x001BC8, "Member 'ABP_Conformation_MercenaryOutpost_C::Mesh_Deployed' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, DeployDuration) == 0x001BD0, "Member 'ABP_Conformation_MercenaryOutpost_C::DeployDuration' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, DeployingVehicle) == 0x001BD8, "Member 'ABP_Conformation_MercenaryOutpost_C::DeployingVehicle' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, DebrisInitialLocation) == 0x001BE0, "Member 'ABP_Conformation_MercenaryOutpost_C::DebrisInitialLocation' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitPart1) == 0x001BF8, "Member 'ABP_Conformation_MercenaryOutpost_C::HitPart1' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitPart2) == 0x001BFC, "Member 'ABP_Conformation_MercenaryOutpost_C::HitPart2' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitPart3) == 0x001C00, "Member 'ABP_Conformation_MercenaryOutpost_C::HitPart3' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, HitLimit) == 0x001C04, "Member 'ABP_Conformation_MercenaryOutpost_C::HitLimit' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, OnWaterSurface) == 0x001C08, "Member 'ABP_Conformation_MercenaryOutpost_C::OnWaterSurface' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, bDestroyed) == 0x001C09, "Member 'ABP_Conformation_MercenaryOutpost_C::bDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, TH_VFX) == 0x001C10, "Member 'ABP_Conformation_MercenaryOutpost_C::TH_VFX' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Explosion_Slot_Array) == 0x001C18, "Member 'ABP_Conformation_MercenaryOutpost_C::Explosion_Slot_Array' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Explosion_Slot_Current) == 0x001C28, "Member 'ABP_Conformation_MercenaryOutpost_C::Explosion_Slot_Current' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Explosion_Slot_Found) == 0x001C38, "Member 'ABP_Conformation_MercenaryOutpost_C::Explosion_Slot_Found' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Explosion_Radius) == 0x001C40, "Member 'ABP_Conformation_MercenaryOutpost_C::Explosion_Radius' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Explosion_Falloff_Exp) == 0x001C48, "Member 'ABP_Conformation_MercenaryOutpost_C::Explosion_Falloff_Exp' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, Explosion_Strength) == 0x001C50, "Member 'ABP_Conformation_MercenaryOutpost_C::Explosion_Strength' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_MercenaryOutpost_C, CachedActorLocation) == 0x001C58, "Member 'ABP_Conformation_MercenaryOutpost_C::CachedActorLocation' has a wrong offset!");

}

