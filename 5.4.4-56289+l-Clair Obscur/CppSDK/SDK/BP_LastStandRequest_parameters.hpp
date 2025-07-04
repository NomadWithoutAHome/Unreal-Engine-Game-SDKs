﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LastStandRequest

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LastStandRequest.BP_LastStandRequest_C.RequestLastStand
// 0x0010 (0x0010 - 0x0000)
struct BP_LastStandRequest_C_RequestLastStand final
{
public:
	TDelegate<void()>                             StartLastStand;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LastStandRequest_C_RequestLastStand) == 0x000004, "Wrong alignment on BP_LastStandRequest_C_RequestLastStand");
static_assert(sizeof(BP_LastStandRequest_C_RequestLastStand) == 0x000010, "Wrong size on BP_LastStandRequest_C_RequestLastStand");
static_assert(offsetof(BP_LastStandRequest_C_RequestLastStand, StartLastStand) == 0x000000, "Member 'BP_LastStandRequest_C_RequestLastStand::StartLastStand' has a wrong offset!");

}

