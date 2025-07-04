﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CampState

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "S_CampCharacterState_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_CampState.S_CampState
// 0x00A0 (0x00A0 - 0x0000)
struct FS_CampState final
{
public:
	TMap<struct FGameplayTag, struct FS_CampCharacterState> CharactersStates_4_0BABCE334BEF66E6E7337C9D3A2FEB4E; // 0x0000(0x0050)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UGameAction>             GameActionOnLevelStartSoft_17_646A3EEE45CD0E4F142B9587870FBCFB; // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UGameAction>             GameActionOnGoingToSleepSoft_19_B6FC81534DE1C3AECB21DD97C49219DC; // 0x0078(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_CampState) == 0x000008, "Wrong alignment on FS_CampState");
static_assert(sizeof(FS_CampState) == 0x0000A0, "Wrong size on FS_CampState");
static_assert(offsetof(FS_CampState, CharactersStates_4_0BABCE334BEF66E6E7337C9D3A2FEB4E) == 0x000000, "Member 'FS_CampState::CharactersStates_4_0BABCE334BEF66E6E7337C9D3A2FEB4E' has a wrong offset!");
static_assert(offsetof(FS_CampState, GameActionOnLevelStartSoft_17_646A3EEE45CD0E4F142B9587870FBCFB) == 0x000050, "Member 'FS_CampState::GameActionOnLevelStartSoft_17_646A3EEE45CD0E4F142B9587870FBCFB' has a wrong offset!");
static_assert(offsetof(FS_CampState, GameActionOnGoingToSleepSoft_19_B6FC81534DE1C3AECB21DD97C49219DC) == 0x000078, "Member 'FS_CampState::GameActionOnGoingToSleepSoft_19_B6FC81534DE1C3AECB21DD97C49219DC' has a wrong offset!");

}

