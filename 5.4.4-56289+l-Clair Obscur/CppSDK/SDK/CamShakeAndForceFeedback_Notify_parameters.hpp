﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CamShakeAndForceFeedback_Notify

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CamShakeAndForceFeedback_Notify.CamShakeAndForceFeedback_Notify_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct CamShakeAndForceFeedback_Notify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ClientStartCameraShake_Scale_ImplicitCast; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CamShakeAndForceFeedback_Notify_C_Received_Notify) == 0x000008, "Wrong alignment on CamShakeAndForceFeedback_Notify_C_Received_Notify");
static_assert(sizeof(CamShakeAndForceFeedback_Notify_C_Received_Notify) == 0x000060, "Wrong size on CamShakeAndForceFeedback_Notify_C_Received_Notify");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, MeshComp) == 0x000000, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, Animation) == 0x000008, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, EventReference) == 0x000010, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, ReturnValue) == 0x000040, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, CallFunc_GetPlayerController_ReturnValue_1) == 0x000050, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CamShakeAndForceFeedback_Notify_C_Received_Notify, CallFunc_ClientStartCameraShake_Scale_ImplicitCast) == 0x000058, "Member 'CamShakeAndForceFeedback_Notify_C_Received_Notify::CallFunc_ClientStartCameraShake_Scale_ImplicitCast' has a wrong offset!");

}

