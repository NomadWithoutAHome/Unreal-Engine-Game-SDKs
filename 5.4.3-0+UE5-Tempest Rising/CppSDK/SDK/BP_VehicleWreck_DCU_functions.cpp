﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleWreck_DCU

#include "Basic.hpp"

#include "BP_VehicleWreck_DCU_classes.hpp"
#include "BP_VehicleWreck_DCU_parameters.hpp"


namespace SDK
{

// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit_0                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_VehicleWreck_DCU_C::BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_VehicleWreck_DCU_C_BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit_0 = std::move(Hit_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.ExecuteUbergraph_BP_VehicleWreck_DCU
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_DCU_C::ExecuteUbergraph_BP_VehicleWreck_DCU(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "ExecuteUbergraph_BP_VehicleWreck_DCU");

	Params::BP_VehicleWreck_DCU_C_ExecuteUbergraph_BP_VehicleWreck_DCU Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.Hit Aircraft Ground Flip Force
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Skeletal_Mesh                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Rotation_Axis                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Flip_Force                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Side_Vector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_DCU_C::Hit_Aircraft_Ground_Flip_Force(class USkeletalMeshComponent* Skeletal_Mesh, class FName Bone_Name, const struct FVector& Rotation_Axis, double Flip_Force, const struct FVector& Side_Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "Hit Aircraft Ground Flip Force");

	Params::BP_VehicleWreck_DCU_C_Hit_Aircraft_Ground_Flip_Force Parms{};

	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Bone_Name = Bone_Name;
	Parms.Rotation_Axis = std::move(Rotation_Axis);
	Parms.Flip_Force = Flip_Force;
	Parms.Side_Vector = std::move(Side_Vector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.Initial Aircraft Destruction Force
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Skeletal_Mesh                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*             Static_Mesh__TEMP_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Rotation_Force_Axis_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Rotation_Force_Multiplier_0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>&                           Rotation_Force_Locked_Axis_0                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Forward_Force_Direction_0                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Forward_Force_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_DCU_C::Initial_Aircraft_Destruction_Force(class USkeletalMeshComponent* Skeletal_Mesh, class UStaticMeshComponent* Static_Mesh__TEMP_, class FName Bone_Name, const struct FVector& Rotation_Force_Axis_0, double Rotation_Force_Multiplier_0, TArray<bool>& Rotation_Force_Locked_Axis_0, const struct FVector& Forward_Force_Direction_0, double Forward_Force_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "Initial Aircraft Destruction Force");

	Params::BP_VehicleWreck_DCU_C_Initial_Aircraft_Destruction_Force Parms{};

	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Static_Mesh__TEMP_ = Static_Mesh__TEMP_;
	Parms.Bone_Name = Bone_Name;
	Parms.Rotation_Force_Axis_0 = std::move(Rotation_Force_Axis_0);
	Parms.Rotation_Force_Multiplier_0 = Rotation_Force_Multiplier_0;
	Parms.Rotation_Force_Locked_Axis_0 = std::move(Rotation_Force_Locked_Axis_0);
	Parms.Forward_Force_Direction_0 = std::move(Forward_Force_Direction_0);
	Parms.Forward_Force_0 = Forward_Force_0;

	UObject::ProcessEvent(Func, &Parms);

	Rotation_Force_Locked_Axis_0 = std::move(Parms.Rotation_Force_Locked_Axis_0);
}


// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleWreck_DCU_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_DCU_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "ReceiveTick");

	Params::BP_VehicleWreck_DCU_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_DCU.BP_VehicleWreck_DCU_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleWreck_DCU_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_DCU_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

