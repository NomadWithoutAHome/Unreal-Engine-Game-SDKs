﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBlueprint_SpermWhale

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBlueprint_SpermWhale.AnimBlueprint_SpermWhale_C.AnimBlueprintGeneratedConstantData
// 0x0227 (0x0228 - 0x0001)
struct AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_35;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_36;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_37;                                // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_38;                               // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_39;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_40;                                 // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_41;                                 // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_42;                                 // 0x0046(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_43;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_44;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x0108(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;               // 0x0138(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;               // 0x0168(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                 // 0x0198(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend_1;             // 0x01C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;               // 0x01F8(0x0030)()
};
static_assert(alignof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData) == 0x000228, "Wrong size on AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __NameProperty_35) == 0x000004, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__NameProperty_35' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __BoolProperty_36) == 0x00000C, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__BoolProperty_36' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __FloatProperty_37) == 0x000010, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__FloatProperty_37' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __StructProperty_38) == 0x000014, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__StructProperty_38' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __FloatProperty_39) == 0x000040, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__FloatProperty_39' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __BoolProperty_40) == 0x000044, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__BoolProperty_40' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __EnumProperty_41) == 0x000045, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__EnumProperty_41' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __ByteProperty_42) == 0x000046, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__ByteProperty_42' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __NameProperty_43) == 0x000048, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__NameProperty_43' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, __StructProperty_44) == 0x000050, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::__StructProperty_44' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000108, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendSpacePlayer) == 0x000138, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x000168, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x000198, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LayeredBoneBlend_1) == 0x0001C8, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LayeredBoneBlend) == 0x0001F8, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");

// ScriptStruct AnimBlueprint_SpermWhale.AnimBlueprint_SpermWhale_C.AnimBlueprintGeneratedMutableData
// 0x0013 (0x0014 - 0x0001)
struct AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_1;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_2;                                 // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData) == 0x000014, "Wrong size on AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x00000C, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData, __FloatProperty_2) == 0x000010, "Member 'AnimBlueprint_SpermWhale::FAnimBlueprintGeneratedMutableData::__FloatProperty_2' has a wrong offset!");

}

