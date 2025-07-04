﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_EnemyScalingHelpers

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_jRPG_StatType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FL_EnemyScalingHelpers.FL_EnemyScalingHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UFL_EnemyScalingHelpers_C final : public UBlueprintFunctionLibrary
{
public:
	static void FindArchetypeEncounterLevelRow(class UDataTable* ArchetypeDT, int32 EncounterLevel, class UObject* __WorldContext, struct FS_EnemyScalingDataLevel* ScalingDataLevel);
	static void ComputeCharacterStats(class UDataTable* ArchetypeDT, int32 EncounterLevel, const struct FS_EnemyScalingMultipliers& StatMultipliers, class UObject* __WorldContext, TMap<E_jRPG_StatType, double>* Stats, int32* Chroma, int32* Experience);
	static int32 GetEncounterLevelFromMap(int32 EncounterLevelOverride, class UObject* __WorldContext);
	static int32 GetAdditionalEncounterLevelWithNewGamePlus(class UObject* __WorldContext);
	static void GetTeamLevel(class UObject* __WorldContext, int32* MaxValue);
	static int32 GetEncounterLevel(int32 EncounterLevelOverride, class UObject* __WorldContext);
	static void ComputeEncounterLevelForBattle(const struct FS_jRPG_Encounter& Encounter, int32 EncounterLevelOffset, class UObject* __WorldContext, int32* EncounterLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FL_EnemyScalingHelpers_C">();
	}
	static class UFL_EnemyScalingHelpers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFL_EnemyScalingHelpers_C>();
	}
};
static_assert(alignof(UFL_EnemyScalingHelpers_C) == 0x000008, "Wrong alignment on UFL_EnemyScalingHelpers_C");
static_assert(sizeof(UFL_EnemyScalingHelpers_C) == 0x000028, "Wrong size on UFL_EnemyScalingHelpers_C");

}

