﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_GDF_DroneMauler_Drone

#include "Basic.hpp"

#include "ABP_VH_GDF_DroneMauler_Drone_classes.hpp"
#include "ABP_VH_GDF_DroneMauler_Drone_parameters.hpp"


namespace SDK
{

// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_VH_GDF_DroneMauler_Drone_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "AnimGraph");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_VH_GDF_DroneMauler_Drone_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.ExecuteUbergraph_ABP_VH_GDF_DroneMauler_Drone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::ExecuteUbergraph_ABP_VH_GDF_DroneMauler_Drone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "ExecuteUbergraph_ABP_VH_GDF_DroneMauler_Drone");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_ExecuteUbergraph_ABP_VH_GDF_DroneMauler_Drone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.HitReaction
// (BlueprintCallable, BlueprintEvent)

void UABP_VH_GDF_DroneMauler_Drone_C::HitReaction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "HitReaction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnBlendOut_62DDE38F49DFBE3266A935950CF5F169
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnBlendOut_62DDE38F49DFBE3266A935950CF5F169(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnBlendOut_62DDE38F49DFBE3266A935950CF5F169");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnBlendOut_62DDE38F49DFBE3266A935950CF5F169 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnBlendOut_BFF543014E656ED6ED923EBD6AED9BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnBlendOut_BFF543014E656ED6ED923EBD6AED9BAB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnBlendOut_BFF543014E656ED6ED923EBD6AED9BAB");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnBlendOut_BFF543014E656ED6ED923EBD6AED9BAB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnCompleted_62DDE38F49DFBE3266A935950CF5F169
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnCompleted_62DDE38F49DFBE3266A935950CF5F169(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnCompleted_62DDE38F49DFBE3266A935950CF5F169");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnCompleted_62DDE38F49DFBE3266A935950CF5F169 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnCompleted_BFF543014E656ED6ED923EBD6AED9BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnCompleted_BFF543014E656ED6ED923EBD6AED9BAB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnCompleted_BFF543014E656ED6ED923EBD6AED9BAB");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnCompleted_BFF543014E656ED6ED923EBD6AED9BAB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnInterrupted_62DDE38F49DFBE3266A935950CF5F169
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnInterrupted_62DDE38F49DFBE3266A935950CF5F169(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnInterrupted_62DDE38F49DFBE3266A935950CF5F169");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnInterrupted_62DDE38F49DFBE3266A935950CF5F169 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnInterrupted_BFF543014E656ED6ED923EBD6AED9BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnInterrupted_BFF543014E656ED6ED923EBD6AED9BAB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnInterrupted_BFF543014E656ED6ED923EBD6AED9BAB");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnInterrupted_BFF543014E656ED6ED923EBD6AED9BAB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnNotifyBegin_62DDE38F49DFBE3266A935950CF5F169
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnNotifyBegin_62DDE38F49DFBE3266A935950CF5F169(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnNotifyBegin_62DDE38F49DFBE3266A935950CF5F169");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnNotifyBegin_62DDE38F49DFBE3266A935950CF5F169 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnNotifyBegin_BFF543014E656ED6ED923EBD6AED9BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnNotifyBegin_BFF543014E656ED6ED923EBD6AED9BAB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnNotifyBegin_BFF543014E656ED6ED923EBD6AED9BAB");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnNotifyBegin_BFF543014E656ED6ED923EBD6AED9BAB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnNotifyEnd_62DDE38F49DFBE3266A935950CF5F169
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnNotifyEnd_62DDE38F49DFBE3266A935950CF5F169(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnNotifyEnd_62DDE38F49DFBE3266A935950CF5F169");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnNotifyEnd_62DDE38F49DFBE3266A935950CF5F169 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnNotifyEnd_BFF543014E656ED6ED923EBD6AED9BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnNotifyEnd_BFF543014E656ED6ED923EBD6AED9BAB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnNotifyEnd_BFF543014E656ED6ED923EBD6AED9BAB");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnNotifyEnd_BFF543014E656ED6ED923EBD6AED9BAB Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UDamageType*                DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_VH_GDF_DroneMauler_Drone_C::OnTakeDamage(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "OnTakeDamage");

	Params::ABP_VH_GDF_DroneMauler_Drone_C_OnTakeDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_VH_GDF_DroneMauler_Drone.ABP_VH_GDF_DroneMauler_Drone_C.TestFire
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UABP_VH_GDF_DroneMauler_Drone_C::TestFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_VH_GDF_DroneMauler_Drone_C", "TestFire");

	UObject::ProcessEvent(Func, nullptr);
}

}

