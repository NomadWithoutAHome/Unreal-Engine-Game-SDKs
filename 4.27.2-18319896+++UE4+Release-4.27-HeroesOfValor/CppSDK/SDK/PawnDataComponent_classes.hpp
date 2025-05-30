﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PawnDataComponent

#include "Basic.hpp"

#include "E_Teams_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PawnDataComponent.PawnDataComponent_C
// 0x0020 (0x0220 - 0x0200)
class UPawnDataComponent_C final : public USceneComponent
{
public:
	uint8                                         Pad_1F8[0x8];                                      // 0x01F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	E_Teams                                       Team;                                              // 0x0200(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              TeamChanged;                                       // 0x0208(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PlayerIndex;                                       // 0x0218(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeamSet;                                           // 0x021C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRep_Team();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PawnDataComponent_C">();
	}
	static class UPawnDataComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnDataComponent_C>();
	}
};
static_assert(alignof(UPawnDataComponent_C) == 0x000010, "Wrong alignment on UPawnDataComponent_C");
static_assert(sizeof(UPawnDataComponent_C) == 0x000220, "Wrong size on UPawnDataComponent_C");
static_assert(offsetof(UPawnDataComponent_C, Team) == 0x000200, "Member 'UPawnDataComponent_C::Team' has a wrong offset!");
static_assert(offsetof(UPawnDataComponent_C, TeamChanged) == 0x000208, "Member 'UPawnDataComponent_C::TeamChanged' has a wrong offset!");
static_assert(offsetof(UPawnDataComponent_C, PlayerIndex) == 0x000218, "Member 'UPawnDataComponent_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UPawnDataComponent_C, TeamSet) == 0x00021C, "Member 'UPawnDataComponent_C::TeamSet' has a wrong offset!");

}

