﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_ServerManagerPlayerInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_ServerManagerPlayerInfo.ST_ServerManagerPlayerInfo
// 0x0020 (0x0020 - 0x0000)
struct FST_ServerManagerPlayerInfo final
{
public:
	class FString                                 SteamID_2_372E8E5647AB2E117B7DAA9423FDB703;        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LastUsername_6_71C2EFE14AEF3D30A8B8A2827FA335F9;   // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_ServerManagerPlayerInfo) == 0x000008, "Wrong alignment on FST_ServerManagerPlayerInfo");
static_assert(sizeof(FST_ServerManagerPlayerInfo) == 0x000020, "Wrong size on FST_ServerManagerPlayerInfo");
static_assert(offsetof(FST_ServerManagerPlayerInfo, SteamID_2_372E8E5647AB2E117B7DAA9423FDB703) == 0x000000, "Member 'FST_ServerManagerPlayerInfo::SteamID_2_372E8E5647AB2E117B7DAA9423FDB703' has a wrong offset!");
static_assert(offsetof(FST_ServerManagerPlayerInfo, LastUsername_6_71C2EFE14AEF3D30A8B8A2827FA335F9) == 0x000010, "Member 'FST_ServerManagerPlayerInfo::LastUsername_6_71C2EFE14AEF3D30A8B8A2827FA335F9' has a wrong offset!");

}

