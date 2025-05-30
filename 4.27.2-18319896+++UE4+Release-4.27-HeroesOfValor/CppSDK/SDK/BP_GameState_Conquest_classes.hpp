﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_Conquest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GameStateBase_classes.hpp"
#include "E_Teams_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameState_Conquest.BP_GameState_Conquest_C
// 0x0018 (0x0440 - 0x0428)
class ABP_GameState_Conquest_C final : public ABP_GameStateBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameState_Conquest_C;            // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         AlliedTickets;                                     // 0x0430(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AxisTickets;                                       // 0x0434(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTeamTicketAmount;                               // 0x0438(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GameState_Conquest(int32 EntryPoint);
	void OnKill(E_Teams Team);
	void ReceiveBeginPlay();
	void ReduceTickets(E_Teams Team, int32 Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameState_Conquest_C">();
	}
	static class ABP_GameState_Conquest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameState_Conquest_C>();
	}
};
static_assert(alignof(ABP_GameState_Conquest_C) == 0x000008, "Wrong alignment on ABP_GameState_Conquest_C");
static_assert(sizeof(ABP_GameState_Conquest_C) == 0x000440, "Wrong size on ABP_GameState_Conquest_C");
static_assert(offsetof(ABP_GameState_Conquest_C, UberGraphFrame_BP_GameState_Conquest_C) == 0x000428, "Member 'ABP_GameState_Conquest_C::UberGraphFrame_BP_GameState_Conquest_C' has a wrong offset!");
static_assert(offsetof(ABP_GameState_Conquest_C, AlliedTickets) == 0x000430, "Member 'ABP_GameState_Conquest_C::AlliedTickets' has a wrong offset!");
static_assert(offsetof(ABP_GameState_Conquest_C, AxisTickets) == 0x000434, "Member 'ABP_GameState_Conquest_C::AxisTickets' has a wrong offset!");
static_assert(offsetof(ABP_GameState_Conquest_C, MaxTeamTicketAmount) == 0x000438, "Member 'ABP_GameState_Conquest_C::MaxTeamTicketAmount' has a wrong offset!");

}

