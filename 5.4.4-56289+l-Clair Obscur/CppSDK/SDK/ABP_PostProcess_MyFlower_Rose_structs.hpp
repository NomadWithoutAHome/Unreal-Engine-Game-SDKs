﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PostProcess_MyFlower_Rose

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_PostProcess_MyFlower_Rose.ABP_PostProcess_MyFlower_Rose_C.AnimBlueprintGeneratedConstantData
// 0x027F (0x0280 - 0x0001)
struct ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_25;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_26;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_27;                               // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x00D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                // 0x0100(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;          // 0x0130(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;          // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_KawaiiPhysics;                  // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_3;                   // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_2;                   // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone_1;                   // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SpringBone;                     // 0x0250(0x0030)()
};
static_assert(alignof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData) == 0x000280, "Wrong size on ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, __NameProperty_25) == 0x000004, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::__NameProperty_25' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, __NameProperty_26) == 0x00000C, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::__NameProperty_26' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, __StructProperty_27) == 0x000018, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::__StructProperty_27' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x0000D0, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedInputPose) == 0x000100, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x000130, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x000160, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_KawaiiPhysics) == 0x000190, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_3) == 0x0001C0, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_3' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_2) == 0x0001F0, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_2' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone_1) == 0x000220, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SpringBone) == 0x000250, "Member 'ABP_PostProcess_MyFlower_Rose::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SpringBone' has a wrong offset!");

}

