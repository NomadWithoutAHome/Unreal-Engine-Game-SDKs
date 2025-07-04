﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ConditionChecker_HasAtLeastRelationshipLevel

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ConditionChecker_HasAtLeastRelationshipLevel.BP_ConditionChecker_HasAtLeastRelationshipLevel_C.CheckInternal
// 0x0002 (0x0002 - 0x0000)
struct BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAtLeastRelationshipLevel_Result;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal) == 0x000001, "Wrong alignment on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal");
static_assert(sizeof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal) == 0x000002, "Wrong size on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal, ReturnValue) == 0x000000, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal, CallFunc_HasAtLeastRelationshipLevel_Result) == 0x000001, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_CheckInternal::CallFunc_HasAtLeastRelationshipLevel_Result' has a wrong offset!");

// Function BP_ConditionChecker_HasAtLeastRelationshipLevel.BP_ConditionChecker_HasAtLeastRelationshipLevel_C.UnbindEventOnGameStateChanged
// 0x0018 (0x0018 - 0x0000)
struct BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged final
{
public:
	TDelegate<void()>                             Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UBP_RelationshipSystem_C*               CallFunc_GetRelationshipSystem_RelationshipSystem; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged) == 0x000008, "Wrong alignment on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged");
static_assert(sizeof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged) == 0x000018, "Wrong size on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged, Event) == 0x000000, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged::Event' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged, CallFunc_GetRelationshipSystem_RelationshipSystem) == 0x000010, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_UnbindEventOnGameStateChanged::CallFunc_GetRelationshipSystem_RelationshipSystem' has a wrong offset!");

// Function BP_ConditionChecker_HasAtLeastRelationshipLevel.BP_ConditionChecker_HasAtLeastRelationshipLevel_C.BindEventOnGameStateChanged
// 0x0018 (0x0018 - 0x0000)
struct BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged final
{
public:
	TDelegate<void()>                             Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UBP_RelationshipSystem_C*               CallFunc_GetRelationshipSystem_RelationshipSystem; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged) == 0x000008, "Wrong alignment on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged");
static_assert(sizeof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged) == 0x000018, "Wrong size on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged, Event) == 0x000000, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged::Event' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged, CallFunc_GetRelationshipSystem_RelationshipSystem) == 0x000010, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_BindEventOnGameStateChanged::CallFunc_GetRelationshipSystem_RelationshipSystem' has a wrong offset!");

// Function BP_ConditionChecker_HasAtLeastRelationshipLevel.BP_ConditionChecker_HasAtLeastRelationshipLevel_C.ValidateConditionChecker
// 0x0038 (0x0038 - 0x0000)
struct BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker final
{
public:
	TArray<class FText>                           ErrorMessages;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 PropertyPath;                                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class FString                                 CallFunc_AppendPropertyPath_ReturnValue;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker) == 0x000008, "Wrong alignment on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker");
static_assert(sizeof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker) == 0x000038, "Wrong size on BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker, ErrorMessages) == 0x000000, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker::ErrorMessages' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker, PropertyPath) == 0x000010, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker::PropertyPath' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker, CallFunc_AppendPropertyPath_ReturnValue) == 0x000020, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker::CallFunc_AppendPropertyPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_ConditionChecker_HasAtLeastRelationshipLevel_C_ValidateConditionChecker::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

