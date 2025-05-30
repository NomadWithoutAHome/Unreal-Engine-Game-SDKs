﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BD_DYN_Barracks

#include "Basic.hpp"

#include "BP_BD_DYN_Barracks_classes.hpp"
#include "BP_BD_DYN_Barracks_parameters.hpp"


namespace SDK
{

// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.BndEvt__BP_BD_DYN_Barracks_TedRangeDecal_K2Node_ComponentBoundEvent_2_RangeDecalDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::BndEvt__BP_BD_DYN_Barracks_TedRangeDecal_K2Node_ComponentBoundEvent_2_RangeDecalDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "BndEvt__BP_BD_DYN_Barracks_TedRangeDecal_K2Node_ComponentBoundEvent_2_RangeDecalDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.BndEvt__BP_BD_DYN_SamSite_TedRangeDecal_K2Node_ComponentBoundEvent_0_OnRangeDisplayed__DelegateSignature
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::BndEvt__BP_BD_DYN_SamSite_TedRangeDecal_K2Node_ComponentBoundEvent_0_OnRangeDisplayed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "BndEvt__BP_BD_DYN_SamSite_TedRangeDecal_K2Node_ComponentBoundEvent_0_OnRangeDisplayed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.Destructible
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMesh*>&             DestMeshes                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>&                 DestMeshes_Locations                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FRotator>&                DestMeshes_Rotators                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   MeshScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemAsset*>&          DestMeshes_exploFX                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<double>&                         DestMeshes_exploFX_Scale                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UFXSystemAsset*>&          DestMeshes_attachedFX                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<double>&                         DestMeshes_attachedFX_Scale                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>&                 DestMeshes_LinearImpulse                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>&                 DestMeshes_AngularImpulse                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AStaticMeshActor*>*        SpawnedMeshesArray                                     (Parm, OutParm)
// TArray<class UFXSystemComponent*>*      SpawnedAttachedFXArray                                 (Parm, OutParm, ContainsInstancedReference)

void ABP_BD_DYN_Barracks_C::Destructible(TArray<class UStaticMesh*>& DestMeshes, TArray<struct FVector>& DestMeshes_Locations, TArray<struct FRotator>& DestMeshes_Rotators, const struct FVector& MeshScale, TArray<class UFXSystemAsset*>& DestMeshes_exploFX, TArray<double>& DestMeshes_exploFX_Scale, TArray<class UFXSystemAsset*>& DestMeshes_attachedFX, TArray<double>& DestMeshes_attachedFX_Scale, TArray<struct FVector>& DestMeshes_LinearImpulse, TArray<struct FVector>& DestMeshes_AngularImpulse, TArray<class AStaticMeshActor*>* SpawnedMeshesArray, TArray<class UFXSystemComponent*>* SpawnedAttachedFXArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "Destructible");

	Params::BP_BD_DYN_Barracks_C_Destructible Parms{};

	Parms.DestMeshes = std::move(DestMeshes);
	Parms.DestMeshes_Locations = std::move(DestMeshes_Locations);
	Parms.DestMeshes_Rotators = std::move(DestMeshes_Rotators);
	Parms.MeshScale = std::move(MeshScale);
	Parms.DestMeshes_exploFX = std::move(DestMeshes_exploFX);
	Parms.DestMeshes_exploFX_Scale = std::move(DestMeshes_exploFX_Scale);
	Parms.DestMeshes_attachedFX = std::move(DestMeshes_attachedFX);
	Parms.DestMeshes_attachedFX_Scale = std::move(DestMeshes_attachedFX_Scale);
	Parms.DestMeshes_LinearImpulse = std::move(DestMeshes_LinearImpulse);
	Parms.DestMeshes_AngularImpulse = std::move(DestMeshes_AngularImpulse);

	UObject::ProcessEvent(Func, &Parms);

	DestMeshes = std::move(Parms.DestMeshes);
	DestMeshes_Locations = std::move(Parms.DestMeshes_Locations);
	DestMeshes_Rotators = std::move(Parms.DestMeshes_Rotators);
	DestMeshes_exploFX = std::move(Parms.DestMeshes_exploFX);
	DestMeshes_exploFX_Scale = std::move(Parms.DestMeshes_exploFX_Scale);
	DestMeshes_attachedFX = std::move(Parms.DestMeshes_attachedFX);
	DestMeshes_attachedFX_Scale = std::move(Parms.DestMeshes_attachedFX_Scale);
	DestMeshes_LinearImpulse = std::move(Parms.DestMeshes_LinearImpulse);
	DestMeshes_AngularImpulse = std::move(Parms.DestMeshes_AngularImpulse);

