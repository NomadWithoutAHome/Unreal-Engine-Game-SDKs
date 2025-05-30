﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_DYN_TempestRig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_VH_DYN_TempestRig_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_VH_DYN_TempestRig.ABP_VH_DYN_TempestRig_C
// 0x0670 (0x0A40 - 0x03D0)
class UABP_VH_DYN_TempestRig_C final : public UTedAnimInstance_Vehicle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_VH_DYN_TempestRig::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;        // 0x03D8(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03E0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03E8(0x0008)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x03F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0418(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0440(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0468(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0490(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x04B8(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_2;                      // 0x04E0(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x04F0(0x0020)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0510(0x00C8)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x05D8(0x0010)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x05E8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0630(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0650(0x0048)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0698(0x00C8)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0760(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0770(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0790(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07D8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x07F8(0x00C8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x08C0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0988(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x09D0(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0A18(0x0020)()
	bool                                          bDeployed;                                         // 0x0A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_VH_DYN_TempestRig(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_VH_DYN_TempestRig_C">();
	}
	static class UABP_VH_DYN_TempestRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_VH_DYN_TempestRig_C>();
	}
};
static_assert(alignof(UABP_VH_DYN_TempestRig_C) == 0x000010, "Wrong alignment on UABP_VH_DYN_TempestRig_C");
static_assert(sizeof(UABP_VH_DYN_TempestRig_C) == 0x000A40, "Wrong size on UABP_VH_DYN_TempestRig_C");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, UberGraphFrame) == 0x0003D0, "Member 'UABP_VH_DYN_TempestRig_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, __AnimBlueprintMutables) == 0x0003D8, "Member 'UABP_VH_DYN_TempestRig_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimBlueprintExtension_PropertyAccess) == 0x0003E0, "Member 'UABP_VH_DYN_TempestRig_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimBlueprintExtension_Base) == 0x0003E8, "Member 'UABP_VH_DYN_TempestRig_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TransitionResult_5) == 0x0003F0, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TransitionResult_4) == 0x000418, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TransitionResult_3) == 0x000440, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TransitionResult_2) == 0x000468, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TransitionResult_1) == 0x000490, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TransitionResult) == 0x0004B8, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_LocalRefPose_2) == 0x0004E0, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_LocalRefPose_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_StateResult_3) == 0x0004F0, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_ApplyAdditive_1) == 0x000510, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_LocalRefPose_1) == 0x0005D8, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_SequencePlayer_3) == 0x0005E8, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_StateResult_2) == 0x000630, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_SequencePlayer_2) == 0x000650, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_TwoWayBlend) == 0x000698, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_LocalRefPose) == 0x000760, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_StateResult_1) == 0x000770, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_SequencePlayer_1) == 0x000790, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_StateResult) == 0x0007D8, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_StateMachine) == 0x0007F8, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_ApplyAdditive) == 0x0008C0, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_SequencePlayer) == 0x000988, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_Slot) == 0x0009D0, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, AnimGraphNode_Root) == 0x000A18, "Member 'UABP_VH_DYN_TempestRig_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_VH_DYN_TempestRig_C, bDeployed) == 0x000A38, "Member 'UABP_VH_DYN_TempestRig_C::bDeployed' has a wrong offset!");

}

