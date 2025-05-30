﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SyringeInjector

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_Teams_structs.hpp"
#include "ST_PlayerStats_structs.hpp"


namespace SDK::Params
{

// Function BP_SyringeInjector.BP_SyringeInjector_C.ExecuteUbergraph_BP_SyringeInjector
// 0x00B0 (0x00B0 - 0x0000)
struct BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                        K2Node_Event_Character;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Teams                                       CallFunc_GetPawnData_Team;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPawnData_PlayerIndex;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_PlayerStats                        CallFunc_GetPawnData_PlayerStats;                  // 0x0028(0x0068)(HasGetValueTypeHash)
	class UPawnDataComponent_C*                   CallFunc_GetPawnData_PawnDataComponent;            // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B[0x5];                                       // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector) == 0x000008, "Wrong alignment on BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector");
static_assert(sizeof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector) == 0x0000B0, "Wrong size on BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, EntryPoint) == 0x000000, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_Multiply_IntInt_ReturnValue) == 0x000004, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, K2Node_Event_Character) == 0x000008, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::K2Node_Event_Character' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, K2Node_Event_HitLocation) == 0x000010, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_GetPawnData_Team) == 0x00001C, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_GetPawnData_Team' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_GetPawnData_PlayerIndex) == 0x000020, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_GetPawnData_PlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_GetPawnData_PlayerStats) == 0x000028, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_GetPawnData_PlayerStats' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_GetPawnData_PawnDataComponent) == 0x000090, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_GetPawnData_PawnDataComponent' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_Greater_IntInt_ReturnValue) == 0x000098, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000099, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, CallFunc_Less_IntInt_ReturnValue) == 0x00009A, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, K2Node_DynamicCast_AsBP_Character) == 0x0000A0, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_SyringeInjector_C_ExecuteUbergraph_BP_SyringeInjector::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_SyringeInjector.BP_SyringeInjector_C.CharacterHit
// 0x0018 (0x0018 - 0x0000)
struct BP_SyringeInjector_C_CharacterHit final
{
public:
	class ABP_Character_C*                        Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SyringeInjector_C_CharacterHit) == 0x000008, "Wrong alignment on BP_SyringeInjector_C_CharacterHit");
static_assert(sizeof(BP_SyringeInjector_C_CharacterHit) == 0x000018, "Wrong size on BP_SyringeInjector_C_CharacterHit");
static_assert(offsetof(BP_SyringeInjector_C_CharacterHit, Character) == 0x000000, "Member 'BP_SyringeInjector_C_CharacterHit::Character' has a wrong offset!");
static_assert(offsetof(BP_SyringeInjector_C_CharacterHit, HitLocation) == 0x000008, "Member 'BP_SyringeInjector_C_CharacterHit::HitLocation' has a wrong offset!");

}

