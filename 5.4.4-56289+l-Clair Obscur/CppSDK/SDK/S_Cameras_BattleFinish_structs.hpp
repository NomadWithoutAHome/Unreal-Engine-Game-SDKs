﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Cameras_BattleFinish

#include "Basic.hpp"

#include "EDamageReason_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_Cameras_BattleFinish.S_Cameras_BattleFinish
// 0x0018 (0x0018 - 0x0000)
struct FS_Cameras_BattleFinish final
{
public:
	EDamageReason                                 Reason_3_9243B81648A937FEADB9B3A1A8D91997;         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCameraAnimationSequence*>       CameraAnimations_6_E041D3CB490412168412CDB90B9BC258; // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_Cameras_BattleFinish) == 0x000008, "Wrong alignment on FS_Cameras_BattleFinish");
static_assert(sizeof(FS_Cameras_BattleFinish) == 0x000018, "Wrong size on FS_Cameras_BattleFinish");
static_assert(offsetof(FS_Cameras_BattleFinish, Reason_3_9243B81648A937FEADB9B3A1A8D91997) == 0x000000, "Member 'FS_Cameras_BattleFinish::Reason_3_9243B81648A937FEADB9B3A1A8D91997' has a wrong offset!");
static_assert(offsetof(FS_Cameras_BattleFinish, CameraAnimations_6_E041D3CB490412168412CDB90B9BC258) == 0x000008, "Member 'FS_Cameras_BattleFinish::CameraAnimations_6_E041D3CB490412168412CDB90B9BC258' has a wrong offset!");

}

