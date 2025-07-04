﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraShake_Notify

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CameraShake_Notify.CameraShake_Notify_C
// 0x0018 (0x0050 - 0x0038)
class UCameraShake_Notify_C final : public UAnimNotify
{
public:
	class UClass*                                 ShakeClass;                                        // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   Force_Feedback_Effect;                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShake_Notify_C">();
	}
	static class UCameraShake_Notify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraShake_Notify_C>();
	}
};
static_assert(alignof(UCameraShake_Notify_C) == 0x000008, "Wrong alignment on UCameraShake_Notify_C");
static_assert(sizeof(UCameraShake_Notify_C) == 0x000050, "Wrong size on UCameraShake_Notify_C");
static_assert(offsetof(UCameraShake_Notify_C, ShakeClass) == 0x000038, "Member 'UCameraShake_Notify_C::ShakeClass' has a wrong offset!");
static_assert(offsetof(UCameraShake_Notify_C, Scale) == 0x000040, "Member 'UCameraShake_Notify_C::Scale' has a wrong offset!");
static_assert(offsetof(UCameraShake_Notify_C, Force_Feedback_Effect) == 0x000048, "Member 'UCameraShake_Notify_C::Force_Feedback_Effect' has a wrong offset!");

}

