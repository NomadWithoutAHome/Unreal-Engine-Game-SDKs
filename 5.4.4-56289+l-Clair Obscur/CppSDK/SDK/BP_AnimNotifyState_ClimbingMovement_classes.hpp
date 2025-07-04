﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotifyState_ClimbingMovement

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotifyState_ClimbingMovement.BP_AnimNotifyState_ClimbingMovement_C
// 0x0000 (0x0038 - 0x0038)
class UBP_AnimNotifyState_ClimbingMovement_C final : public UAnimNotifyState
{
public:
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotifyState_ClimbingMovement_C">();
	}
	static class UBP_AnimNotifyState_ClimbingMovement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotifyState_ClimbingMovement_C>();
	}
};
static_assert(alignof(UBP_AnimNotifyState_ClimbingMovement_C) == 0x000008, "Wrong alignment on UBP_AnimNotifyState_ClimbingMovement_C");
static_assert(sizeof(UBP_AnimNotifyState_ClimbingMovement_C) == 0x000038, "Wrong size on UBP_AnimNotifyState_ClimbingMovement_C");

}