	if (SpawnedMeshesArray != nullptr)
		*SpawnedMeshesArray = std::move(Parms.SpawnedMeshesArray);

	if (SpawnedAttachedFXArray != nullptr)
		*SpawnedAttachedFXArray = std::move(Parms.SpawnedAttachedFXArray);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.Destructible Barracks Custom Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Skeletal_Mesh                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMesh*>*             DestMeshes                                             (Parm, OutParm)
// TArray<struct FVector>*                 DestMeshes_Locations                                   (Parm, OutParm)
// TArray<struct FRotator>*                DestMeshes_Rotators                                    (Parm, OutParm)
// struct FVector*                         MeshScale                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemAsset*>*          DestMeshes_FX                                          (Parm, OutParm)
// TArray<double>*                         DestMeshes_FX_Scale                                    (Parm, OutParm)
// TArray<class UFXSystemAsset*>*          DestMeshes_FXattached                                  (Parm, OutParm)
// TArray<double>*                         DestMeshes_FXattached_Scale                            (Parm, OutParm)
// TArray<struct FVector>*                 DestMeshes_LinearImpulse                               (Parm, OutParm)
// TArray<struct FVector>*                 DestMeshes_AngularImpulse                              (Parm, OutParm)

void ABP_BD_DYN_Barracks_C::Destructible_Barracks_Custom_Setup(class USkeletalMeshComponent* Skeletal_Mesh, TArray<class UStaticMesh*>* DestMeshes, TArray<struct FVector>* DestMeshes_Locations, TArray<struct FRotator>* DestMeshes_Rotators, struct FVector* MeshScale, TArray<class UFXSystemAsset*>* DestMeshes_FX, TArray<double>* DestMeshes_FX_Scale, TArray<class UFXSystemAsset*>* DestMeshes_FXattached, TArray<double>* DestMeshes_FXattached_Scale, TArray<struct FVector>* DestMeshes_LinearImpulse, TArray<struct FVector>* DestMeshes_AngularImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "Destructible Barracks Custom Setup");

	Params::BP_BD_DYN_Barracks_C_Destructible_Barracks_Custom_Setup Parms{};

	Parms.Skeletal_Mesh = Skeletal_Mesh;

	UObject::ProcessEvent(Func, &Parms);

	if (DestMeshes != nullptr)
		*DestMeshes = std::move(Parms.DestMeshes);

	if (DestMeshes_Locations != nullptr)
		*DestMeshes_Locations = std::move(Parms.DestMeshes_Locations);

	if (DestMeshes_Rotators != nullptr)
		*DestMeshes_Rotators = std::move(Parms.DestMeshes_Rotators);

	if (MeshScale != nullptr)
		*MeshScale = std::move(Parms.MeshScale);

	if (DestMeshes_FX != nullptr)
		*DestMeshes_FX = std::move(Parms.DestMeshes_FX);

	if (DestMeshes_FX_Scale != nullptr)
		*DestMeshes_FX_Scale = std::move(Parms.DestMeshes_FX_Scale);

	if (DestMeshes_FXattached != nullptr)
		*DestMeshes_FXattached = std::move(Parms.DestMeshes_FXattached);

	if (DestMeshes_FXattached_Scale != nullptr)
		*DestMeshes_FXattached_Scale = std::move(Parms.DestMeshes_FXattached_Scale);

	if (DestMeshes_LinearImpulse != nullptr)
		*DestMeshes_LinearImpulse = std::move(Parms.DestMeshes_LinearImpulse);

