﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleWreck_Thunderhead

#include "Basic.hpp"

#include "BP_VehicleWreck_Thunderhead_classes.hpp"
#include "BP_VehicleWreck_Thunderhead_parameters.hpp"


namespace SDK
{

// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit_0                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_VehicleWreck_Thunderhead_C::BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_VehicleWreck_Thunderhead_C_BndEvt__BP_VehicleWreck_Peacekeeper_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit_0 = std::move(Hit_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.Dissolve Main__FinishedFunc
// (BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::Dissolve_Main__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "Dissolve Main__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.Dissolve Main__Treat as Dissolved__EventFunc
// (BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::Dissolve_Main__Treat_as_Dissolved__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "Dissolve Main__Treat as Dissolved__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.Dissolve Main__UpdateFunc
// (BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::Dissolve_Main__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "Dissolve Main__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.Dissolve Parts__FinishedFunc
// (BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::Dissolve_Parts__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "Dissolve Parts__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.Dissolve Parts__UpdateFunc
// (BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::Dissolve_Parts__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "Dissolve Parts__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.ExecuteUbergraph_BP_VehicleWreck_Thunderhead
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_Thunderhead_C::ExecuteUbergraph_BP_VehicleWreck_Thunderhead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "ExecuteUbergraph_BP_VehicleWreck_Thunderhead");

	Params::BP_VehicleWreck_Thunderhead_C_ExecuteUbergraph_BP_VehicleWreck_Thunderhead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.Initial VETI Aircraft Destruction Force
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>&                    Bones_to_Hide_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USkeletalMeshComponent*           Skeletal_Mesh                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*             Static_Mesh__TEMP_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Rotation_Force_Axis_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Rotation_Force_Multiplier_0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>&                           Rotation_Force_Locked_Axis_0                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Forward_Force_Direction_0                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Forward_Force_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>&                           Apply_Forward_Force_to_Parts                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<double>&                         Forward_Force_to_Parts_Multiplier                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UStaticMeshComponent*>&    Parts_Meshes                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// double                                  Parts_Meshes_Dir_Force_Angle                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Parts_Meshes_Dir_Force_Multiplier                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Parts_Meshes_Ang_Force_Multiplier                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_Thunderhead_C::Initial_VETI_Aircraft_Destruction_Force(TArray<class FName>& Bones_to_Hide_0, class USkeletalMeshComponent* Skeletal_Mesh, class FName Bone_Name, class UStaticMeshComponent* Static_Mesh__TEMP_, const struct FVector& Rotation_Force_Axis_0, double Rotation_Force_Multiplier_0, TArray<bool>& Rotation_Force_Locked_Axis_0, const struct FVector& Forward_Force_Direction_0, double Forward_Force_0, TArray<bool>& Apply_Forward_Force_to_Parts, TArray<double>& Forward_Force_to_Parts_Multiplier, TArray<class UStaticMeshComponent*>& Parts_Meshes, double Parts_Meshes_Dir_Force_Angle, double Parts_Meshes_Dir_Force_Multiplier, double Parts_Meshes_Ang_Force_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "Initial VETI Aircraft Destruction Force");

	Params::BP_VehicleWreck_Thunderhead_C_Initial_VETI_Aircraft_Destruction_Force Parms{};

	Parms.Bones_to_Hide_0 = std::move(Bones_to_Hide_0);
	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Bone_Name = Bone_Name;
	Parms.Static_Mesh__TEMP_ = Static_Mesh__TEMP_;
	Parms.Rotation_Force_Axis_0 = std::move(Rotation_Force_Axis_0);
	Parms.Rotation_Force_Multiplier_0 = Rotation_Force_Multiplier_0;
	Parms.Rotation_Force_Locked_Axis_0 = std::move(Rotation_Force_Locked_Axis_0);
	Parms.Forward_Force_Direction_0 = std::move(Forward_Force_Direction_0);
	Parms.Forward_Force_0 = Forward_Force_0;
	Parms.Apply_Forward_Force_to_Parts = std::move(Apply_Forward_Force_to_Parts);
	Parms.Forward_Force_to_Parts_Multiplier = std::move(Forward_Force_to_Parts_Multiplier);
	Parms.Parts_Meshes = std::move(Parts_Meshes);
	Parms.Parts_Meshes_Dir_Force_Angle = Parts_Meshes_Dir_Force_Angle;
	Parms.Parts_Meshes_Dir_Force_Multiplier = Parts_Meshes_Dir_Force_Multiplier;
	Parms.Parts_Meshes_Ang_Force_Multiplier = Parts_Meshes_Ang_Force_Multiplier;

	UObject::ProcessEvent(Func, &Parms);

	Bones_to_Hide_0 = std::move(Parms.Bones_to_Hide_0);
	Rotation_Force_Locked_Axis_0 = std::move(Parms.Rotation_Force_Locked_Axis_0);
	Apply_Forward_Force_to_Parts = std::move(Parms.Apply_Forward_Force_to_Parts);
	Forward_Force_to_Parts_Multiplier = std::move(Parms.Forward_Force_to_Parts_Multiplier);
	Parts_Meshes = std::move(Parms.Parts_Meshes);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_Thunderhead_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "ReceiveTick");

	Params::BP_VehicleWreck_Thunderhead_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_Thunderhead.BP_VehicleWreck_Thunderhead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleWreck_Thunderhead_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_Thunderhead_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

