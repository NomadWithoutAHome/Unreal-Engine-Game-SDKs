﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FL_GameDifficultyHelpers

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_GameDifficulty_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FL_GameDifficultyHelpers.BP_FL_GameDifficultyHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FL_GameDifficultyHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static class UDataTable* GetArchetypeScalingDataTableForBattle(class UBP_DataAsset_EnemyBattleArchetype_C* EnemyArchetype, class UAC_jRPG_BattleManager_C* BattleManager, class UObject* __WorldContext);
	static E_GameDifficulty GetGameDifficulty(class UObject* __WorldContext);
	static class UBP_GameDifficultyManager_C* GetDifficultyManager(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FL_GameDifficultyHelpers_C">();
	}
	static class UBP_FL_GameDifficultyHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FL_GameDifficultyHelpers_C>();
	}
};
static_assert(alignof(UBP_FL_GameDifficultyHelpers_C) == 0x000008, "Wrong alignment on UBP_FL_GameDifficultyHelpers_C");
static_assert(sizeof(UBP_FL_GameDifficultyHelpers_C) == 0x000028, "Wrong size on UBP_FL_GameDifficultyHelpers_C");

}

