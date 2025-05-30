﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_RipenFieldHasResource

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTD_RipenFieldHasResource.BTD_RipenFieldHasResource_C.PerformConditionCheckAI
// 0x0070 (0x0070 - 0x0000)
struct BTD_RipenFieldHasResource_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ATempestFieldVolume*                    K2Node_DynamicCast_AsTempest_Field_Volume;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsResourceDepleted_ReturnValue;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetClosestUnclaimedResourceTile_OutClosestLocation; // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClosestUnclaimedResourceTile_ReturnValue; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_RipenFieldHasResource_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI) == 0x000070, "Wrong size on BTD_RipenFieldHasResource_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000038, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, K2Node_DynamicCast_AsTempest_Field_Volume) == 0x000040, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::K2Node_DynamicCast_AsTempest_Field_Volume' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_IsResourceDepleted_ReturnValue) == 0x000049, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_IsResourceDepleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_GetClosestUnclaimedResourceTile_OutClosestLocation) == 0x000050, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_GetClosestUnclaimedResourceTile_OutClosestLocation' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_GetClosestUnclaimedResourceTile_ReturnValue) == 0x000068, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_GetClosestUnclaimedResourceTile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_Not_PreBool_ReturnValue_1) == 0x00006C, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00006D, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_BooleanOR_ReturnValue) == 0x00006E, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_RipenFieldHasResource_C_PerformConditionCheckAI, CallFunc_BooleanAND_ReturnValue) == 0x00006F, "Member 'BTD_RipenFieldHasResource_C_PerformConditionCheckAI::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

