﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EntitlementData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_EntitlementData.S_EntitlementData
// 0x0030 (0x0030 - 0x0000)
struct FS_EntitlementData final
{
public:
	class FName                                   MainID_20_4787076947B89767A3C7169B0F94941D;        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Aliases_21_7466CD2C42616FF7E802C78032F074A8;       // 0x0008(0x0010)(Edit, BlueprintVisible)
	class FText                                   DisplayName_5_AB64A64E450A841648F37EB6E39A0CCE;    // 0x0018(0x0010)(Edit, BlueprintVisible)
	class UBP_EntitlementDataUpdaterBase_C*       EntitlementDataUpdater_13_9729202D494CEC2102A9659BB7A12CB5; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_EntitlementData) == 0x000008, "Wrong alignment on FS_EntitlementData");
static_assert(sizeof(FS_EntitlementData) == 0x000030, "Wrong size on FS_EntitlementData");
static_assert(offsetof(FS_EntitlementData, MainID_20_4787076947B89767A3C7169B0F94941D) == 0x000000, "Member 'FS_EntitlementData::MainID_20_4787076947B89767A3C7169B0F94941D' has a wrong offset!");
static_assert(offsetof(FS_EntitlementData, Aliases_21_7466CD2C42616FF7E802C78032F074A8) == 0x000008, "Member 'FS_EntitlementData::Aliases_21_7466CD2C42616FF7E802C78032F074A8' has a wrong offset!");
static_assert(offsetof(FS_EntitlementData, DisplayName_5_AB64A64E450A841648F37EB6E39A0CCE) == 0x000018, "Member 'FS_EntitlementData::DisplayName_5_AB64A64E450A841648F37EB6E39A0CCE' has a wrong offset!");
static_assert(offsetof(FS_EntitlementData, EntitlementDataUpdater_13_9729202D494CEC2102A9659BB7A12CB5) == 0x000028, "Member 'FS_EntitlementData::EntitlementDataUpdater_13_9729202D494CEC2102A9659BB7A12CB5' has a wrong offset!");

}

