﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_UseSmartObject

#include "Basic.hpp"

#include "SmartObjectsModule_structs.hpp"


namespace SDK::Params
{

// Function BTTask_UseSmartObject.BTTask_UseSmartObject_C.ExecuteUbergraph_BTTask_UseSmartObject
// 0x0090 (0x0090 - 0x0000)
struct BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USmartObjectSubsystem*                  CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSmartObjectClaimHandle                CallFunc_GetBlackboardValueAsSOClaimHandle_ReturnValue; // 0x0050(0x0020)(NoDestructor)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAITask_UseGameplayBehaviorSmartObject* CallFunc_MoveToAndUseSmartObjectWithGameplayBehavior_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Abort_ReturnValue;                        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSmartObjectClaimHandle_ReturnValue; // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject) == 0x000008, "Wrong alignment on BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject");
static_assert(sizeof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject) == 0x000090, "Wrong size on BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, EntryPoint) == 0x000000, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000028, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_Event_OwnerController_1) == 0x000030, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_Event_ControlledPawn_1) == 0x000038, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, CallFunc_GetBlackboardValueAsSOClaimHandle_ReturnValue) == 0x000050, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::CallFunc_GetBlackboardValueAsSOClaimHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_Event_OwnerController) == 0x000070, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, K2Node_Event_ControlledPawn) == 0x000078, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, CallFunc_MoveToAndUseSmartObjectWithGameplayBehavior_ReturnValue) == 0x000080, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::CallFunc_MoveToAndUseSmartObjectWithGameplayBehavior_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, CallFunc_Abort_ReturnValue) == 0x000088, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::CallFunc_Abort_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, CallFunc_IsValid_ReturnValue) == 0x000089, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject, CallFunc_IsValidSmartObjectClaimHandle_ReturnValue) == 0x00008A, "Member 'BTTask_UseSmartObject_C_ExecuteUbergraph_BTTask_UseSmartObject::CallFunc_IsValidSmartObjectClaimHandle_ReturnValue' has a wrong offset!");

// Function BTTask_UseSmartObject.BTTask_UseSmartObject_C.FinishExecution
// 0x0001 (0x0001 - 0x0000)
struct BTTask_UseSmartObject_C_FinishExecution final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_UseSmartObject_C_FinishExecution) == 0x000001, "Wrong alignment on BTTask_UseSmartObject_C_FinishExecution");
static_assert(sizeof(BTTask_UseSmartObject_C_FinishExecution) == 0x000001, "Wrong size on BTTask_UseSmartObject_C_FinishExecution");
static_assert(offsetof(BTTask_UseSmartObject_C_FinishExecution, Success) == 0x000000, "Member 'BTTask_UseSmartObject_C_FinishExecution::Success' has a wrong offset!");

// Function BTTask_UseSmartObject.BTTask_UseSmartObject_C.ReceiveAbortAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_UseSmartObject_C_ReceiveAbortAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_UseSmartObject_C_ReceiveAbortAI) == 0x000008, "Wrong alignment on BTTask_UseSmartObject_C_ReceiveAbortAI");
static_assert(sizeof(BTTask_UseSmartObject_C_ReceiveAbortAI) == 0x000010, "Wrong size on BTTask_UseSmartObject_C_ReceiveAbortAI");
static_assert(offsetof(BTTask_UseSmartObject_C_ReceiveAbortAI, OwnerController) == 0x000000, "Member 'BTTask_UseSmartObject_C_ReceiveAbortAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ReceiveAbortAI, ControlledPawn) == 0x000008, "Member 'BTTask_UseSmartObject_C_ReceiveAbortAI::ControlledPawn' has a wrong offset!");

// Function BTTask_UseSmartObject.BTTask_UseSmartObject_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_UseSmartObject_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_UseSmartObject_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_UseSmartObject_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_UseSmartObject_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_UseSmartObject_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_UseSmartObject_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_UseSmartObject_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_UseSmartObject_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_UseSmartObject_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

