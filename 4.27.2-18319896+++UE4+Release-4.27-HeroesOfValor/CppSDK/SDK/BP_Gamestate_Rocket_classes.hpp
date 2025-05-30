﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Gamestate_Rocket

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GameStateBase_classes.hpp"
#include "E_Teams_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Gamestate_Rocket.BP_Gamestate_Rocket_C
// 0x0020 (0x0448 - 0x0428)
class ABP_Gamestate_Rocket_C final : public ABP_GameStateBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Gamestate_Rocket_C;              // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class BP_Rocket_0::ABP_Rocket_C*              RocketRef;                                         // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AxisTimer;                                         // 0x0438(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AlliedTimer;                                       // 0x043C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTeamTimerAmount;                                // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Gamestate_Rocket(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReduceTickets(E_Teams Team, int32 Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Gamestate_Rocket_C">();
	}
	static class ABP_Gamestate_Rocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Gamestate_Rocket_C>();
	}
};
static_assert(alignof(ABP_Gamestate_Rocket_C) == 0x000008, "Wrong alignment on ABP_Gamestate_Rocket_C");
static_assert(sizeof(ABP_Gamestate_Rocket_C) == 0x000448, "Wrong size on ABP_Gamestate_Rocket_C");
static_assert(offsetof(ABP_Gamestate_Rocket_C, UberGraphFrame_BP_Gamestate_Rocket_C) == 0x000428, "Member 'ABP_Gamestate_Rocket_C::UberGraphFrame_BP_Gamestate_Rocket_C' has a wrong offset!");
static_assert(offsetof(ABP_Gamestate_Rocket_C, RocketRef) == 0x000430, "Member 'ABP_Gamestate_Rocket_C::RocketRef' has a wrong offset!");
static_assert(offsetof(ABP_Gamestate_Rocket_C, AxisTimer) == 0x000438, "Member 'ABP_Gamestate_Rocket_C::AxisTimer' has a wrong offset!");
static_assert(offsetof(ABP_Gamestate_Rocket_C, AlliedTimer) == 0x00043C, "Member 'ABP_Gamestate_Rocket_C::AlliedTimer' has a wrong offset!");
static_assert(offsetof(ABP_Gamestate_Rocket_C, MaxTeamTimerAmount) == 0x000440, "Member 'ABP_Gamestate_Rocket_C::MaxTeamTimerAmount' has a wrong offset!");

}

