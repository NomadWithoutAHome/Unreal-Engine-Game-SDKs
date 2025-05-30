﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIController_Character

#include "Basic.hpp"

#include "E_Units_structs.hpp"


namespace SDK::Params
{

// Function BP_AIController_Character.BP_AIController_Character_C.ExecuteUbergraph_BP_AIController_Character
// 0x00A0 (0x00A0 - 0x0000)
struct BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Units                                       Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBehaviorTree*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SniperSpot_C*                       CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SniperSpot_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x0068(0x0010)(ReferenceParm)
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBehaviorTree*                          K2Node_Select_Default;                             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character) == 0x000008, "Wrong alignment on BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character");
static_assert(sizeof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character) == 0x0000A0, "Wrong size on BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, EntryPoint) == 0x000000, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_byte_Variable) == 0x000004, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_object_Variable) == 0x000008, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_object_Variable_1) == 0x000010, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_object_Variable_2) == 0x000018, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_object_Variable_3) == 0x000020, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_object_Variable_4) == 0x000028, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_object_Variable_5) == 0x000030, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, K2Node_Event_PossessedPawn) == 0x000060, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_GetAllActorsOfClass_OutActors) == 0x000068, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, K2Node_DynamicCast_AsBP_Character) == 0x000078, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, K2Node_Select_Default) == 0x000088, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Array_Add_ReturnValue_1) == 0x000090, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_RunBehaviorTree_ReturnValue) == 0x000094, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Array_Add_ReturnValue_2) == 0x000098, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character, CallFunc_Array_Add_ReturnValue_3) == 0x00009C, "Member 'BP_AIController_Character_C_ExecuteUbergraph_BP_AIController_Character::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

// Function BP_AIController_Character.BP_AIController_Character_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_AIController_Character_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIController_Character_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_AIController_Character_C_ReceivePossess");
static_assert(sizeof(BP_AIController_Character_C_ReceivePossess) == 0x000008, "Wrong size on BP_AIController_Character_C_ReceivePossess");
static_assert(offsetof(BP_AIController_Character_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_AIController_Character_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

