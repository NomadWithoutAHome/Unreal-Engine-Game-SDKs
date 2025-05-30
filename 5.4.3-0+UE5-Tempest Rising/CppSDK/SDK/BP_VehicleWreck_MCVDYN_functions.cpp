﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleWreck_MCVDYN

#include "Basic.hpp"

#include "BP_VehicleWreck_MCVDYN_classes.hpp"
#include "BP_VehicleWreck_MCVDYN_parameters.hpp"


namespace SDK
{

// Function BP_VehicleWreck_MCVDYN.BP_VehicleWreck_MCVDYN_C.BndEvt__BP_VehicleWreck_MCVDYN_SM_WreckDYNMCV_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_VehicleWreck_MCVDYN_C::BndEvt__BP_VehicleWreck_MCVDYN_SM_WreckDYNMCV_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_MCVDYN_C", "BndEvt__BP_VehicleWreck_MCVDYN_SM_WreckDYNMCV_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_VehicleWreck_MCVDYN_C_BndEvt__BP_VehicleWreck_MCVDYN_SM_WreckDYNMCV_02_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_MCVDYN.BP_VehicleWreck_MCVDYN_C.BndEvt__BP_VehicleWreck_MediumTank_Mesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_VehicleWreck_MCVDYN_C::BndEvt__BP_VehicleWreck_MediumTank_Mesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_MCVDYN_C", "BndEvt__BP_VehicleWreck_MediumTank_Mesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");

	Params::BP_VehicleWreck_MCVDYN_C_BndEvt__BP_VehicleWreck_MediumTank_Mesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_MCVDYN.BP_VehicleWreck_MCVDYN_C.ExecuteUbergraph_BP_VehicleWreck_MCVDYN
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleWreck_MCVDYN_C::ExecuteUbergraph_BP_VehicleWreck_MCVDYN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_MCVDYN_C", "ExecuteUbergraph_BP_VehicleWreck_MCVDYN");

	Params::BP_VehicleWreck_MCVDYN_C_ExecuteUbergraph_BP_VehicleWreck_MCVDYN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VehicleWreck_MCVDYN.BP_VehicleWreck_MCVDYN_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleWreck_MCVDYN_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_MCVDYN_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VehicleWreck_MCVDYN.BP_VehicleWreck_MCVDYN_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleWreck_MCVDYN_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VehicleWreck_MCVDYN_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

