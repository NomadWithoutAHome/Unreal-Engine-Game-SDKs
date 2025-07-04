﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_jRPG_WorldCharacters

#include "Basic.hpp"

#include "E_CharacterList_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_jRPG_WorldCharacters.S_jRPG_WorldCharacters
// 0x0030 (0x0030 - 0x0000)
struct FS_jRPG_WorldCharacters final
{
public:
	class FName                                   CharacterName_22_E1B3ACA7402C90D1A471BB8CB4D8FCB8; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CharacterList                               CharacterNameEnum_57_7935D2084EEF61BD8CB17181906A5044; // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DataAsset_CameraConfig_C*           CameraConfig_60_3E47412845D89B742E0A1DB03C878891;  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_DataAsset_CameraConfig_C*           CrouchCameraConfig_66_DE1B41E842FC3B1A82DFCB817295B6C2; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_DataAsset_CameraConfig_C*           FreeAimCameraConfig_63_12FEF2854DAF7AC324B0C7B4A30E6945; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_DataAsset_CameraConfig_C*           DialogueCameraConfig_69_D459318A46A8DF5BE01C89BF87924928; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_jRPG_WorldCharacters) == 0x000008, "Wrong alignment on FS_jRPG_WorldCharacters");
static_assert(sizeof(FS_jRPG_WorldCharacters) == 0x000030, "Wrong size on FS_jRPG_WorldCharacters");
static_assert(offsetof(FS_jRPG_WorldCharacters, CharacterName_22_E1B3ACA7402C90D1A471BB8CB4D8FCB8) == 0x000000, "Member 'FS_jRPG_WorldCharacters::CharacterName_22_E1B3ACA7402C90D1A471BB8CB4D8FCB8' has a wrong offset!");
static_assert(offsetof(FS_jRPG_WorldCharacters, CharacterNameEnum_57_7935D2084EEF61BD8CB17181906A5044) == 0x000008, "Member 'FS_jRPG_WorldCharacters::CharacterNameEnum_57_7935D2084EEF61BD8CB17181906A5044' has a wrong offset!");
static_assert(offsetof(FS_jRPG_WorldCharacters, CameraConfig_60_3E47412845D89B742E0A1DB03C878891) == 0x000010, "Member 'FS_jRPG_WorldCharacters::CameraConfig_60_3E47412845D89B742E0A1DB03C878891' has a wrong offset!");
static_assert(offsetof(FS_jRPG_WorldCharacters, CrouchCameraConfig_66_DE1B41E842FC3B1A82DFCB817295B6C2) == 0x000018, "Member 'FS_jRPG_WorldCharacters::CrouchCameraConfig_66_DE1B41E842FC3B1A82DFCB817295B6C2' has a wrong offset!");
static_assert(offsetof(FS_jRPG_WorldCharacters, FreeAimCameraConfig_63_12FEF2854DAF7AC324B0C7B4A30E6945) == 0x000020, "Member 'FS_jRPG_WorldCharacters::FreeAimCameraConfig_63_12FEF2854DAF7AC324B0C7B4A30E6945' has a wrong offset!");
static_assert(offsetof(FS_jRPG_WorldCharacters, DialogueCameraConfig_69_D459318A46A8DF5BE01C89BF87924928) == 0x000028, "Member 'FS_jRPG_WorldCharacters::DialogueCameraConfig_69_D459318A46A8DF5BE01C89BF87924928' has a wrong offset!");

}

