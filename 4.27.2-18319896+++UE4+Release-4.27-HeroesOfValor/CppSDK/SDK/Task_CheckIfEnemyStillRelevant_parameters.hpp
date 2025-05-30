﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_CheckIfEnemyStillRelevant

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Task_CheckIfEnemyStillRelevant.Task_CheckIfEnemyStillRelevant_C.ExecuteUbergraph_Task_CheckIfEnemyStillRelevant
// 0x00A0 (0x00A0 - 0x0000)
struct Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Global_Game_Settings_AI_CommandoDetectRange; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Global_Game_Settings_GravityAmount;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Global_Game_Settings_Camera_FOV;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_VehicleBase_C*                      K2Node_DynamicCast_AsBP_Vehicle_Base;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPawnControlled_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant) == 0x000008, "Wrong alignment on Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant");
static_assert(sizeof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant) == 0x0000A0, "Wrong size on Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, EntryPoint) == 0x000000, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::EntryPoint' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_Global_Game_Settings_AI_CommandoDetectRange) == 0x000004, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_Global_Game_Settings_AI_CommandoDetectRange' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_Global_Game_Settings_GravityAmount) == 0x000008, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_Global_Game_Settings_GravityAmount' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_Global_Game_Settings_Camera_FOV) == 0x00000C, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_Global_Game_Settings_Camera_FOV' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_MakeLiteralName_ReturnValue) == 0x000010, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_Event_OwnerController) == 0x000018, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_Event_ControlledPawn) == 0x000020, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_GetBlackboard_ReturnValue) == 0x000038, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000040, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_GetValueAsObject_ReturnValue) == 0x000048, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_DynamicCast_AsBP_Vehicle_Base) == 0x000058, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_DynamicCast_AsBP_Vehicle_Base' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_DynamicCast_AsPawn) == 0x000068, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000074, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_IsPawnControlled_ReturnValue) == 0x000080, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_IsPawnControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_Vector_Distance_ReturnValue) == 0x000084, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_Less_FloatFloat_ReturnValue) == 0x000088, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000089, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_DynamicCast_AsBP_Character) == 0x000090, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'Task_CheckIfEnemyStillRelevant_C_ExecuteUbergraph_Task_CheckIfEnemyStillRelevant::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function Task_CheckIfEnemyStillRelevant.Task_CheckIfEnemyStillRelevant_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI) == 0x000008, "Wrong alignment on Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI");
static_assert(sizeof(Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI) == 0x000018, "Wrong size on Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'Task_CheckIfEnemyStillRelevant_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

