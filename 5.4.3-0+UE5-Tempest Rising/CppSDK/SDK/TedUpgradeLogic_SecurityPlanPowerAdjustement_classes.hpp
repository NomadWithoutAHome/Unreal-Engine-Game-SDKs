﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedUpgradeLogic_SecurityPlanPowerAdjustement

#include "Basic.hpp"

#include "TedUpgradeLogic_PlanPowerAdjustement_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedUpgradeLogic_SecurityPlanPowerAdjustement.TedUpgradeLogic_SecurityPlanPowerAdjustement_C
// 0x0000 (0x0050 - 0x0050)
class UTedUpgradeLogic_SecurityPlanPowerAdjustement_C final : public UTedUpgradeLogic_PlanPowerAdjustement_C
{
public:
	void K2_ApplyUpgrade(const struct FTedActiveUpgrade& InActiveUpgrade) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedUpgradeLogic_SecurityPlanPowerAdjustement_C">();
	}
	static class UTedUpgradeLogic_SecurityPlanPowerAdjustement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedUpgradeLogic_SecurityPlanPowerAdjustement_C>();
	}
};
static_assert(alignof(UTedUpgradeLogic_SecurityPlanPowerAdjustement_C) == 0x000008, "Wrong alignment on UTedUpgradeLogic_SecurityPlanPowerAdjustement_C");
static_assert(sizeof(UTedUpgradeLogic_SecurityPlanPowerAdjustement_C) == 0x000050, "Wrong size on UTedUpgradeLogic_SecurityPlanPowerAdjustement_C");

}

