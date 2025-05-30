﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Impact_Arcing_TempestHeart

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GCue_Impact_Arcing_TempestHeart.GCue_Impact_Arcing_TempestHeart_C.ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart
// 0x03A0 (0x03A0 - 0x0000)
struct GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BD_VETI_TempestHeart_C*             K2Node_DynamicCast_AsBP_BD_VETI_Tempest_Heart;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_SpawnEffectAtLocation_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0110(0x00D8)(ConstParm, ContainsInstancedReference)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x01F0(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0208(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0210(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0218(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0238(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_EffectContextGetEffectCauser_ReturnValue; // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATedUnitBase*                           K2Node_DynamicCast_AsTed_Unit_Base;                // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedStructureBase*                      K2Node_DynamicCast_AsTed_Structure_Base;           // 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_FindClosestBone_K2_BoneLocation;          // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_FindClosestBone_K2_ReturnValue;           // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindClosestBone_K2_BoneLocation_1;        // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_FindClosestBone_K2_ReturnValue_1;         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATedAircraft*                           K2Node_DynamicCast_AsTed_Aircraft;                 // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedInfantry*                           K2Node_DynamicCast_AsTed_Infantry;                 // 0x0358(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_FindClosestBone_K2_BoneLocation_2;        // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_FindClosestBone_K2_ReturnValue_2;         // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;          // 0x0388(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart) == 0x000008, "Wrong alignment on GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart");
static_assert(sizeof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart) == 0x0003A0, "Wrong size on GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, EntryPoint) == 0x000000, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_AsBP_BD_VETI_Tempest_Heart) == 0x000020, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_AsBP_BD_VETI_Tempest_Heart' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_GetSocketLocation_ReturnValue) == 0x000048, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000090, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0000A8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x0000C0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000D8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_SpawnEffectAtLocation_ReturnValue) == 0x0000E0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_SpawnEffectAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000E8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_Event_MyTarget) == 0x000100, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_Event_EventType) == 0x000108, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_Event_Parameters) == 0x000110, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0001E8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0001EC, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0001F0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000208, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000210, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000218, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000238, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_Location) == 0x000258, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_Normal) == 0x000270, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000288, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000290, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000298, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0002A0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0002A8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0002AC, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0002B0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0002B8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_EffectContextGetEffectCauser_ReturnValue) == 0x0002C0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_EffectContextGetEffectCauser_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002C8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0002D0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_AsTed_Unit_Base) == 0x0002E8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_AsTed_Unit_Base' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_bSuccess_1) == 0x0002F0, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_AsTed_Structure_Base) == 0x0002F8, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_AsTed_Structure_Base' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_bSuccess_2) == 0x000300, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_FindClosestBone_K2_BoneLocation) == 0x000308, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_FindClosestBone_K2_BoneLocation' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_FindClosestBone_K2_ReturnValue) == 0x000320, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_FindClosestBone_K2_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_FindClosestBone_K2_BoneLocation_1) == 0x000328, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_FindClosestBone_K2_BoneLocation_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_FindClosestBone_K2_ReturnValue_1) == 0x000340, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_FindClosestBone_K2_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_AsTed_Aircraft) == 0x000348, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_AsTed_Aircraft' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_bSuccess_3) == 0x000350, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_AsTed_Infantry) == 0x000358, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_AsTed_Infantry' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, K2Node_DynamicCast_bSuccess_4) == 0x000360, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_FindClosestBone_K2_BoneLocation_2) == 0x000368, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_FindClosestBone_K2_BoneLocation_2' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_FindClosestBone_K2_ReturnValue_2) == 0x000380, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_FindClosestBone_K2_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000388, "Member 'GCue_Impact_Arcing_TempestHeart_C_ExecuteUbergraph_GCue_Impact_Arcing_TempestHeart::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");

// Function GCue_Impact_Arcing_TempestHeart.GCue_Impact_Arcing_TempestHeart_C.K2_HandleGameplayCue
// 0x00E8 (0x00E8 - 0x0000)
struct GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue");
static_assert(sizeof(GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue) == 0x0000E8, "Wrong size on GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCue_Impact_Arcing_TempestHeart_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

}

