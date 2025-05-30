﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pickup_CashCrate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pickup_CashCrate.BP_Pickup_CashCrate_C
// 0x0030 (0x0328 - 0x02F8)
class ABP_Pickup_CashCrate_C final : public ATedPickupActor_Cash
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                             PickedSound;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SetCustomResourceAmount;                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ActorLocationCache;                                // 0x0310(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Pickup_CashCrate(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceivePickedUp(class ATedUnitBase* PikedUpBy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pickup_CashCrate_C">();
	}
	static class ABP_Pickup_CashCrate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pickup_CashCrate_C>();
	}
};
static_assert(alignof(ABP_Pickup_CashCrate_C) == 0x000008, "Wrong alignment on ABP_Pickup_CashCrate_C");
static_assert(sizeof(ABP_Pickup_CashCrate_C) == 0x000328, "Wrong size on ABP_Pickup_CashCrate_C");
static_assert(offsetof(ABP_Pickup_CashCrate_C, UberGraphFrame) == 0x0002F8, "Member 'ABP_Pickup_CashCrate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Pickup_CashCrate_C, PickedSound) == 0x000300, "Member 'ABP_Pickup_CashCrate_C::PickedSound' has a wrong offset!");
static_assert(offsetof(ABP_Pickup_CashCrate_C, SetCustomResourceAmount) == 0x000308, "Member 'ABP_Pickup_CashCrate_C::SetCustomResourceAmount' has a wrong offset!");
static_assert(offsetof(ABP_Pickup_CashCrate_C, ActorLocationCache) == 0x000310, "Member 'ABP_Pickup_CashCrate_C::ActorLocationCache' has a wrong offset!");

}

