﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleAudioCharacter_GetComponents

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_BattleAudioCharacter_GetComponents.BPI_BattleAudioCharacter_GetComponents_C.GetBattleAudioCharacterManager
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager final
{
public:
	class UBP_AudioCharacter_BattleManager_C*     AudioCharacterBattleManager;                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager) == 0x000008, "Wrong alignment on BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager");
static_assert(sizeof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager) == 0x000008, "Wrong size on BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager, AudioCharacterBattleManager) == 0x000000, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioCharacterManager::AudioCharacterBattleManager' has a wrong offset!");

// Function BPI_BattleAudioCharacter_GetComponents.BPI_BattleAudioCharacter_GetComponents_C.GetBattleAudioContainerComponents
// 0x0040 (0x0040 - 0x0000)
struct BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents final
{
public:
	class USceneComponent*                        SFX;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        weapon_l;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        weapon_r;                                          // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Foley;                                             // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Vocal;                                             // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        foot_l;                                            // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Foot_R;                                            // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        HitBy;                                             // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents) == 0x000008, "Wrong alignment on BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents");
static_assert(sizeof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents) == 0x000040, "Wrong size on BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, SFX) == 0x000000, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::SFX' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, weapon_l) == 0x000008, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::weapon_l' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, weapon_r) == 0x000010, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::weapon_r' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, Foley) == 0x000018, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::Foley' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, Vocal) == 0x000020, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::Vocal' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, foot_l) == 0x000028, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::foot_l' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, Foot_R) == 0x000030, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::Foot_R' has a wrong offset!");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents, HitBy) == 0x000038, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioContainerComponents::HitBy' has a wrong offset!");

// Function BPI_BattleAudioCharacter_GetComponents.BPI_BattleAudioCharacter_GetComponents_C.GetBattleAudioProfile
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile final
{
public:
	class UBP_DataAsset_CharacterBattleAudioProfile_C* AudioProfile;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile) == 0x000008, "Wrong alignment on BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile");
static_assert(sizeof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile) == 0x000008, "Wrong size on BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile");
static_assert(offsetof(BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile, AudioProfile) == 0x000000, "Member 'BPI_BattleAudioCharacter_GetComponents_C_GetBattleAudioProfile::AudioProfile' has a wrong offset!");

}

