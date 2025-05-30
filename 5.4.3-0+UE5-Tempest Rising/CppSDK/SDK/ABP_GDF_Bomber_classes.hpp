﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_GDF_Bomber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_GDF_Bomber_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_GDF_Bomber.ABP_GDF_Bomber_C
// 0x03F0 (0x07C0 - 0x03D0)
class UABP_GDF_Bomber_C final : public UTedAnimInstance_Vehicle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_GDF_Bomber::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;               // 0x03D8(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03E0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03E8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03F0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0410(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0438(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_2;                      // 0x0460(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0470(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0490(0x0048)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x04D8(0x00C8)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x05A0(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x05B0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x05D0(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0698(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x06E0(0x0010)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x06F0(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ABP_GDF_Bomber(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_GDF_Bomber_C">();
	}
	static class UABP_GDF_Bomber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_GDF_Bomber_C>();
	}
};
static_assert(alignof(UABP_GDF_Bomber_C) == 0x000010, "Wrong alignment on UABP_GDF_Bomber_C");
static_assert(sizeof(UABP_GDF_Bomber_C) == 0x0007C0, "Wrong size on UABP_GDF_Bomber_C");
static_assert(offsetof(UABP_GDF_Bomber_C, UberGraphFrame) == 0x0003D0, "Member 'UABP_GDF_Bomber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, __AnimBlueprintMutables) == 0x0003D8, "Member 'UABP_GDF_Bomber_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimBlueprintExtension_PropertyAccess) == 0x0003E0, "Member 'UABP_GDF_Bomber_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimBlueprintExtension_Base) == 0x0003E8, "Member 'UABP_GDF_Bomber_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_Root) == 0x0003F0, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_TransitionResult_1) == 0x000410, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_TransitionResult) == 0x000438, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_LocalRefPose_2) == 0x000460, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_LocalRefPose_2' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_StateResult_1) == 0x000470, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_SequencePlayer) == 0x000490, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_TwoWayBlend) == 0x0004D8, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_LocalRefPose_1) == 0x0005A0, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_StateResult) == 0x0005B0, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_StateMachine) == 0x0005D0, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_Slot) == 0x000698, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_LocalRefPose) == 0x0006E0, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_GDF_Bomber_C, AnimGraphNode_ApplyAdditive) == 0x0006F0, "Member 'UABP_GDF_Bomber_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");

}

