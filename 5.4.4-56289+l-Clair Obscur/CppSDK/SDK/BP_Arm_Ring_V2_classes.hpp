﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Arm_Ring_V2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Arm_Ring_V2.BP_Arm_Ring_V2_C
// 0x00B8 (0x0348 - 0x0290)
class ABP_Arm_Ring_V2_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Fx;                                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Shard_ArmRing2;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Shard_ArmRing1;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Shard_ArmRing;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ColorChange_Alpha_01BEE889490F163290F792A3A9480299; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ColorChange__Direction_01BEE889490F163290F792A3A9480299; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ColorChange;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Active_Alpha_3563992B48317360C10B1298314EEB92;     // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Active__Direction_3563992B48317360C10B1298314EEB92; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Active;                                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Activated;                                         // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enviro;                                            // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enemy;                                             // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TP;                                                // 0x02E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PreviousColor;                                     // 0x02E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               GlobalRotation;                                    // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           LiveColor;                                         // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Shard_ArmRing_C*                    As_BP_Shard_Arm_Ring;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_Shard_ArmRing_C*                    As_BP_Shard_Arm_Ring_1;                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_Shard_ArmRing_C*                    As_BP_Shard_Arm_Ring_2;                            // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void Activate();
	void Active__FinishedFunc();
	void Active__UpdateFunc();
	void ArmRing_Enemy(bool HittingTarget);
	void ArmRing_Enviro(bool HittingTarget);
	void ArmRing_TP(bool HittingTarget);
	void ColorChange__FinishedFunc();
	void ColorChange__UpdateFunc();
	void Deactivate();
	void ExecuteUbergraph_BP_Arm_Ring_V2(int32 EntryPoint);
	void FlashOnShard(class AActor* Shard);
	void GlowOnShot();
	void ReceiveBeginPlay();
	void Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Arm_Ring_V2_C">();
	}
	static class ABP_Arm_Ring_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Arm_Ring_V2_C>();
	}
};
static_assert(alignof(ABP_Arm_Ring_V2_C) == 0x000008, "Wrong alignment on ABP_Arm_Ring_V2_C");
static_assert(sizeof(ABP_Arm_Ring_V2_C) == 0x000348, "Wrong size on ABP_Arm_Ring_V2_C");
static_assert(offsetof(ABP_Arm_Ring_V2_C, UberGraphFrame) == 0x000290, "Member 'ABP_Arm_Ring_V2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Fx) == 0x000298, "Member 'ABP_Arm_Ring_V2_C::Fx' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, BP_Shard_ArmRing2) == 0x0002A0, "Member 'ABP_Arm_Ring_V2_C::BP_Shard_ArmRing2' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, BP_Shard_ArmRing1) == 0x0002A8, "Member 'ABP_Arm_Ring_V2_C::BP_Shard_ArmRing1' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, BP_Shard_ArmRing) == 0x0002B0, "Member 'ABP_Arm_Ring_V2_C::BP_Shard_ArmRing' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_Arm_Ring_V2_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, ColorChange_Alpha_01BEE889490F163290F792A3A9480299) == 0x0002C0, "Member 'ABP_Arm_Ring_V2_C::ColorChange_Alpha_01BEE889490F163290F792A3A9480299' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, ColorChange__Direction_01BEE889490F163290F792A3A9480299) == 0x0002C4, "Member 'ABP_Arm_Ring_V2_C::ColorChange__Direction_01BEE889490F163290F792A3A9480299' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, ColorChange) == 0x0002C8, "Member 'ABP_Arm_Ring_V2_C::ColorChange' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Active_Alpha_3563992B48317360C10B1298314EEB92) == 0x0002D0, "Member 'ABP_Arm_Ring_V2_C::Active_Alpha_3563992B48317360C10B1298314EEB92' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Active__Direction_3563992B48317360C10B1298314EEB92) == 0x0002D4, "Member 'ABP_Arm_Ring_V2_C::Active__Direction_3563992B48317360C10B1298314EEB92' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Active) == 0x0002D8, "Member 'ABP_Arm_Ring_V2_C::Active' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Activated) == 0x0002E0, "Member 'ABP_Arm_Ring_V2_C::Activated' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Enviro) == 0x0002E1, "Member 'ABP_Arm_Ring_V2_C::Enviro' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Enemy) == 0x0002E2, "Member 'ABP_Arm_Ring_V2_C::Enemy' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, TP) == 0x0002E3, "Member 'ABP_Arm_Ring_V2_C::TP' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, PreviousColor) == 0x0002E4, "Member 'ABP_Arm_Ring_V2_C::PreviousColor' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, Color) == 0x0002F4, "Member 'ABP_Arm_Ring_V2_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, GlobalRotation) == 0x000308, "Member 'ABP_Arm_Ring_V2_C::GlobalRotation' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, LiveColor) == 0x000320, "Member 'ABP_Arm_Ring_V2_C::LiveColor' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, As_BP_Shard_Arm_Ring) == 0x000330, "Member 'ABP_Arm_Ring_V2_C::As_BP_Shard_Arm_Ring' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, As_BP_Shard_Arm_Ring_1) == 0x000338, "Member 'ABP_Arm_Ring_V2_C::As_BP_Shard_Arm_Ring_1' has a wrong offset!");
static_assert(offsetof(ABP_Arm_Ring_V2_C, As_BP_Shard_Arm_Ring_2) == 0x000340, "Member 'ABP_Arm_Ring_V2_C::As_BP_Shard_Arm_Ring_2' has a wrong offset!");

}

