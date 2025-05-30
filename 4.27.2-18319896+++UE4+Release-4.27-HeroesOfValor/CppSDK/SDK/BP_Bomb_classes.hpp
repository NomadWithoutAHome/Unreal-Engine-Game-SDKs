﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bomb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ProjectileBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bomb.BP_Bomb_C
// 0x0000 (0x0560 - 0x0560)
class ABP_Bomb_C final : public ABP_ProjectileBase_C
{
public:
	uint8                                         Pad_554[0x4];                                      // 0x0554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Bomb_C;                          // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Bomb(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bomb_C">();
	}
	static class ABP_Bomb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bomb_C>();
	}
};
static_assert(alignof(ABP_Bomb_C) == 0x000010, "Wrong alignment on ABP_Bomb_C");
static_assert(sizeof(ABP_Bomb_C) == 0x000560, "Wrong size on ABP_Bomb_C");
static_assert(offsetof(ABP_Bomb_C, UberGraphFrame_BP_Bomb_C) == 0x000558, "Member 'ABP_Bomb_C::UberGraphFrame_BP_Bomb_C' has a wrong offset!");

}

