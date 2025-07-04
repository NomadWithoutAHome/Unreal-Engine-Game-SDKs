﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIController_AICompanion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIController_AICompanion.BP_AIController_AICompanion_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_AIController_AICompanion_C final : public AAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActivateAICompanions();
	void DeactivateAICompanions();
	void ExecuteUbergraph_BP_AIController_AICompanion(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIController_AICompanion_C">();
	}
	static class ABP_AIController_AICompanion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AIController_AICompanion_C>();
	}
};
static_assert(alignof(ABP_AIController_AICompanion_C) == 0x000008, "Wrong alignment on ABP_AIController_AICompanion_C");
static_assert(sizeof(ABP_AIController_AICompanion_C) == 0x0003C0, "Wrong size on ABP_AIController_AICompanion_C");
static_assert(offsetof(ABP_AIController_AICompanion_C, UberGraphFrame) == 0x0003B8, "Member 'ABP_AIController_AICompanion_C::UberGraphFrame' has a wrong offset!");

}

