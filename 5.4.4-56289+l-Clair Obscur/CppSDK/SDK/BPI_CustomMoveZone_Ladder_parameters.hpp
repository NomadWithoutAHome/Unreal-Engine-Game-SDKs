﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CustomMoveZone_Ladder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.CheckEnterToBottom
// 0x0040 (0x0040 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom final
{
public:
	struct FVector                                Character_Bottom_Location;                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Input_Direction;                                   // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Input_Scale;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom) == 0x000040, "Wrong size on BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom, Character_Bottom_Location) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom::Character_Bottom_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom, Input_Direction) == 0x000018, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom::Input_Direction' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom, Input_Scale) == 0x000030, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom::Input_Scale' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom, Result) == 0x000038, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToBottom::Result' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.CheckEnterToMiddle
// 0x0040 (0x0040 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle final
{
public:
	struct FVector                                Character_Bottom_Location;                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Input_Direction;                                   // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Input_Scale;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle) == 0x000040, "Wrong size on BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle, Character_Bottom_Location) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle::Character_Bottom_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle, Input_Direction) == 0x000018, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle::Input_Direction' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle, Input_Scale) == 0x000030, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle::Input_Scale' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle, Result) == 0x000038, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToMiddle::Result' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.CheckEnterToTop
// 0x0040 (0x0040 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_CheckEnterToTop final
{
public:
	struct FVector                                Character_Bottom_Location;                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Input_Direction;                                   // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Input_Scale;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_CheckEnterToTop) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_CheckEnterToTop");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_CheckEnterToTop) == 0x000040, "Wrong size on BPI_CustomMoveZone_Ladder_C_CheckEnterToTop");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToTop, Character_Bottom_Location) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToTop::Character_Bottom_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToTop, Input_Direction) == 0x000018, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToTop::Input_Direction' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToTop, Input_Scale) == 0x000030, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToTop::Input_Scale' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckEnterToTop, Result) == 0x000038, "Member 'BPI_CustomMoveZone_Ladder_C_CheckEnterToTop::Result' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.CheckExitToBottom
// 0x0028 (0x0028 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_CheckExitToBottom final
{
public:
	struct FVector                                Character_Bottom_Location;                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Input_Scale;                                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_CheckExitToBottom) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_CheckExitToBottom");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_CheckExitToBottom) == 0x000028, "Wrong size on BPI_CustomMoveZone_Ladder_C_CheckExitToBottom");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckExitToBottom, Character_Bottom_Location) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_CheckExitToBottom::Character_Bottom_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckExitToBottom, Input_Scale) == 0x000018, "Member 'BPI_CustomMoveZone_Ladder_C_CheckExitToBottom::Input_Scale' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckExitToBottom, Result) == 0x000020, "Member 'BPI_CustomMoveZone_Ladder_C_CheckExitToBottom::Result' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.CheckExitToTop
// 0x0028 (0x0028 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_CheckExitToTop final
{
public:
	struct FVector                                Character_Bottom_Location;                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Input_Scale;                                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_CheckExitToTop) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_CheckExitToTop");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_CheckExitToTop) == 0x000028, "Wrong size on BPI_CustomMoveZone_Ladder_C_CheckExitToTop");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckExitToTop, Character_Bottom_Location) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_CheckExitToTop::Character_Bottom_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckExitToTop, Input_Scale) == 0x000018, "Member 'BPI_CustomMoveZone_Ladder_C_CheckExitToTop::Input_Scale' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_CheckExitToTop, Result) == 0x000020, "Member 'BPI_CustomMoveZone_Ladder_C_CheckExitToTop::Result' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.GetBottomEnterLocation
// 0x0038 (0x0038 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Bottom_Enter_Location;                             // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Bottom_Enter_Rotation;                             // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation) == 0x000038, "Wrong size on BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation, Character) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation::Character' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation, Bottom_Enter_Location) == 0x000008, "Member 'BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation::Bottom_Enter_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation, Bottom_Enter_Rotation) == 0x000020, "Member 'BPI_CustomMoveZone_Ladder_C_GetBottomEnterLocation::Bottom_Enter_Rotation' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.GetLadderLocation
// 0x0038 (0x0038 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_GetLadderLocation final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Top_Location;                                      // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Bottom_Location;                                   // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_GetLadderLocation) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_GetLadderLocation");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_GetLadderLocation) == 0x000038, "Wrong size on BPI_CustomMoveZone_Ladder_C_GetLadderLocation");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetLadderLocation, Character) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_GetLadderLocation::Character' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetLadderLocation, Top_Location) == 0x000008, "Member 'BPI_CustomMoveZone_Ladder_C_GetLadderLocation::Top_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetLadderLocation, Bottom_Location) == 0x000020, "Member 'BPI_CustomMoveZone_Ladder_C_GetLadderLocation::Bottom_Location' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.GetLadderRotation
// 0x0018 (0x0018 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_GetLadderRotation final
{
public:
	struct FRotator                               Ladder_Rotation;                                   // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_GetLadderRotation) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_GetLadderRotation");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_GetLadderRotation) == 0x000018, "Wrong size on BPI_CustomMoveZone_Ladder_C_GetLadderRotation");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetLadderRotation, Ladder_Rotation) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_GetLadderRotation::Ladder_Rotation' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.GetTopEnterLocation
// 0x0038 (0x0038 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Top_Enter_Location;                                // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Top_Enter_Rotation;                                // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation) == 0x000038, "Wrong size on BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation, Character) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation::Character' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation, Top_Enter_Location) == 0x000008, "Member 'BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation::Top_Enter_Location' has a wrong offset!");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation, Top_Enter_Rotation) == 0x000020, "Member 'BPI_CustomMoveZone_Ladder_C_GetTopEnterLocation::Top_Enter_Rotation' has a wrong offset!");

// Function BPI_CustomMoveZone_Ladder.BPI_CustomMoveZone_Ladder_C.GetLadderStepHeight
// 0x0008 (0x0008 - 0x0000)
struct BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight final
{
public:
	double                                        StepHeight;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight) == 0x000008, "Wrong alignment on BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight");
static_assert(sizeof(BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight) == 0x000008, "Wrong size on BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight");
static_assert(offsetof(BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight, StepHeight) == 0x000000, "Member 'BPI_CustomMoveZone_Ladder_C_GetLadderStepHeight::StepHeight' has a wrong offset!");

}

