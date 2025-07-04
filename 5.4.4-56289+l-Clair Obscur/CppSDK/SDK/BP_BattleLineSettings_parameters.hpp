﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleLineSettings

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BattleLineSettings.BP_BattleLineSettings_C.RollChanceValue
// 0x0020 (0x0020 - 0x0000)
struct BP_BattleLineSettings_C_RollChanceValue final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleLineSettings_C_RollChanceValue) == 0x000008, "Wrong alignment on BP_BattleLineSettings_C_RollChanceValue");
static_assert(sizeof(BP_BattleLineSettings_C_RollChanceValue) == 0x000020, "Wrong size on BP_BattleLineSettings_C_RollChanceValue");
static_assert(offsetof(BP_BattleLineSettings_C_RollChanceValue, Percent) == 0x000000, "Member 'BP_BattleLineSettings_C_RollChanceValue::Percent' has a wrong offset!");
static_assert(offsetof(BP_BattleLineSettings_C_RollChanceValue, ReturnValue) == 0x000008, "Member 'BP_BattleLineSettings_C_RollChanceValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLineSettings_C_RollChanceValue, CallFunc_RandomFloatInRange_ReturnValue) == 0x000010, "Member 'BP_BattleLineSettings_C_RollChanceValue::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleLineSettings_C_RollChanceValue, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_BattleLineSettings_C_RollChanceValue::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");

}

