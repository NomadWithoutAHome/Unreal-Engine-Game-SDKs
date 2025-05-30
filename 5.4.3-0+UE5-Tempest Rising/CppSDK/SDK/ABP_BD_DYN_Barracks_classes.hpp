﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_DYN_Barracks

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_BD_DYN_Barracks_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Tempest_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_BD_DYN_Barracks.ABP_BD_DYN_Barracks_C
// 0x0270 (0x06A0 - 0x0430)
class UABP_BD_DYN_Barracks_C final : public UTedAnimInstance_Structure
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_BD_DYN_Barracks::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;          // 0x0438(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_43A[0x6];                                      // 0x043A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0440(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0448(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0450(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0470(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x04B8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0500(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0548(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0610(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0658(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ABP_BD_DYN_Barracks(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_BD_DYN_Barracks_C">();
	}
	static class UABP_BD_DYN_Barracks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_BD_DYN_Barracks_C>();
	}
};
static_assert(alignof(UABP_BD_DYN_Barracks_C) == 0x000010, "Wrong alignment on UABP_BD_DYN_Barracks_C");
static_assert(sizeof(UABP_BD_DYN_Barracks_C) == 0x0006A0, "Wrong size on UABP_BD_DYN_Barracks_C");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, UberGraphFrame) == 0x000430, "Member 'UABP_BD_DYN_Barracks_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, __AnimBlueprintMutables) == 0x000438, "Member 'UABP_BD_DYN_Barracks_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimBlueprintExtension_PropertyAccess) == 0x000440, "Member 'UABP_BD_DYN_Barracks_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimBlueprintExtension_Base) == 0x000448, "Member 'UABP_BD_DYN_Barracks_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_Root) == 0x000450, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_Slot) == 0x000470, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_SequencePlayer_2) == 0x0004B8, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_BlendListByBool) == 0x000500, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_ApplyAdditive) == 0x000548, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_SequencePlayer_1) == 0x000610, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_BD_DYN_Barracks_C, AnimGraphNode_SequencePlayer) == 0x000658, "Member 'UABP_BD_DYN_Barracks_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