	if (DestMeshes_AngularImpulse != nullptr)
		*DestMeshes_AngularImpulse = std::move(Parms.DestMeshes_AngularImpulse);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ExecuteUbergraph_BP_BD_DYN_Barracks
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::ExecuteUbergraph_BP_BD_DYN_Barracks(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ExecuteUbergraph_BP_BD_DYN_Barracks");

	Params::BP_BD_DYN_Barracks_C_ExecuteUbergraph_BP_BD_DYN_Barracks Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.Found Free Explosion Slot
// (BlueprintCallable, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::Found_Free_Explosion_Slot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "Found Free Explosion Slot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.K2_OnEndSellingStructure
// (Event, Public, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::K2_OnEndSellingStructure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "K2_OnEndSellingStructure");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.OnSelectionChanged_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bIsSelected                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const bool                              bIsHovered                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::OnSelectionChanged_Blueprint(const bool bIsSelected, const bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "OnSelectionChanged_Blueprint");

	Params::BP_BD_DYN_Barracks_C_OnSelectionChanged_Blueprint Parms{};

	Parms.bIsSelected = bIsSelected;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.OnUpgradeActivated
// (BlueprintCallable, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::OnUpgradeActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "OnUpgradeActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ReceiveHandleConstructionVisuals
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bInConstructing                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::ReceiveHandleConstructionVisuals(const bool bInConstructing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ReceiveHandleConstructionVisuals");

	Params::BP_BD_DYN_Barracks_C_ReceiveHandleConstructionVisuals Parms{};

	Parms.bInConstructing = bInConstructing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ReceiveHandlePowerStateVisuals
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bBlackedOut                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const bool                              bUserPowered                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const bool                              bSufficientPower                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::ReceiveHandlePowerStateVisuals(const bool bBlackedOut, const bool bUserPowered, const bool bSufficientPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ReceiveHandlePowerStateVisuals");

	Params::BP_BD_DYN_Barracks_C_ReceiveHandlePowerStateVisuals Parms{};

	Parms.bBlackedOut = bBlackedOut;
	Parms.bUserPowered = bUserPowered;
	Parms.bSufficientPower = bSufficientPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ReceiveOnDeath
// (Event, Protected, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::ReceiveOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ReceiveOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ReceiveUpdateHealthEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HealthPct                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::ReceiveUpdateHealthEffects(float HealthPct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ReceiveUpdateHealthEffects");

	Params::BP_BD_DYN_Barracks_C_ReceiveUpdateHealthEffects Parms{};

	Parms.HealthPct = HealthPct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.ReceiveUpgradeActivated
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const ETedPawnUpgradeType               UpgradeType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::ReceiveUpgradeActivated(const ETedPawnUpgradeType UpgradeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "ReceiveUpgradeActivated");

	Params::BP_BD_DYN_Barracks_C_ReceiveUpgradeActivated Parms{};

	Parms.UpgradeType = UpgradeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.SetEnabled_HealingVfx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::SetEnabled_HealingVfx(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "SetEnabled_HealingVfx");

	Params::BP_BD_DYN_Barracks_C_SetEnabled_HealingVfx Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_DeactivateAndDestroy__Deactivate FX__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_DeactivateAndDestroy__Deactivate_FX__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_DeactivateAndDestroy__Deactivate FX__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_DeactivateAndDestroy__FinishedFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_DeactivateAndDestroy__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_DeactivateAndDestroy__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_DeactivateAndDestroy__UpdateFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_DeactivateAndDestroy__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_DeactivateAndDestroy__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_Explosion__FinishedFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_Explosion__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_Explosion__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_Explosion__UpdateFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_Explosion__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_Explosion__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_OnDeath__Explosion__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_OnDeath__Explosion__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_OnDeath__Explosion__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_OnDeath__ExplosionAudio__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_OnDeath__ExplosionAudio__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_OnDeath__ExplosionAudio__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_OnDeath__FinishedFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_OnDeath__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_OnDeath__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_OnDeath__SpawnChunks__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_OnDeath__SpawnChunks__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_OnDeath__SpawnChunks__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_OnDeath__SpawnDecal__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_OnDeath__SpawnDecal__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_OnDeath__SpawnDecal__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_OnDeath__UpdateFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_OnDeath__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_OnDeath__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__FifthStep__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__FifthStep__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__FifthStep__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__FinishedFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__FirstStep__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__FirstStep__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__FirstStep__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__FourthStep__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__FourthStep__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__FourthStep__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__SecondStep__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__SecondStep__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__SecondStep__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__ThirdStep__EventFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__ThirdStep__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__ThirdStep__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.TL_SwitchVisuals__UpdateFunc
// (BlueprintEvent)

void ABP_BD_DYN_Barracks_C::TL_SwitchVisuals__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "TL_SwitchVisuals__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.UpdateHealingActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BD_DYN_Barracks_C::UpdateHealingActivation(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "UpdateHealingActivation");

	Params::BP_BD_DYN_Barracks_C_UpdateHealingActivation Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.UpdateRangeDecal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::UpdateRangeDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "UpdateRangeDecal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BD_DYN_Barracks.BP_BD_DYN_Barracks_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BD_DYN_Barracks_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BD_DYN_Barracks_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

