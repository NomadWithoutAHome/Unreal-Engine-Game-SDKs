﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vehicle_MobileBridgeVehicle

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vehicle_MobileBridgeVehicle.BP_Vehicle_MobileBridgeVehicle_C
// 0x0030 (0x1CF0 - 0x1CC0)
class ABP_Vehicle_MobileBridgeVehicle_C final : public ATedVehicle
{
public:
	class UStaticMeshComponent*                   SM_Barrel1;                                        // 0x1CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Barrel;                                         // 0x1CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Track2;                                         // 0x1CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Track1;                                         // 0x1CD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Turret;                                         // 0x1CE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Body;                                           // 0x1CE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vehicle_MobileBridgeVehicle_C">();
	}
	static class ABP_Vehicle_MobileBridgeVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vehicle_MobileBridgeVehicle_C>();
	}
};
static_assert(alignof(ABP_Vehicle_MobileBridgeVehicle_C) == 0x000010, "Wrong alignment on ABP_Vehicle_MobileBridgeVehicle_C");
static_assert(sizeof(ABP_Vehicle_MobileBridgeVehicle_C) == 0x001CF0, "Wrong size on ABP_Vehicle_MobileBridgeVehicle_C");
static_assert(offsetof(ABP_Vehicle_MobileBridgeVehicle_C, SM_Barrel1) == 0x001CC0, "Member 'ABP_Vehicle_MobileBridgeVehicle_C::SM_Barrel1' has a wrong offset!");
static_assert(offsetof(ABP_Vehicle_MobileBridgeVehicle_C, SM_Barrel) == 0x001CC8, "Member 'ABP_Vehicle_MobileBridgeVehicle_C::SM_Barrel' has a wrong offset!");
static_assert(offsetof(ABP_Vehicle_MobileBridgeVehicle_C, SM_Track2) == 0x001CD0, "Member 'ABP_Vehicle_MobileBridgeVehicle_C::SM_Track2' has a wrong offset!");
static_assert(offsetof(ABP_Vehicle_MobileBridgeVehicle_C, SM_Track1) == 0x001CD8, "Member 'ABP_Vehicle_MobileBridgeVehicle_C::SM_Track1' has a wrong offset!");
static_assert(offsetof(ABP_Vehicle_MobileBridgeVehicle_C, SM_Turret) == 0x001CE0, "Member 'ABP_Vehicle_MobileBridgeVehicle_C::SM_Turret' has a wrong offset!");
static_assert(offsetof(ABP_Vehicle_MobileBridgeVehicle_C, SM_Body) == 0x001CE8, "Member 'ABP_Vehicle_MobileBridgeVehicle_C::SM_Body' has a wrong offset!");

}

