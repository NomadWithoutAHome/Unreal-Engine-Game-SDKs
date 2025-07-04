﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_Footsteps

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataAsset_Footsteps.BP_DataAsset_Footsteps_C
// 0x0050 (0x0080 - 0x0030)
class UBP_DataAsset_Footsteps_C final : public UPrimaryDataAsset
{
public:
	TMap<EPhysicalSurface, class USoundBase*>     Footsteps;                                         // 0x0030(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataAsset_Footsteps_C">();
	}
	static class UBP_DataAsset_Footsteps_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DataAsset_Footsteps_C>();
	}
};
static_assert(alignof(UBP_DataAsset_Footsteps_C) == 0x000008, "Wrong alignment on UBP_DataAsset_Footsteps_C");
static_assert(sizeof(UBP_DataAsset_Footsteps_C) == 0x000080, "Wrong size on UBP_DataAsset_Footsteps_C");
static_assert(offsetof(UBP_DataAsset_Footsteps_C, Footsteps) == 0x000030, "Member 'UBP_DataAsset_Footsteps_C::Footsteps' has a wrong offset!");

}

