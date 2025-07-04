﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SEQ_IW_Goblu_Demineur_Ambush

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SEQ_IW_Goblu_Demineur_Ambush.SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C.ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP
// 0x0030 (0x0030 - 0x0000)
struct SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*                CallFunc_SpawnForceFeedbackAtLocation_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP) == 0x000008, "Wrong alignment on SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP");
static_assert(sizeof(SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP) == 0x000030, "Wrong size on SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP");
static_assert(offsetof(SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP, EntryPoint) == 0x000000, "Member 'SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP, CallFunc_SpawnForceFeedbackAtLocation_ReturnValue) == 0x000028, "Member 'SEQ_IW_Goblu_Demineur_Ambush_DirectorBP_C_ExecuteUbergraph_SEQ_IW_Goblu_Demineur_Ambush_DirectorBP::CallFunc_SpawnForceFeedbackAtLocation_ReturnValue' has a wrong offset!");

}

