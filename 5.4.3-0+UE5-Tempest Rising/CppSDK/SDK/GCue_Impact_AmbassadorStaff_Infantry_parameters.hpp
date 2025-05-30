﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Impact_AmbassadorStaff_Infantry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GCue_Impact_AmbassadorStaff_Infantry.GCue_Impact_AmbassadorStaff_Infantry_C.OnExecute
// 0x0298 (0x0298 - 0x0000)
struct GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0108(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0130(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0150(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedInfantry*                           K2Node_DynamicCast_AsTed_Infantry;                 // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_BreakVector_X;                            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_SpawnEffectAtLocation_ReturnValue;        // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_SpawnEffectAttached_ReturnValue;          // 0x0290(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute) == 0x000008, "Wrong alignment on GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute");
static_assert(sizeof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute) == 0x000298, "Wrong size on GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, MyTarget) == 0x000000, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, Parameters) == 0x000008, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, ReturnValue) == 0x0000E0, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_MakeVector_ReturnValue) == 0x0000E8, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000100, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000104, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000108, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000120, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000128, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000130, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000150, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_Location) == 0x000170, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_Normal) == 0x000188, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, K2Node_DynamicCast_AsTed_Infantry) == 0x0001D8, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::K2Node_DynamicCast_AsTed_Infantry' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001E8, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakRotator_Roll) == 0x000200, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakRotator_Pitch) == 0x000204, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakRotator_Yaw) == 0x000208, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_MakeRotator_ReturnValue) == 0x000210, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakVector_X) == 0x000228, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakVector_Y) == 0x000230, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_BreakVector_Z) == 0x000238, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_SpawnEffectAtLocation_ReturnValue) == 0x000240, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_SpawnEffectAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_MakeVector_ReturnValue_1) == 0x000248, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_MakeRotator_ReturnValue_1) == 0x000260, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000278, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute, CallFunc_SpawnEffectAttached_ReturnValue) == 0x000290, "Member 'GCue_Impact_AmbassadorStaff_Infantry_C_OnExecute::CallFunc_SpawnEffectAttached_ReturnValue' has a wrong offset!");

}

