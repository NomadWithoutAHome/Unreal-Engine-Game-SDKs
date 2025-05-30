﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ScoreScreen_StatTable_Cell_Pawn

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ScoreScreen_StatTable_Cell_Pawn.WBP_ScoreScreen_StatTable_Cell_Pawn_C.DisplayPawn
// 0x0018 (0x0018 - 0x0000)
struct WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn final
{
public:
	class UTexture2D*                             InIcon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   InName;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn) == 0x000008, "Wrong alignment on WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn");
static_assert(sizeof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn) == 0x000018, "Wrong size on WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn");
static_assert(offsetof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn, InIcon) == 0x000000, "Member 'WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn::InIcon' has a wrong offset!");
static_assert(offsetof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn, InName) == 0x000008, "Member 'WBP_ScoreScreen_StatTable_Cell_Pawn_C_DisplayPawn::InName' has a wrong offset!");

// Function WBP_ScoreScreen_StatTable_Cell_Pawn.WBP_ScoreScreen_StatTable_Cell_Pawn_C.UpdateUnitIcon
// 0x0010 (0x0010 - 0x0000)
struct WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon) == 0x000008, "Wrong alignment on WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon");
static_assert(sizeof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon) == 0x000010, "Wrong size on WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon");
static_assert(offsetof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon, Icon) == 0x000000, "Member 'WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_ScoreScreen_StatTable_Cell_Pawn.WBP_ScoreScreen_StatTable_Cell_Pawn_C.UpdateUnitName
// 0x0010 (0x0010 - 0x0000)
struct WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName) == 0x000008, "Wrong alignment on WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName");
static_assert(sizeof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName) == 0x000010, "Wrong size on WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName");
static_assert(offsetof(WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName, Name_0) == 0x000000, "Member 'WBP_ScoreScreen_StatTable_Cell_Pawn_C_UpdateUnitName::Name_0' has a wrong offset!");

}

