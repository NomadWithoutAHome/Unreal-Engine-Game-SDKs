﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EnemyKill_Box

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EnemyKill_Box.WBP_EnemyKill_Box_C
// 0x0008 (0x02E8 - 0x02E0)
class UWBP_EnemyKill_Box_C final : public UUserWidget
{
public:
	class UDynamicEntryBox*                       DynamicEntryBox_Kills;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void FlushKilledEnemies();
	void LoadKilledEnemies(TArray<class ABP_jRPG_Character_Battle_Base_C*>& CharacterBattleBases);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnemyKill_Box_C">();
	}
	static class UWBP_EnemyKill_Box_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnemyKill_Box_C>();
	}
};
static_assert(alignof(UWBP_EnemyKill_Box_C) == 0x000008, "Wrong alignment on UWBP_EnemyKill_Box_C");
static_assert(sizeof(UWBP_EnemyKill_Box_C) == 0x0002E8, "Wrong size on UWBP_EnemyKill_Box_C");
static_assert(offsetof(UWBP_EnemyKill_Box_C, DynamicEntryBox_Kills) == 0x0002E0, "Member 'UWBP_EnemyKill_Box_C::DynamicEntryBox_Kills' has a wrong offset!");

}

