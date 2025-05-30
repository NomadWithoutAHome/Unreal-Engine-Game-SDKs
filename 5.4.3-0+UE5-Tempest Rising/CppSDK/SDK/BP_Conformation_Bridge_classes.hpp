﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Conformation_Bridge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Conformation_Bridge.BP_Conformation_Bridge_C
// 0x0070 (0x1B70 - 0x1B00)
class ABP_Conformation_Bridge_C : public ATedConformationBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1B00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      PS_RepairConformationBridges;                      // 0x1B08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PS_DestroyConformationBridges;                     // 0x1B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Deployed;                                     // 0x1B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Broken;                                       // 0x1B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DeployDuration;                                    // 0x1B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATedVehicle*                            DeployingVehicle;                                  // 0x1B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ActivatorLocation2;                                // 0x1B38(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ActivatorLocation;                                 // 0x1B50(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           In_State;                                          // 0x1B68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Conformation_Bridge(int32 EntryPoint);
	void HidePreview();
	void OnRequestChangeState(class AActor* InInstigator, const struct FGameplayTag& InState, const float InValue);
	void OnStateChangeCosmetic(const struct FGameplayTag& InState, const float InValue);
	void ShowPreview(const class AActor* InInstigator, const struct FGameplayTag& InState, const float InValue);
	void UpdateBuildProgress(double InStateValue);

	bool CanChangeState(const class AActor* InInstigator, const struct FGameplayTag& InState, const float InValue) const;
	class UStreamableRenderAsset* GetConformationPreviewMesh(struct FTransform* Offset) const;
	void GetLocationsForActivator(TArray<struct FVector>* OutLocations) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Conformation_Bridge_C">();
	}
	static class ABP_Conformation_Bridge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Conformation_Bridge_C>();
	}
};
static_assert(alignof(ABP_Conformation_Bridge_C) == 0x000010, "Wrong alignment on ABP_Conformation_Bridge_C");
static_assert(sizeof(ABP_Conformation_Bridge_C) == 0x001B70, "Wrong size on ABP_Conformation_Bridge_C");
static_assert(offsetof(ABP_Conformation_Bridge_C, UberGraphFrame) == 0x001B00, "Member 'ABP_Conformation_Bridge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, PS_RepairConformationBridges) == 0x001B08, "Member 'ABP_Conformation_Bridge_C::PS_RepairConformationBridges' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, PS_DestroyConformationBridges) == 0x001B10, "Member 'ABP_Conformation_Bridge_C::PS_DestroyConformationBridges' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, Mesh_Deployed) == 0x001B18, "Member 'ABP_Conformation_Bridge_C::Mesh_Deployed' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, Mesh_Broken) == 0x001B20, "Member 'ABP_Conformation_Bridge_C::Mesh_Broken' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, DeployDuration) == 0x001B28, "Member 'ABP_Conformation_Bridge_C::DeployDuration' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, DeployingVehicle) == 0x001B30, "Member 'ABP_Conformation_Bridge_C::DeployingVehicle' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, ActivatorLocation2) == 0x001B38, "Member 'ABP_Conformation_Bridge_C::ActivatorLocation2' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, ActivatorLocation) == 0x001B50, "Member 'ABP_Conformation_Bridge_C::ActivatorLocation' has a wrong offset!");
static_assert(offsetof(ABP_Conformation_Bridge_C, In_State) == 0x001B68, "Member 'ABP_Conformation_Bridge_C::In_State' has a wrong offset!");

}

