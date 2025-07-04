﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleLookAtComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BattleLookAtComponent.BP_BattleLookAtComponent_C.ExecuteUbergraph_BP_BattleLookAtComponent
// 0x0200 (0x0200 - 0x0000)
struct BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAC_jRPG_BattleManager_C*               CallFunc_GetBattleManager_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17[0x9];                                       // 0x0017(0x0009)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_jRPG_Character_Battle_Base_C*> CallFunc_GetAllEnemies_Output;                   // 0x00E8(0x0010)(ReferenceParm)
	uint8                                         Pad_F8[0x8];                                       // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x0100(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_Character_Battle_Base_C*       CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_3;     // 0x0170(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent) == 0x000010, "Wrong alignment on BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent");
static_assert(sizeof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent) == 0x000200, "Wrong size on BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, EntryPoint) == 0x000000, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_GetBattleManager_ReturnValue) == 0x000008, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_IsValid_ReturnValue_1) == 0x000015, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_IsValid_ReturnValue_2) == 0x000016, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000080, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_IsValid_ReturnValue_3) == 0x0000E0, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_GetAllEnemies_Output) == 0x0000E8, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_GetAllEnemies_Output' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_K2_GetComponentToWorld_ReturnValue_2) == 0x000100, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_K2_GetComponentToWorld_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_Array_Get_Item) == 0x000160, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_IsValid_ReturnValue_4) == 0x000168, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_K2_GetComponentToWorld_ReturnValue_3) == 0x000170, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_K2_GetComponentToWorld_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x0001D0, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_GetOwner_ReturnValue) == 0x0001D8, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0001E0, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_GetOwner_ReturnValue_1) == 0x0001E8, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x0001F0, "Member 'BP_BattleLookAtComponent_C_ExecuteUbergraph_BP_BattleLookAtComponent::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function BP_BattleLookAtComponent.BP_BattleLookAtComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleLookAtComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleLookAtComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BattleLookAtComponent_C_ReceiveTick");
static_assert(sizeof(BP_BattleLookAtComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_BattleLookAtComponent_C_ReceiveTick");
static_assert(offsetof(BP_BattleLookAtComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BattleLookAtComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

