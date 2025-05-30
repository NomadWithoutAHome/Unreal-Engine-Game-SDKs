﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BD_GDF_Barracks

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BD_GDF_Barracks.BP_BD_GDF_Barracks_C
// 0x0180 (0x1B80 - 0x1A00)
class ABP_BD_GDF_Barracks_C final : public ATedStructureUnitFactory
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1A00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTedRangeDecalComponent*                CommsFieldDecal;                                   // 0x1A08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_DustStructurePlacement_01_ParamSize;            // 0x1A10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildingAmbience_C*                 BP_BuildingAmbience;                               // 0x1A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FireSFX;                                           // 0x1A20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_LightPulsating_1;                               // 0x1A28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_RadioWaveAndLight_1;                            // 0x1A30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Steam1;                                         // 0x1A38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTedPawnContainerComponent*             TedPawnContainer;                                  // 0x1A40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire4;                                          // 0x1A48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire3;                                          // 0x1A50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire2;                                          // 0x1A58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Fire1;                                          // 0x1A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_3;                                      // 0x1A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_2;                                      // 0x1A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_1;                                      // 0x1A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox8;                                           // 0x1A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox7;                                           // 0x1A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox6;                                           // 0x1A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox5;                                           // 0x1A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox4;                                           // 0x1AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox3;                                           // 0x1AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox2;                                           // 0x1AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox1;                                           // 0x1AB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Dissolve_9ED0A80C403F3D001C04C7B2307A9FD4; // 0x1AC0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_Explosion_Explosion_9ED0A80C403F3D001C04C7B2307A9FD4; // 0x1AC4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_Explosion__Direction_9ED0A80C403F3D001C04C7B2307A9FD4; // 0x1AC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC9[0x7];                                     // 0x1AC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_Explosion;                                      // 0x1AD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_OnDeath_NewTrack_1_2519A5054594BAF67D347CA0F03EE7A6; // 0x1AD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_OnDeath__Direction_2519A5054594BAF67D347CA0F03EE7A6; // 0x1ADC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1ADD[0x3];                                     // 0x1ADD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_OnDeath;                                        // 0x1AE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         TL_DeactivateAndDestroy_Dissolve_9E8E63854067456BF3F6FE9BCB5B5562; // 0x1AE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_DeactivateAndDestroy__Direction_9E8E63854067456BF3F6FE9BCB5B5562; // 0x1AEC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AED[0x3];                                     // 0x1AED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_DeactivateAndDestroy;                           // 0x1AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_SwitchVisuals__Direction_F21875B14091B10F4327D2A561AF6592; // 0x1AF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AF9[0x7];                                     // 0x1AF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_SwitchVisuals;                                  // 0x1B00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______________Direction_5A0656DB48E89DC5B49BBD909425A092; // 0x1B08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B09[0x7];                                     // 0x1B09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Шкала_времени;                                     // 0x1B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CachedActorLocation;                               // 0x1B18(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Explosion_Slot_Array;                              // 0x1B30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Explosion_Slot_Current;                            // 0x1B40(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Explosion_Slot_Found;                              // 0x1B50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B51[0x7];                                     // 0x1B51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Explosion_Strength;                                // 0x1B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Radius;                                  // 0x1B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Explosion_Falloff_Exp;                             // 0x1B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimMontageLength;                                 // 0x1B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CachedSurfaceType;                                 // 0x1B74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCachedSelected;                                   // 0x1B78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCachedHovered;                                    // 0x1B79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_BD_GDF_Barracks_CommsFieldDecal_K2Node_ComponentBoundEvent_0_RangeDecalDelegate__DelegateSignature();
	void BndEvt__BP_BD_GDF_Barracks_CommsFieldDecal_K2Node_ComponentBoundEvent_1_RangeDecalDelegate__DelegateSignature();
	void Destructible(TArray<class UStaticMesh*>& DestMeshes, TArray<struct FVector>& DestMeshes_Locations, TArray<struct FRotator>& DestMeshes_Rotators, const struct FVector& MeshScale, TArray<class UFXSystemAsset*>& DestMeshes_exploFX, TArray<double>& DestMeshes_exploFX_Scale, TArray<class UFXSystemAsset*>& DestMeshes_attachedFX, TArray<double>& DestMeshes_attachedFX_Scale, TArray<struct FVector>& DestMeshes_LinearImpulse, TArray<struct FVector>& DestMeshes_AngularImpulse, TArray<class AStaticMeshActor*>* SpawnedMeshesArray, TArray<class UFXSystemComponent*>* SpawnedAttachedFXArray);
	void Destructible_Barracks_Custom_Setup(class USkeletalMeshComponent* Skeletal_Mesh, TArray<class UStaticMesh*>* DestMeshes, TArray<struct FVector>* DestMeshes_Locations, TArray<struct FRotator>* DestMeshes_Rotators, struct FVector* MeshScale, TArray<class UFXSystemAsset*>* DestMeshes_FX, TArray<double>* DestMeshes_FX_Scale, TArray<class UFXSystemAsset*>* DestMeshes_FXattached, TArray<double>* DestMeshes_FXattached_Scale, TArray<struct FVector>* DestMeshes_LinearImpulse, TArray<struct FVector>* DestMeshes_AngularImpulse);
	void ExecuteUbergraph_BP_BD_GDF_Barracks(int32 EntryPoint);
	void Found_Free_Explosion_Slot();
	void K2_OnEndSellingStructure();
	void OnSelectionChanged_Blueprint(const bool bIsSelected, const bool bIsHovered);
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
	void UpdateCommsFieldRangeDecal();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BD_GDF_Barracks_C">();
	}
	static class ABP_BD_GDF_Barracks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BD_GDF_Barracks_C>();
	}
};
static_assert(alignof(ABP_BD_GDF_Barracks_C) == 0x000010, "Wrong alignment on ABP_BD_GDF_Barracks_C");
static_assert(sizeof(ABP_BD_GDF_Barracks_C) == 0x001B80, "Wrong size on ABP_BD_GDF_Barracks_C");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, UberGraphFrame) == 0x001A00, "Member 'ABP_BD_GDF_Barracks_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, CommsFieldDecal) == 0x001A08, "Member 'ABP_BD_GDF_Barracks_C::CommsFieldDecal' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, PS_DustStructurePlacement_01_ParamSize) == 0x001A10, "Member 'ABP_BD_GDF_Barracks_C::PS_DustStructurePlacement_01_ParamSize' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, BP_BuildingAmbience) == 0x001A18, "Member 'ABP_BD_GDF_Barracks_C::BP_BuildingAmbience' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, FireSFX) == 0x001A20, "Member 'ABP_BD_GDF_Barracks_C::FireSFX' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, PS_LightPulsating_1) == 0x001A28, "Member 'ABP_BD_GDF_Barracks_C::PS_LightPulsating_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, PS_RadioWaveAndLight_1) == 0x001A30, "Member 'ABP_BD_GDF_Barracks_C::PS_RadioWaveAndLight_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, NS_Steam1) == 0x001A38, "Member 'ABP_BD_GDF_Barracks_C::NS_Steam1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TedPawnContainer) == 0x001A40, "Member 'ABP_BD_GDF_Barracks_C::TedPawnContainer' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, NS_Fire4) == 0x001A48, "Member 'ABP_BD_GDF_Barracks_C::NS_Fire4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, NS_Fire3) == 0x001A50, "Member 'ABP_BD_GDF_Barracks_C::NS_Fire3' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, NS_Fire2) == 0x001A58, "Member 'ABP_BD_GDF_Barracks_C::NS_Fire2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, NS_Fire1) == 0x001A60, "Member 'ABP_BD_GDF_Barracks_C::NS_Fire1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, PointLight_3) == 0x001A68, "Member 'ABP_BD_GDF_Barracks_C::PointLight_3' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, PointLight_2) == 0x001A70, "Member 'ABP_BD_GDF_Barracks_C::PointLight_2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, PointLight_1) == 0x001A78, "Member 'ABP_BD_GDF_Barracks_C::PointLight_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox8) == 0x001A80, "Member 'ABP_BD_GDF_Barracks_C::HitBox8' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox7) == 0x001A88, "Member 'ABP_BD_GDF_Barracks_C::HitBox7' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox6) == 0x001A90, "Member 'ABP_BD_GDF_Barracks_C::HitBox6' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox5) == 0x001A98, "Member 'ABP_BD_GDF_Barracks_C::HitBox5' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox4) == 0x001AA0, "Member 'ABP_BD_GDF_Barracks_C::HitBox4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox3) == 0x001AA8, "Member 'ABP_BD_GDF_Barracks_C::HitBox3' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox2) == 0x001AB0, "Member 'ABP_BD_GDF_Barracks_C::HitBox2' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, HitBox1) == 0x001AB8, "Member 'ABP_BD_GDF_Barracks_C::HitBox1' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_Explosion_Dissolve_9ED0A80C403F3D001C04C7B2307A9FD4) == 0x001AC0, "Member 'ABP_BD_GDF_Barracks_C::TL_Explosion_Dissolve_9ED0A80C403F3D001C04C7B2307A9FD4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_Explosion_Explosion_9ED0A80C403F3D001C04C7B2307A9FD4) == 0x001AC4, "Member 'ABP_BD_GDF_Barracks_C::TL_Explosion_Explosion_9ED0A80C403F3D001C04C7B2307A9FD4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_Explosion__Direction_9ED0A80C403F3D001C04C7B2307A9FD4) == 0x001AC8, "Member 'ABP_BD_GDF_Barracks_C::TL_Explosion__Direction_9ED0A80C403F3D001C04C7B2307A9FD4' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_Explosion) == 0x001AD0, "Member 'ABP_BD_GDF_Barracks_C::TL_Explosion' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_OnDeath_NewTrack_1_2519A5054594BAF67D347CA0F03EE7A6) == 0x001AD8, "Member 'ABP_BD_GDF_Barracks_C::TL_OnDeath_NewTrack_1_2519A5054594BAF67D347CA0F03EE7A6' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_OnDeath__Direction_2519A5054594BAF67D347CA0F03EE7A6) == 0x001ADC, "Member 'ABP_BD_GDF_Barracks_C::TL_OnDeath__Direction_2519A5054594BAF67D347CA0F03EE7A6' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_OnDeath) == 0x001AE0, "Member 'ABP_BD_GDF_Barracks_C::TL_OnDeath' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_DeactivateAndDestroy_Dissolve_9E8E63854067456BF3F6FE9BCB5B5562) == 0x001AE8, "Member 'ABP_BD_GDF_Barracks_C::TL_DeactivateAndDestroy_Dissolve_9E8E63854067456BF3F6FE9BCB5B5562' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_DeactivateAndDestroy__Direction_9E8E63854067456BF3F6FE9BCB5B5562) == 0x001AEC, "Member 'ABP_BD_GDF_Barracks_C::TL_DeactivateAndDestroy__Direction_9E8E63854067456BF3F6FE9BCB5B5562' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_DeactivateAndDestroy) == 0x001AF0, "Member 'ABP_BD_GDF_Barracks_C::TL_DeactivateAndDestroy' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_SwitchVisuals__Direction_F21875B14091B10F4327D2A561AF6592) == 0x001AF8, "Member 'ABP_BD_GDF_Barracks_C::TL_SwitchVisuals__Direction_F21875B14091B10F4327D2A561AF6592' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, TL_SwitchVisuals) == 0x001B00, "Member 'ABP_BD_GDF_Barracks_C::TL_SwitchVisuals' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, _______________Direction_5A0656DB48E89DC5B49BBD909425A092) == 0x001B08, "Member 'ABP_BD_GDF_Barracks_C::_______________Direction_5A0656DB48E89DC5B49BBD909425A092' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Шкала_времени) == 0x001B10, "Member 'ABP_BD_GDF_Barracks_C::Шкала_времени' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, CachedActorLocation) == 0x001B18, "Member 'ABP_BD_GDF_Barracks_C::CachedActorLocation' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Explosion_Slot_Array) == 0x001B30, "Member 'ABP_BD_GDF_Barracks_C::Explosion_Slot_Array' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Explosion_Slot_Current) == 0x001B40, "Member 'ABP_BD_GDF_Barracks_C::Explosion_Slot_Current' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Explosion_Slot_Found) == 0x001B50, "Member 'ABP_BD_GDF_Barracks_C::Explosion_Slot_Found' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Explosion_Strength) == 0x001B58, "Member 'ABP_BD_GDF_Barracks_C::Explosion_Strength' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Explosion_Radius) == 0x001B60, "Member 'ABP_BD_GDF_Barracks_C::Explosion_Radius' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, Explosion_Falloff_Exp) == 0x001B68, "Member 'ABP_BD_GDF_Barracks_C::Explosion_Falloff_Exp' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, AnimMontageLength) == 0x001B70, "Member 'ABP_BD_GDF_Barracks_C::AnimMontageLength' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, CachedSurfaceType) == 0x001B74, "Member 'ABP_BD_GDF_Barracks_C::CachedSurfaceType' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, bCachedSelected) == 0x001B78, "Member 'ABP_BD_GDF_Barracks_C::bCachedSelected' has a wrong offset!");
static_assert(offsetof(ABP_BD_GDF_Barracks_C, bCachedHovered) == 0x001B79, "Member 'ABP_BD_GDF_Barracks_C::bCachedHovered' has a wrong offset!");

}

