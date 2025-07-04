﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameAction_Conditional

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_GameAction_Conditional.BP_GameAction_Conditional_C.GetInstanceClass
// 0x0008 (0x0008 - 0x0000)
struct BP_GameAction_Conditional_C_GetInstanceClass final
{
public:
	TSubclassOf<class UGameActionInstance>        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameAction_Conditional_C_GetInstanceClass) == 0x000008, "Wrong alignment on BP_GameAction_Conditional_C_GetInstanceClass");
static_assert(sizeof(BP_GameAction_Conditional_C_GetInstanceClass) == 0x000008, "Wrong size on BP_GameAction_Conditional_C_GetInstanceClass");
static_assert(offsetof(BP_GameAction_Conditional_C_GetInstanceClass, ReturnValue) == 0x000000, "Member 'BP_GameAction_Conditional_C_GetInstanceClass::ReturnValue' has a wrong offset!");

// Function BP_GameAction_Conditional.BP_GameAction_Conditional_C.ValidateGameAction
// 0x0088 (0x0088 - 0x0000)
struct BP_GameAction_Conditional_C_ValidateGameAction final
{
public:
	TArray<class FText>                           ErrorMessages;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 PropertyPath;                                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	bool                                          ExploreAssetChildren;                              // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_AppendPropertyPath_ReturnValue;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameActionWrapperValid_ReturnValue;     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_AppendPropertyPath_ReturnValue_1;         // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_ConditionChecker_C*                 K2Node_DynamicCast_AsBP_Condition_Checker;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_AppendPropertyPath_ReturnValue_2;         // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_AppendPropertyPath_ReturnValue_3;         // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameActionWrapperValid_ReturnValue_1;   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameAction_Conditional_C_ValidateGameAction) == 0x000008, "Wrong alignment on BP_GameAction_Conditional_C_ValidateGameAction");
static_assert(sizeof(BP_GameAction_Conditional_C_ValidateGameAction) == 0x000088, "Wrong size on BP_GameAction_Conditional_C_ValidateGameAction");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, ErrorMessages) == 0x000000, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::ErrorMessages' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, PropertyPath) == 0x000010, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::PropertyPath' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, ExploreAssetChildren) == 0x000020, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::ExploreAssetChildren' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, CallFunc_AppendPropertyPath_ReturnValue) == 0x000028, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::CallFunc_AppendPropertyPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, CallFunc_IsGameActionWrapperValid_ReturnValue) == 0x000038, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::CallFunc_IsGameActionWrapperValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, CallFunc_AppendPropertyPath_ReturnValue_1) == 0x000040, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::CallFunc_AppendPropertyPath_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, K2Node_DynamicCast_AsBP_Condition_Checker) == 0x000050, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::K2Node_DynamicCast_AsBP_Condition_Checker' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, CallFunc_AppendPropertyPath_ReturnValue_2) == 0x000060, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::CallFunc_AppendPropertyPath_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, CallFunc_AppendPropertyPath_ReturnValue_3) == 0x000070, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::CallFunc_AppendPropertyPath_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_GameAction_Conditional_C_ValidateGameAction, CallFunc_IsGameActionWrapperValid_ReturnValue_1) == 0x000080, "Member 'BP_GameAction_Conditional_C_ValidateGameAction::CallFunc_IsGameActionWrapperValid_ReturnValue_1' has a wrong offset!");

}

