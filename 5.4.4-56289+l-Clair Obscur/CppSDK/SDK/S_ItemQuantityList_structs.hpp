﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ItemQuantityList

#include "Basic.hpp"

#include "S_ItemQuantity_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ItemQuantityList.S_ItemQuantityList
// 0x0010 (0x0010 - 0x0000)
struct FS_ItemQuantityList final
{
public:
	TArray<struct FS_ItemQuantity>                ItemQuantities_8_591007CD4653E6487B6691997C4D4026; // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_ItemQuantityList) == 0x000008, "Wrong alignment on FS_ItemQuantityList");
static_assert(sizeof(FS_ItemQuantityList) == 0x000010, "Wrong size on FS_ItemQuantityList");
static_assert(offsetof(FS_ItemQuantityList, ItemQuantities_8_591007CD4653E6487B6691997C4D4026) == 0x000000, "Member 'FS_ItemQuantityList::ItemQuantities_8_591007CD4653E6487B6691997C4D4026' has a wrong offset!");

}

