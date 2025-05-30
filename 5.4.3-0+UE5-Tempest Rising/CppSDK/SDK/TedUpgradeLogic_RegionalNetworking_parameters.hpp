﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedUpgradeLogic_RegionalNetworking

#include "Basic.hpp"

#include "Tempest_structs.hpp"


namespace SDK::Params
{

// Function TedUpgradeLogic_RegionalNetworking.TedUpgradeLogic_RegionalNetworking_C.K2_IsApplicableToPawn
// 0x0020 (0x0020 - 0x0000)
struct TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn final
{
public:
	const class ATedPawn*                         InPawn;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETedFaction                                   CallFunc_GetPawnFactionFromDefinition_ReturnValue; // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedUnitBase*                           K2Node_DynamicCast_AsTed_Unit_Base;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn) == 0x000008, "Wrong alignment on TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn");
static_assert(sizeof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn) == 0x000020, "Wrong size on TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn, InPawn) == 0x000000, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn::InPawn' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn, ReturnValue) == 0x000008, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn::ReturnValue' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn, CallFunc_GetPawnFactionFromDefinition_ReturnValue) == 0x000009, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn::CallFunc_GetPawnFactionFromDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn, K2Node_DynamicCast_AsTed_Unit_Base) == 0x000010, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn::K2Node_DynamicCast_AsTed_Unit_Base' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_IsApplicableToPawn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function TedUpgradeLogic_RegionalNetworking.TedUpgradeLogic_RegionalNetworking_C.K2_TryApplyToPawn
// 0x0038 (0x0038 - 0x0000)
struct TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn final
{
public:
	class ATedPawn*                               InPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATedUnitBase*                           K2Node_DynamicCast_AsTed_Unit_Base;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTedPlayerData*                         CallFunc_GetOwningPlayerData_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UTedUnitDefinitionAsset*          CallFunc_GetDefinitionAsset_ReturnValue;           // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsApplicableToPawn_ReturnValue;        // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn) == 0x000008, "Wrong alignment on TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn");
static_assert(sizeof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn) == 0x000038, "Wrong size on TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, InPawn) == 0x000000, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::InPawn' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, ReturnValue) == 0x000008, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::ReturnValue' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, K2Node_DynamicCast_AsTed_Unit_Base) == 0x000010, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::K2Node_DynamicCast_AsTed_Unit_Base' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, CallFunc_GetOwningPlayerData_ReturnValue) == 0x000020, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::CallFunc_GetOwningPlayerData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, CallFunc_GetDefinitionAsset_ReturnValue) == 0x000028, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::CallFunc_GetDefinitionAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn, CallFunc_K2_IsApplicableToPawn_ReturnValue) == 0x000032, "Member 'TedUpgradeLogic_RegionalNetworking_C_K2_TryApplyToPawn::CallFunc_K2_IsApplicableToPawn_ReturnValue' has a wrong offset!");

}

