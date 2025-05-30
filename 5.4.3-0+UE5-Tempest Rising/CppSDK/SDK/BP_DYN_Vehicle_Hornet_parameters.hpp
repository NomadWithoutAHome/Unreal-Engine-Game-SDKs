﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DYN_Vehicle_Hornet

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_DYN_Vehicle_Hornet.BP_DYN_Vehicle_Hornet_C.ExecuteUbergraph_BP_DYN_Vehicle_Hornet
// 0x0190 (0x0190 - 0x0000)
struct BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_HealthPct;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0040(0x00D8)(ContainsInstancedReference)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x011C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;    // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0159(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsHovered;                           // 0x015A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15B[0x1];                                      // 0x015B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x015C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x016E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetShouldDisplayPreviewRange_ReturnValue; // 0x016F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_1;       // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_2;       // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet) == 0x000008, "Wrong alignment on BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet");
static_assert(sizeof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet) == 0x000190, "Wrong size on BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, EntryPoint) == 0x000000, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, K2Node_Event_HealthPct) == 0x000014, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::K2Node_Event_HealthPct' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000019, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x00001A, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x00001B, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Not_PreBool_ReturnValue) == 0x00001C, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001D, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_BooleanAND_ReturnValue_1) == 0x00001F, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000020, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000021, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x000022, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x000023, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_GetSocketLocation_ReturnValue) == 0x000028, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000040, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_HasAuthority_ReturnValue) == 0x000118, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x00011C, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000128, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue) == 0x000140, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x000150, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsValid_ReturnValue_1) == 0x000158, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, K2Node_Event_bIsSelected) == 0x000159, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, K2Node_Event_bIsHovered) == 0x00015A, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::K2Node_Event_bIsHovered' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, K2Node_CreateDelegate_OutputDelegate_1) == 0x00015C, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_BooleanOR_ReturnValue) == 0x00016C, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_IsValid_ReturnValue_2) == 0x00016D, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00016E, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_GetShouldDisplayPreviewRange_ReturnValue) == 0x00016F, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_GetShouldDisplayPreviewRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_BooleanAND_ReturnValue_2) == 0x000170, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_BooleanAND_ReturnValue_3) == 0x000171, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000178, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Less_DoubleDouble_A_ImplicitCast_1) == 0x000180, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Less_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet, CallFunc_Less_DoubleDouble_A_ImplicitCast_2) == 0x000188, "Member 'BP_DYN_Vehicle_Hornet_C_ExecuteUbergraph_BP_DYN_Vehicle_Hornet::CallFunc_Less_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");

// Function BP_DYN_Vehicle_Hornet.BP_DYN_Vehicle_Hornet_C.OnSelectionChanged_Blueprint
// 0x0002 (0x0002 - 0x0000)
struct BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHovered;                                        // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint) == 0x000001, "Wrong alignment on BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint");
static_assert(sizeof(BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint) == 0x000002, "Wrong size on BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint, bIsSelected) == 0x000000, "Member 'BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint::bIsSelected' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint, bIsHovered) == 0x000001, "Member 'BP_DYN_Vehicle_Hornet_C_OnSelectionChanged_Blueprint::bIsHovered' has a wrong offset!");

// Function BP_DYN_Vehicle_Hornet.BP_DYN_Vehicle_Hornet_C.ReceiveUpdateHealthEffects
// 0x0004 (0x0004 - 0x0000)
struct BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects final
{
public:
	float                                         HealthPct;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects) == 0x000004, "Wrong alignment on BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects");
static_assert(sizeof(BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects) == 0x000004, "Wrong size on BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects, HealthPct) == 0x000000, "Member 'BP_DYN_Vehicle_Hornet_C_ReceiveUpdateHealthEffects::HealthPct' has a wrong offset!");

// Function BP_DYN_Vehicle_Hornet.BP_DYN_Vehicle_Hornet_C.UpdateRangeDecal
// 0x0010 (0x0010 - 0x0000)
struct BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal final
{
public:
	const class UTedUnitDefinitionAsset*          CallFunc_GetDefinitionAsset_ReturnValue;           // 0x0000(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TryFindMaxAbilityRange_ReturnValue;       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal) == 0x000008, "Wrong alignment on BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal");
static_assert(sizeof(BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal) == 0x000010, "Wrong size on BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal, CallFunc_GetDefinitionAsset_ReturnValue) == 0x000000, "Member 'BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal::CallFunc_GetDefinitionAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal, CallFunc_TryFindMaxAbilityRange_ReturnValue) == 0x00000C, "Member 'BP_DYN_Vehicle_Hornet_C_UpdateRangeDecal::CallFunc_TryFindMaxAbilityRange_ReturnValue' has a wrong offset!");

}

