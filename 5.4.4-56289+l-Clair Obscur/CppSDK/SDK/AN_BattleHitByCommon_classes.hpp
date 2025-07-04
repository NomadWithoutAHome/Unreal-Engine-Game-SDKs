﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_BattleHitByCommon

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_BattleHitByCommon.AN_BattleHitByCommon_C
// 0x0008 (0x0040 - 0x0038)
class UAN_BattleHitByCommon_C final : public UAnimNotify
{
public:
	class USoundAttenuation*                      AttnOverrideBattleHitByCommonEvent;                // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_BattleHitByCommon_C">();
	}
	static class UAN_BattleHitByCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_BattleHitByCommon_C>();
	}
};
static_assert(alignof(UAN_BattleHitByCommon_C) == 0x000008, "Wrong alignment on UAN_BattleHitByCommon_C");
static_assert(sizeof(UAN_BattleHitByCommon_C) == 0x000040, "Wrong size on UAN_BattleHitByCommon_C");
static_assert(offsetof(UAN_BattleHitByCommon_C, AttnOverrideBattleHitByCommonEvent) == 0x000038, "Member 'UAN_BattleHitByCommon_C::AttnOverrideBattleHitByCommonEvent' has a wrong offset!");

}

