﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_ProjectConfiguration

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_DataAsset_ProjectConfiguration.BP_DataAsset_ProjectConfiguration_C.GetMainMenuLevel
// 0x0028 (0x0028 - 0x0000)
struct BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel final
{
public:
	TSoftObjectPtr<class UWorld>                  MainMenuLevel_0;                                   // 0x0000(0x0028)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel) == 0x000008, "Wrong alignment on BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel");
static_assert(sizeof(BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel) == 0x000028, "Wrong size on BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel");
static_assert(offsetof(BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel, MainMenuLevel_0) == 0x000000, "Member 'BP_DataAsset_ProjectConfiguration_C_GetMainMenuLevel::MainMenuLevel_0' has a wrong offset!");

// Function BP_DataAsset_ProjectConfiguration.BP_DataAsset_ProjectConfiguration_C.GetNewGameLevel
// 0x0028 (0x0028 - 0x0000)
struct BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel final
{
public:
	TSoftObjectPtr<class UWorld>                  LevelDestination;                                  // 0x0000(0x0028)(ConstParm, Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel) == 0x000008, "Wrong alignment on BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel");
static_assert(sizeof(BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel) == 0x000028, "Wrong size on BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel");
static_assert(offsetof(BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel, LevelDestination) == 0x000000, "Member 'BP_DataAsset_ProjectConfiguration_C_GetNewGameLevel::LevelDestination' has a wrong offset!");

// Function BP_DataAsset_ProjectConfiguration.BP_DataAsset_ProjectConfiguration_C.GetNewGameSpawnPointTag
// 0x0008 (0x0008 - 0x0000)
struct BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag final
{
public:
	struct FGameplayTag                           SpawnPointTag;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag) == 0x000004, "Wrong alignment on BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag");
static_assert(sizeof(BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag) == 0x000008, "Wrong size on BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag");
static_assert(offsetof(BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag, SpawnPointTag) == 0x000000, "Member 'BP_DataAsset_ProjectConfiguration_C_GetNewGameSpawnPointTag::SpawnPointTag' has a wrong offset!");

}

