﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_DYN_Airpad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_BD_DYN_Airpad.ABP_BD_DYN_Airpad_C.AnimBlueprintGeneratedConstantData
// 0x0167 (0x0168 - 0x0001)
struct ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_7;                                  // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_8;                                  // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_9;                                // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	ERefPoseType                                  __ByteProperty_10;                                 // 0x0038(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0040(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00C0(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x00D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                           // 0x0108(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalRefPose;                   // 0x0138(0x0030)()
};
static_assert(alignof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData) == 0x000168, "Wrong size on ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, __NameProperty_7) == 0x000004, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::__NameProperty_7' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, __NameProperty_8) == 0x00000C, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::__NameProperty_8' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, __StructProperty_9) == 0x000018, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::__StructProperty_9' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, __ByteProperty_10) == 0x000038, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::__ByteProperty_10' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000040, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000C0, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0000D8, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000108, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalRefPose) == 0x000138, "Member 'ABP_BD_DYN_Airpad::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalRefPose' has a wrong offset!");

}

