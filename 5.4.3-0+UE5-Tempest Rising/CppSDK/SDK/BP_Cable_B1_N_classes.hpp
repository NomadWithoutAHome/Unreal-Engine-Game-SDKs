﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cable_B1_N

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Cable_B1_N.BP_Cable_B1_N_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_Cable_B1_N_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StaticMesh;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESplineMeshAxis                               ForwardAxis;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Cable_B1_N_C">();
	}
	static class ABP_Cable_B1_N_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cable_B1_N_C>();
	}
};
static_assert(alignof(ABP_Cable_B1_N_C) == 0x000008, "Wrong alignment on ABP_Cable_B1_N_C");
static_assert(sizeof(ABP_Cable_B1_N_C) == 0x0002B0, "Wrong size on ABP_Cable_B1_N_C");
static_assert(offsetof(ABP_Cable_B1_N_C, Spline) == 0x000290, "Member 'ABP_Cable_B1_N_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_Cable_B1_N_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_Cable_B1_N_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Cable_B1_N_C, StaticMesh) == 0x0002A0, "Member 'ABP_Cable_B1_N_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Cable_B1_N_C, ForwardAxis) == 0x0002A8, "Member 'ABP_Cable_B1_N_C::ForwardAxis' has a wrong offset!");

}

