﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TedPlayerCmd_Infirmary

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TedPlayerCmd_Infirmary.TedPlayerCmd_Infirmary_C
// 0x0000 (0x0598 - 0x0598)
class UTedPlayerCmd_Infirmary_C final : public UTedPlayerCommand_PlaceStructure_SupportPower
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TedPlayerCmd_Infirmary_C">();
	}
	static class UTedPlayerCmd_Infirmary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTedPlayerCmd_Infirmary_C>();
	}
};
static_assert(alignof(UTedPlayerCmd_Infirmary_C) == 0x000008, "Wrong alignment on UTedPlayerCmd_Infirmary_C");
static_assert(sizeof(UTedPlayerCmd_Infirmary_C) == 0x000598, "Wrong size on UTedPlayerCmd_Infirmary_C");

}

