﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BD_DYN_MachineShop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_BD_DYN_MachineShop.ABP_BD_DYN_MachineShop_C.AnimBlueprintGeneratedConstantData
// 0x0417 (0x0418 - 0x0001)
struct ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_90;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_91;                                // 0x0010(0x0010)(BlueprintVisible, EditFixedSize)
	class UBlendProfile*                          __BlendProfile_92;                                 // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_93;                                   // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_94;                                 // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_95;                                 // 0x0031(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_96;                                // 0x0038(0x0010)(BlueprintVisible, EditFixedSize)
	float                                         __FloatProperty_97;                                // 0x0048(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_98;                                 // 0x004C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_99;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_100;                               // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_101;                              // 0x0074(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_102;                               // 0x00A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_103;                                // 0x00A4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_104;                                // 0x00A5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_105;                                // 0x00A6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A7[0x1];                                       // 0x00A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_106;                                // 0x00A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00B0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0130(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                           // 0x0148(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;          // 0x0178(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone_1;                   // 0x01A8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ModifyBone;                     // 0x01D8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;          // 0x0208(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool_1;              // 0x0238(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;                // 0x0268(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive_1;                // 0x0298(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;               // 0x02C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;               // 0x02F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                           // 0x0328(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;               // 0x0358(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyAdditive;                  // 0x0388(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;               // 0x03B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                 // 0x03E8(0x0030)()
};
static_assert(alignof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData) == 0x000418, "Wrong size on ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __NameProperty_90) == 0x000004, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__NameProperty_90' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __ArrayProperty_91) == 0x000010, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__ArrayProperty_91' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __BlendProfile_92) == 0x000020, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__BlendProfile_92' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __CurveFloat_93) == 0x000028, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__CurveFloat_93' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __EnumProperty_94) == 0x000030, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__EnumProperty_94' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __EnumProperty_95) == 0x000031, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__EnumProperty_95' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __ArrayProperty_96) == 0x000038, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__ArrayProperty_96' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __FloatProperty_97) == 0x000048, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__FloatProperty_97' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __BoolProperty_98) == 0x00004C, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__BoolProperty_98' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __StructProperty_99) == 0x000050, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__StructProperty_99' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __FloatProperty_100) == 0x000070, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__FloatProperty_100' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __StructProperty_101) == 0x000074, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__StructProperty_101' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __FloatProperty_102) == 0x0000A0, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__FloatProperty_102' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __BoolProperty_103) == 0x0000A4, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__BoolProperty_103' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __EnumProperty_104) == 0x0000A5, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__EnumProperty_104' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __ByteProperty_105) == 0x0000A6, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__ByteProperty_105' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, __NameProperty_106) == 0x0000A8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::__NameProperty_106' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000B0, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000130, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000148, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x000178, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone_1) == 0x0001A8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ModifyBone) == 0x0001D8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x000208, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendListByBool_1) == 0x000238, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendListByBool) == 0x000268, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ApplyAdditive_1) == 0x000298, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_4) == 0x0002C8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_3) == 0x0002F8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000328, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_2) == 0x000358, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ApplyAdditive) == 0x000388, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x0003B8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x0003E8, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");

// ScriptStruct ABP_BD_DYN_MachineShop.ABP_BD_DYN_MachineShop_C.AnimBlueprintGeneratedMutableData
// 0x0007 (0x0008 - 0x0001)
struct ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_1;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong size on ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x000004, "Member 'ABP_BD_DYN_MachineShop::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");

}

