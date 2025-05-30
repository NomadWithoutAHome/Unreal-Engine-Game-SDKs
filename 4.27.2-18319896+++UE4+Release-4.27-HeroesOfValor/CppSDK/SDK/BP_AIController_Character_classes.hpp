﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIController_Character

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIControllerBase_classes.hpp"
#include "E_Units_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIController_Character.BP_AIController_Character_C
// 0x0008 (0x0368 - 0x0360)
class ABP_AIController_Character_C final : public ABP_AIControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIController_Character_C;        // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AIController_Character(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIController_Character_C">();
	}
	static class ABP_AIController_Character_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AIController_Character_C>();
	}
};
static_assert(alignof(ABP_AIController_Character_C) == 0x000008, "Wrong alignment on ABP_AIController_Character_C");
static_assert(sizeof(ABP_AIController_Character_C) == 0x000368, "Wrong size on ABP_AIController_Character_C");
static_assert(offsetof(ABP_AIController_Character_C, UberGraphFrame_BP_AIController_Character_C) == 0x000360, "Member 'ABP_AIController_Character_C::UberGraphFrame_BP_AIController_Character_C' has a wrong offset!");

}

