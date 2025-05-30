﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCue_Impact_ExplosiveRocketSmall_Infantry

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCue_Impact_ExplosiveRocketSmall_Infantry.GCue_Impact_ExplosiveRocketSmall_Infantry_C.K2_HandleGameplayCue
// 0x0388 (0x0388 - 0x0000)
struct GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                                LocationCache;                                     // 0x00E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
	class UFXSystemComponent*                     CallFunc_SpawnEffectAtLocation_ReturnValue;        // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetGroundLocation_ReturnValue;            // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0238(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0288(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetSurfaceType_ReturnValue;               // 0x0381(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_382[0x2];                                      // 0x0382(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue");
static_assert(sizeof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue) == 0x000388, "Wrong size on GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, LocationCache) == 0x0000E8, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::LocationCache' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000100, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000104, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000108, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000120, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000128, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000130, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000150, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_Location) == 0x000170, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_Normal) == 0x000188, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_SpawnEffectAtLocation_ReturnValue) == 0x0001D8, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_SpawnEffectAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0001E0, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_MakeVector_ReturnValue) == 0x0001F0, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_GetGroundLocation_ReturnValue) == 0x000208, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_GetGroundLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_Add_VectorVector_ReturnValue) == 0x000220, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, Temp_object_Variable) == 0x000238, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_MakeVector_ReturnValue_1) == 0x000248, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, K2Node_MakeArray_Array) == 0x000260, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000270, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000288, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000380, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_GetSurfaceType_ReturnValue) == 0x000381, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_GetSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000384, "Member 'GCue_Impact_ExplosiveRocketSmall_Infantry_C_K2_HandleGameplayCue::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

}

