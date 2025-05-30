﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BD_GDF_Refinery

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BD_GDF_Refinery.BP_BD_GDF_Refinery_C
// 0x0190 (0x1CD0 - 0x1B40)
class ABP_BD_GDF_Refinery_C final : public ATedStructureRefinery_GDF
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      PS_DustStructurePlacement_01_ParamSize;            // 0x1B48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildingAmbience_C*                 BP_BuildingAmbience;                               // 0x1B50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FireSFX;                                           // 0x1B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox6;                                           // 0x1B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_2;                                      // 0x1B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fluid_Mesh;                                        // 0x1B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire4;                                          // 0x1B78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire3;                                          // 0x1B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire2;                                          // 0x1B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire1;                                          // 0x1B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_3;                                      // 0x1B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_1;                                      // 0x1BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SteamJet_1;                                     // 0x1BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SideSmoke_2;                                    // 0x1BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SideSmoke_1;                                    // 0x1BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_MainSmoke;                                      // 0x1BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox5;                                           // 0x1BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox4;                                           // 0x1BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox3;                                           // 0x1BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox2;                                           // 0x1BE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox1;                                           // 0x1BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_DeactivateAndDestroy_Dissolve_6B3FF78543DDDCEA085E67BBA0F9E645; // 0x1BF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_DeactivateAndDestroy__Direction_6B3FF78543DDDCEA085E67BBA0F9E645; // 0x1BF4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BF5[0x3];                                     // 0x1BF5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_DeactivateAndDestroy;                           // 0x1BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Dissolve_CD6B9A39440FDD5E0AE4F8B0EE550E7A; // 0x1C00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Explosion_CD6B9A39440FDD5E0AE4F8B0EE550E7A; // 0x1C04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Explosion__Direction_CD6B9A39440FDD5E0AE4F8B0EE550E7A; // 0x1C08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C09[0x7];                                     // 0x1C09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Explosion;                                      // 0x1C10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_OnDeath_NewTrack_1_0BFDCFBA4B45424770E393987C9898FE; // 0x1C18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_OnDeath__Direction_0BFDCFBA4B45424770E393987C9898FE; // 0x1C1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1D[0x3];                                     // 0x1C1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_OnDeath;                                        // 0x1C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_SwitchVisuals__Direction_8EA5D04E4E9DA46C78604B86639ACFF4; // 0x1C28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C29[0x7];                                     // 0x1C29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_SwitchVisuals;                                  // 0x1C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Fluid_Offset_Min;                                  // 0x1C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fluid_Offset_Current;                              // 0x1C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fluid_Offset_Death;                                // 0x1C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CachedActorLocation;                               // 0x1C50(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Credits_Current_Pct;                               // 0x1C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x1C70(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Credits_Target_Pct;                                // 0x1C78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Strength;                                // 0x1C80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Radius;                                  // 0x1C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Falloff_Exp;                             // 0x1C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Explosion_Slot_Array;                              // 0x1C98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Explosion_Slot_Current;                            // 0x1CA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Explosion_Slot_Found;                              // 0x1CB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB9[0x3];                                     // 0x1CB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimMontageLength;                                 // 0x1CBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CachedSurfaceType;                                 // 0x1CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Destructible(TArray<class UStaticMesh*>& DestMeshes, TArray<struct FVector>& DestMeshes_Locations, TArray<struct FRotator>& DestMeshes_Rotators, const struct FVector& MeshScale, TArray<class UFXSystemAsset*>& DestMeshes_exploFX, TArray<double>& DestMeshes_exploFX_Scale, TArray<class UFXSystemAsset*>& DestMeshes_attachedFX, TArray<double>& DestMeshes_attachedFX_Scale, TArray<struct FVector>& DestMeshes_LinearImpulse, TArray<struct FVector>& DestMeshes_AngularImpulse, TArray<class AStaticMeshActor*>* SpawnedMeshesArray, TArray<class UFXSystemComponent*>* SpawnedAttachedFXArray);
	void Destructible_Refinery_Custom_Setup(class USkeletalMeshComponent* Skeletal_Mesh, TArray<class UStaticMesh*>* DestMeshes, TArray<struct FVector>* DestMeshes_Locations, TArray<struct FRotator>* DestMeshes_Rotators, struct FVector* MeshScale, TArray<class UFXSystemAsset*>* DestMeshes_FX, TArray<double>* DestMeshes_FX_Scale, TArray<class UFXSystemAsset*>* DestMeshes_FXattached, TArray<double>* DestMeshes_FXattached_Scale, TArray<struct FVector>* DestMeshes_LinearImpulse, TArray<struct FVector>* DestMeshes_AngularImpulse);
	void ExecuteUbergraph_BP_BD_GDF_Refinery(int32 EntryPoint);
	void Found_Free_Explosion_Slot();
	void GetIdleEffectComponents(TArray<class USceneComponent*>* Components);
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
	void TL_SwitchVisuals__ThirdStep__EventFunc();
	void TL_SwitchVisuals__UpdateFunc();
	void UpdateDials();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BD_GDF_Refinery_C">();
	}
	static class ABP_BD_GDF_Refinery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BD_GDF_Refinery_C>();
	}
};
static_assert(alignof(ABP_BD_GDF_Refinery_C) == 0x000010, "Wrong alignment on ABP_BD_GDF_Refinery_C");
static_assert(sizeof(ABP_BD_GDF_Refinery_C) == 0x001CD0, "Wrong size on ABP_BD_GDF_Refinery_C");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, UberGraphFrame) == 0x001B40, "Member 'ABP_BD_GDF_Refinery_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, PS_DustStructurePlacement_01_ParamSize) == 0x001B48, "Member 'ABP_BD_GDF_Refinery_C::PS_DustStructurePlacement_01_ParamSize' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, BP_BuildingAmbience) == 0x001B50, "Member 'ABP_BD_GDF_Refinery_C::BP_BuildingAmbience' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, FireSFX) == 0x001B58, "Member 'ABP_BD_GDF_Refinery_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, HitBox6) == 0x001B60, "Member 'ABP_BD_GDF_Refinery_C::HitBox6' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, PointLight_2) == 0x001B68, "Member 'ABP_BD_GDF_Refinery_C::PointLight_2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Fluid_Mesh) == 0x001B70, "Member 'ABP_BD_GDF_Refinery_C::Fluid_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_Fire4) == 0x001B78, "Member 'ABP_BD_GDF_Refinery_C::NS_Fire4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_Fire3) == 0x001B80, "Member 'ABP_BD_GDF_Refinery_C::NS_Fire3' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_Fire2) == 0x001B88, "Member 'ABP_BD_GDF_Refinery_C::NS_Fire2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_Fire1) == 0x001B90, "Member 'ABP_BD_GDF_Refinery_C::NS_Fire1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, PointLight_3) == 0x001B98, "Member 'ABP_BD_GDF_Refinery_C::PointLight_3' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, PointLight_1) == 0x001BA0, "Member 'ABP_BD_GDF_Refinery_C::PointLight_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_SteamJet_1) == 0x001BA8, "Member 'ABP_BD_GDF_Refinery_C::NS_SteamJet_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_SideSmoke_2) == 0x001BB0, "Member 'ABP_BD_GDF_Refinery_C::NS_SideSmoke_2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_SideSmoke_1) == 0x001BB8, "Member 'ABP_BD_GDF_Refinery_C::NS_SideSmoke_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, NS_MainSmoke) == 0x001BC0, "Member 'ABP_BD_GDF_Refinery_C::NS_MainSmoke' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, HitBox5) == 0x001BC8, "Member 'ABP_BD_GDF_Refinery_C::HitBox5' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, HitBox4) == 0x001BD0, "Member 'ABP_BD_GDF_Refinery_C::HitBox4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, HitBox3) == 0x001BD8, "Member 'ABP_BD_GDF_Refinery_C::HitBox3' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, HitBox2) == 0x001BE0, "Member 'ABP_BD_GDF_Refinery_C::HitBox2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, HitBox1) == 0x001BE8, "Member 'ABP_BD_GDF_Refinery_C::HitBox1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_DeactivateAndDestroy_Dissolve_6B3FF78543DDDCEA085E67BBA0F9E645) == 0x001BF0, "Member 'ABP_BD_GDF_Refinery_C::TL_DeactivateAndDestroy_Dissolve_6B3FF78543DDDCEA085E67BBA0F9E645' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_DeactivateAndDestroy__Direction_6B3FF78543DDDCEA085E67BBA0F9E645) == 0x001BF4, "Member 'ABP_BD_GDF_Refinery_C::TL_DeactivateAndDestroy__Direction_6B3FF78543DDDCEA085E67BBA0F9E645' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_DeactivateAndDestroy) == 0x001BF8, "Member 'ABP_BD_GDF_Refinery_C::TL_DeactivateAndDestroy' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_Explosion_Dissolve_CD6B9A39440FDD5E0AE4F8B0EE550E7A) == 0x001C00, "Member 'ABP_BD_GDF_Refinery_C::TL_Explosion_Dissolve_CD6B9A39440FDD5E0AE4F8B0EE550E7A' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_Explosion_Explosion_CD6B9A39440FDD5E0AE4F8B0EE550E7A) == 0x001C04, "Member 'ABP_BD_GDF_Refinery_C::TL_Explosion_Explosion_CD6B9A39440FDD5E0AE4F8B0EE550E7A' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_Explosion__Direction_CD6B9A39440FDD5E0AE4F8B0EE550E7A) == 0x001C08, "Member 'ABP_BD_GDF_Refinery_C::TL_Explosion__Direction_CD6B9A39440FDD5E0AE4F8B0EE550E7A' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_Explosion) == 0x001C10, "Member 'ABP_BD_GDF_Refinery_C::TL_Explosion' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_OnDeath_NewTrack_1_0BFDCFBA4B45424770E393987C9898FE) == 0x001C18, "Member 'ABP_BD_GDF_Refinery_C::TL_OnDeath_NewTrack_1_0BFDCFBA4B45424770E393987C9898FE' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_OnDeath__Direction_0BFDCFBA4B45424770E393987C9898FE) == 0x001C1C, "Member 'ABP_BD_GDF_Refinery_C::TL_OnDeath__Direction_0BFDCFBA4B45424770E393987C9898FE' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_OnDeath) == 0x001C20, "Member 'ABP_BD_GDF_Refinery_C::TL_OnDeath' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_SwitchVisuals__Direction_8EA5D04E4E9DA46C78604B86639ACFF4) == 0x001C28, "Member 'ABP_BD_GDF_Refinery_C::TL_SwitchVisuals__Direction_8EA5D04E4E9DA46C78604B86639ACFF4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TL_SwitchVisuals) == 0x001C30, "Member 'ABP_BD_GDF_Refinery_C::TL_SwitchVisuals' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Fluid_Offset_Min) == 0x001C38, "Member 'ABP_BD_GDF_Refinery_C::Fluid_Offset_Min' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Fluid_Offset_Current) == 0x001C40, "Member 'ABP_BD_GDF_Refinery_C::Fluid_Offset_Current' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Fluid_Offset_Death) == 0x001C48, "Member 'ABP_BD_GDF_Refinery_C::Fluid_Offset_Death' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, CachedActorLocation) == 0x001C50, "Member 'ABP_BD_GDF_Refinery_C::CachedActorLocation' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Credits_Current_Pct) == 0x001C68, "Member 'ABP_BD_GDF_Refinery_C::Credits_Current_Pct' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, TimerHandle) == 0x001C70, "Member 'ABP_BD_GDF_Refinery_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Credits_Target_Pct) == 0x001C78, "Member 'ABP_BD_GDF_Refinery_C::Credits_Target_Pct' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Explosion_Strength) == 0x001C80, "Member 'ABP_BD_GDF_Refinery_C::Explosion_Strength' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Explosion_Radius) == 0x001C88, "Member 'ABP_BD_GDF_Refinery_C::Explosion_Radius' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Explosion_Falloff_Exp) == 0x001C90, "Member 'ABP_BD_GDF_Refinery_C::Explosion_Falloff_Exp' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Explosion_Slot_Array) == 0x001C98, "Member 'ABP_BD_GDF_Refinery_C::Explosion_Slot_Array' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Explosion_Slot_Current) == 0x001CA8, "Member 'ABP_BD_GDF_Refinery_C::Explosion_Slot_Current' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, Explosion_Slot_Found) == 0x001CB8, "Member 'ABP_BD_GDF_Refinery_C::Explosion_Slot_Found' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, AnimMontageLength) == 0x001CBC, "Member 'ABP_BD_GDF_Refinery_C::AnimMontageLength' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Refinery_C, CachedSurfaceType) == 0x001CC0, "Member 'ABP_BD_GDF_Refinery_C::CachedSurfaceType' has a wrong offset!");

}

