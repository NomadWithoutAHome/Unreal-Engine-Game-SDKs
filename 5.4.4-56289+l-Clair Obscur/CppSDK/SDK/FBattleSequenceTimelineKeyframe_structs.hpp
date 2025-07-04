﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FBattleSequenceTimelineKeyframe

#include "Basic.hpp"

#include "EBattleActionEvent_structs.hpp"
#include "SandFall_structs.hpp"


namespace SDK
{

// UserDefinedStruct FBattleSequenceTimelineKeyframe.FBattleSequenceTimelineKeyframe
// 0x0002 (0x0002 - 0x0000)
struct FFBattleSequenceTimelineKeyframe final
{
public:
	EBattleActionEvent                            ActionType_7_0B741BF041C3787D2F89AEB5282B2A8B;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBattleSequenceCameraType                     CameraType_5_E520317B4EE1DCFF90D41193B1E41A87;     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFBattleSequenceTimelineKeyframe) == 0x000001, "Wrong alignment on FFBattleSequenceTimelineKeyframe");
static_assert(sizeof(FFBattleSequenceTimelineKeyframe) == 0x000002, "Wrong size on FFBattleSequenceTimelineKeyframe");
static_assert(offsetof(FFBattleSequenceTimelineKeyframe, ActionType_7_0B741BF041C3787D2F89AEB5282B2A8B) == 0x000000, "Member 'FFBattleSequenceTimelineKeyframe::ActionType_7_0B741BF041C3787D2F89AEB5282B2A8B' has a wrong offset!");
static_assert(offsetof(FFBattleSequenceTimelineKeyframe, CameraType_5_E520317B4EE1DCFF90D41193B1E41A87) == 0x000001, "Member 'FFBattleSequenceTimelineKeyframe::CameraType_5_E520317B4EE1DCFF90D41193B1E41A87' has a wrong offset!");

}

