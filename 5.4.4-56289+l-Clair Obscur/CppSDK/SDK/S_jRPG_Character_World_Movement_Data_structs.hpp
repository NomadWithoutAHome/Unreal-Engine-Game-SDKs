﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_jRPG_Character_World_Movement_Data

#include "Basic.hpp"

#include "ALSV4_CPP_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_jRPG_Character_World_Movement_Data.S_jRPG_Character_World_Movement_Data
// 0x0010 (0x0010 - 0x0000)
struct FS_jRPG_Character_World_Movement_Data final
{
public:
	double                                        MaxSpeed_2_FD57600C48A996248A26988229CE9798;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALSOverlayState                              Overlay_10_983149204DC04E193C582C9703F8156C;       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALSGait                                      Gait_9_2457472E44F9274460916A8A739B0AA2;           // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LimitAllowedGait_12_992B44694256C6E34BF937B48F51AC8E; // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_jRPG_Character_World_Movement_Data) == 0x000008, "Wrong alignment on FS_jRPG_Character_World_Movement_Data");
static_assert(sizeof(FS_jRPG_Character_World_Movement_Data) == 0x000010, "Wrong size on FS_jRPG_Character_World_Movement_Data");
static_assert(offsetof(FS_jRPG_Character_World_Movement_Data, MaxSpeed_2_FD57600C48A996248A26988229CE9798) == 0x000000, "Member 'FS_jRPG_Character_World_Movement_Data::MaxSpeed_2_FD57600C48A996248A26988229CE9798' has a wrong offset!");
static_assert(offsetof(FS_jRPG_Character_World_Movement_Data, Overlay_10_983149204DC04E193C582C9703F8156C) == 0x000008, "Member 'FS_jRPG_Character_World_Movement_Data::Overlay_10_983149204DC04E193C582C9703F8156C' has a wrong offset!");
static_assert(offsetof(FS_jRPG_Character_World_Movement_Data, Gait_9_2457472E44F9274460916A8A739B0AA2) == 0x000009, "Member 'FS_jRPG_Character_World_Movement_Data::Gait_9_2457472E44F9274460916A8A739B0AA2' has a wrong offset!");
static_assert(offsetof(FS_jRPG_Character_World_Movement_Data, LimitAllowedGait_12_992B44694256C6E34BF937B48F51AC8E) == 0x00000A, "Member 'FS_jRPG_Character_World_Movement_Data::LimitAllowedGait_12_992B44694256C6E34BF937B48F51AC8E' has a wrong offset!");

}

