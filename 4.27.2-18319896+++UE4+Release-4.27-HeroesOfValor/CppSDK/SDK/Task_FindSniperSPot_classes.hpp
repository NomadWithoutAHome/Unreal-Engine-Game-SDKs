﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_FindSniperSPot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_Teams_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_FindSniperSPot.Task_FindSniperSpot_C
// 0x0028 (0x00D0 - 0x00A8)
class UTask_FindSniperSpot_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          CanMoveToAnotherSpot;                              // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastTimeInSeconds;                                 // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocationAssignTime;                                // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeToStayAtLocation;                              // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SniperSpotLocation;                                // 0x00C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ArrivedAtLocation;                                 // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Task_FindSniperSpot(int32 EntryPoint);
	void CustomEvent(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_FindSniperSpot_C">();
	}
	static class UTask_FindSniperSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTask_FindSniperSpot_C>();
	}
};
static_assert(alignof(UTask_FindSniperSpot_C) == 0x000008, "Wrong alignment on UTask_FindSniperSpot_C");
static_assert(sizeof(UTask_FindSniperSpot_C) == 0x0000D0, "Wrong size on UTask_FindSniperSpot_C");
static_assert(offsetof(UTask_FindSniperSpot_C, UberGraphFrame) == 0x0000A8, "Member 'UTask_FindSniperSpot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTask_FindSniperSpot_C, CanMoveToAnotherSpot) == 0x0000B0, "Member 'UTask_FindSniperSpot_C::CanMoveToAnotherSpot' has a wrong offset!");
static_assert(offsetof(UTask_FindSniperSpot_C, LastTimeInSeconds) == 0x0000B4, "Member 'UTask_FindSniperSpot_C::LastTimeInSeconds' has a wrong offset!");
static_assert(offsetof(UTask_FindSniperSpot_C, LocationAssignTime) == 0x0000B8, "Member 'UTask_FindSniperSpot_C::LocationAssignTime' has a wrong offset!");
static_assert(offsetof(UTask_FindSniperSpot_C, TimeToStayAtLocation) == 0x0000BC, "Member 'UTask_FindSniperSpot_C::TimeToStayAtLocation' has a wrong offset!");
static_assert(offsetof(UTask_FindSniperSpot_C, SniperSpotLocation) == 0x0000C0, "Member 'UTask_FindSniperSpot_C::SniperSpotLocation' has a wrong offset!");
static_assert(offsetof(UTask_FindSniperSpot_C, ArrivedAtLocation) == 0x0000CC, "Member 'UTask_FindSniperSpot_C::ArrivedAtLocation' has a wrong offset!");

}

