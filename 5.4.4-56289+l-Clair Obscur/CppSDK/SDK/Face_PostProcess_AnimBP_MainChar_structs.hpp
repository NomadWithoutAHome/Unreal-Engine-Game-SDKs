﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Face_PostProcess_AnimBP_MainChar

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Face_PostProcess_AnimBP_MainChar.Face_PostProcess_AnimBP_MainChar_C.AnimBlueprintGeneratedConstantData
// 0x02AF (0x02B0 - 0x0001)
struct Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_28;                               // 0x0008(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_29;                                 // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_30;                                 // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SaveCachedPose;                 // 0x00D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_UseCachedPose;                  // 0x0100(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyBone;                       // 0x0130(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;          // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;          // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;                     // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyLimits;                    // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RigLogic;                       // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LinkedInputPose;                // 0x0250(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x0280(0x0030)()
};
static_assert(alignof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData) == 0x0002B0, "Wrong size on Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, __StructProperty_28) == 0x000008, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::__StructProperty_28' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, __NameProperty_29) == 0x000028, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::__NameProperty_29' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, __NameProperty_30) == 0x000030, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::__NameProperty_30' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SaveCachedPose) == 0x0000D0, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_UseCachedPose) == 0x000100, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_CopyBone) == 0x000130, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x000160, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x000190, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone) == 0x0001C0, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ApplyLimits) == 0x0001F0, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ApplyLimits' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_RigLogic) == 0x000220, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_RigLogic' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LinkedInputPose) == 0x000250, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000280, "Member 'Face_PostProcess_AnimBP_MainChar::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");

}

