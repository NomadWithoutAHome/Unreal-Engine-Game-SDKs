﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClientAuthoritativeCharacterSystem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct ClientAuthoritativeCharacterSystem.ClientAuthoritativeRootMotionSource
// 0x0000 (0x00A0 - 0x00A0)
struct FClientAuthoritativeRootMotionSource final : public FRootMotionSource
{
};
static_assert(alignof(FClientAuthoritativeRootMotionSource) == 0x000010, "Wrong alignment on FClientAuthoritativeRootMotionSource");
static_assert(sizeof(FClientAuthoritativeRootMotionSource) == 0x0000A0, "Wrong size on FClientAuthoritativeRootMotionSource");

// ScriptStruct ClientAuthoritativeCharacterSystem.ClientAuthoritativeMoveData
// 0x0050 (0x0050 - 0x0000)
struct FClientAuthoritativeMoveData final
{
public:
	struct FVector_NetQuantize10                  Location;                                          // 0x0000(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                  Velocity;                                          // 0x0018(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               ControlRotation;                                   // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         MovementMode;                                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    BasedMovementBase;                                 // 0x0038(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BasedMovementBaseBoneName;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBasedHasRelativeRotation;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasOverrideRootMotion;                            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClientAuthoritativeMoveData) == 0x000008, "Wrong alignment on FClientAuthoritativeMoveData");
static_assert(sizeof(FClientAuthoritativeMoveData) == 0x000050, "Wrong size on FClientAuthoritativeMoveData");
static_assert(offsetof(FClientAuthoritativeMoveData, Location) == 0x000000, "Member 'FClientAuthoritativeMoveData::Location' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, Rotation) == 0x00000C, "Member 'FClientAuthoritativeMoveData::Rotation' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, Velocity) == 0x000018, "Member 'FClientAuthoritativeMoveData::Velocity' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, ControlRotation) == 0x000024, "Member 'FClientAuthoritativeMoveData::ControlRotation' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, MovementMode) == 0x000030, "Member 'FClientAuthoritativeMoveData::MovementMode' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, BasedMovementBase) == 0x000038, "Member 'FClientAuthoritativeMoveData::BasedMovementBase' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, BasedMovementBaseBoneName) == 0x000040, "Member 'FClientAuthoritativeMoveData::BasedMovementBaseBoneName' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, bBasedHasRelativeRotation) == 0x000048, "Member 'FClientAuthoritativeMoveData::bBasedHasRelativeRotation' has a wrong offset!");
static_assert(offsetof(FClientAuthoritativeMoveData, bHasOverrideRootMotion) == 0x000049, "Member 'FClientAuthoritativeMoveData::bHasOverrideRootMotion' has a wrong offset!");

}

