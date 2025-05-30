﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_VH_GDF_RiotVan

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_VH_GDF_RiotVan_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_VH_GDF_RiotVan.ABP_VH_GDF_RiotVan_C
// 0x0A20 (0x0DF0 - 0x03D0)
class UABP_VH_GDF_RiotVan_C final : public UTedAnimInstance_Vehicle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_VH_GDF_RiotVan::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;           // 0x03D8(0x0010)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03E8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03F0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03F8(0x0020)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0418(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x04E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0508(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0530(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0558(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0580(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x05A8(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_2;                      // 0x05D0(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x05E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0600(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0648(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0668(0x0048)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x06B0(0x00C8)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x0778(0x0010)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0788(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x07A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07F0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0810(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x08D8(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0920(0x0010)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0930(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x09F8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0B20(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C48(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C68(0x0020)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0C88(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0DA0(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_GDF_RiotVan_AnimGraphNode_ModifyBone_CDEA17844CA6065CB56B44AFDDF24C32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_GDF_RiotVan_AnimGraphNode_ModifyBone_FC5FCB104DEC185CDD2AA49002E7B69C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VH_GDF_RiotVan_AnimGraphNode_SequencePlayer_BF3B69B74676590A5C5282A1C32EDAD7();
	void ExecuteUbergraph_ABP_VH_GDF_RiotVan(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_VH_GDF_RiotVan_C">();
	}
	static class UABP_VH_GDF_RiotVan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_VH_GDF_RiotVan_C>();
	}
};
static_assert(alignof(UABP_VH_GDF_RiotVan_C) == 0x000010, "Wrong alignment on UABP_VH_GDF_RiotVan_C");
static_assert(sizeof(UABP_VH_GDF_RiotVan_C) == 0x000DF0, "Wrong size on UABP_VH_GDF_RiotVan_C");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, UberGraphFrame) == 0x0003D0, "Member 'UABP_VH_GDF_RiotVan_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, __AnimBlueprintMutables) == 0x0003D8, "Member 'UABP_VH_GDF_RiotVan_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimBlueprintExtension_PropertyAccess) == 0x0003E8, "Member 'UABP_VH_GDF_RiotVan_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimBlueprintExtension_Base) == 0x0003F0, "Member 'UABP_VH_GDF_RiotVan_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_Root) == 0x0003F8, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_ApplyAdditive_1) == 0x000418, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TransitionResult_5) == 0x0004E0, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TransitionResult_4) == 0x000508, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TransitionResult_3) == 0x000530, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TransitionResult_2) == 0x000558, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TransitionResult_1) == 0x000580, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TransitionResult) == 0x0005A8, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_LocalRefPose_2) == 0x0005D0, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_LocalRefPose_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_StateResult_3) == 0x0005E0, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_SequencePlayer_3) == 0x000600, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_StateResult_2) == 0x000648, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_SequencePlayer_2) == 0x000668, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_TwoWayBlend) == 0x0006B0, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_LocalRefPose_1) == 0x000778, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_StateResult_1) == 0x000788, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_SequencePlayer_1) == 0x0007A8, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_StateResult) == 0x0007F0, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_StateMachine) == 0x000810, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_Slot) == 0x0008D8, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_LocalRefPose) == 0x000920, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_ApplyAdditive) == 0x000930, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_ModifyBone_1) == 0x0009F8, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_ModifyBone) == 0x000B20, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_ComponentToLocalSpace) == 0x000C48, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_LocalToComponentSpace) == 0x000C68, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000C88, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UABP_VH_GDF_RiotVan_C, AnimGraphNode_SequencePlayer) == 0x000DA0, "Member 'UABP_VH_GDF_RiotVan_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

