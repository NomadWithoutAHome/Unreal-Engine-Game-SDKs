﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneGraphAnnotations

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ZoneGraphAnnotations.EZoneGraphObstacleDisturbanceAreaAction
// NumValues: 0x0003
enum class EZoneGraphObstacleDisturbanceAreaAction : uint8
{
	Add                                      = 0,
	Remove                                   = 1,
	EZoneGraphObstacleDisturbanceAreaAction_MAX = 2,
};

// ScriptStruct ZoneGraphAnnotations.RegisteredZoneGraphAnnotation
// 0x0010 (0x0010 - 0x0000)
struct FRegisteredZoneGraphAnnotation final
{
public:
	class UZoneGraphAnnotationComponent*          AnnotationComponent;                               // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRegisteredZoneGraphAnnotation) == 0x000008, "Wrong alignment on FRegisteredZoneGraphAnnotation");
static_assert(sizeof(FRegisteredZoneGraphAnnotation) == 0x000010, "Wrong size on FRegisteredZoneGraphAnnotation");
static_assert(offsetof(FRegisteredZoneGraphAnnotation, AnnotationComponent) == 0x000000, "Member 'FRegisteredZoneGraphAnnotation::AnnotationComponent' has a wrong offset!");

// ScriptStruct ZoneGraphAnnotations.ZoneGraphAnnotationEventBase
// 0x0000 (0x0000 - 0x0000)
#pragma pack(push, 0x1)
struct alignas(0x01) FZoneGraphAnnotationEventBase
{
};
#pragma pack(pop)
static_assert(alignof(FZoneGraphAnnotationEventBase) == 0x000001, "Wrong alignment on FZoneGraphAnnotationEventBase");
static_assert(sizeof(FZoneGraphAnnotationEventBase) == 0x000001, "Wrong size on FZoneGraphAnnotationEventBase");

// ScriptStruct ZoneGraphAnnotations.ZoneGraphDisturbanceArea
// 0x0028 (0x0028 - 0x0000)
struct FZoneGraphDisturbanceArea final : public FZoneGraphAnnotationEventBase
{
public:
	struct FVector                                position;                                          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InstigatorID;                                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FZoneGraphDisturbanceArea) == 0x000008, "Wrong alignment on FZoneGraphDisturbanceArea");
static_assert(sizeof(FZoneGraphDisturbanceArea) == 0x000028, "Wrong size on FZoneGraphDisturbanceArea");
static_assert(offsetof(FZoneGraphDisturbanceArea, position) == 0x000000, "Member 'FZoneGraphDisturbanceArea::position' has a wrong offset!");
static_assert(offsetof(FZoneGraphDisturbanceArea, Radius) == 0x000018, "Member 'FZoneGraphDisturbanceArea::Radius' has a wrong offset!");
static_assert(offsetof(FZoneGraphDisturbanceArea, Duration) == 0x00001C, "Member 'FZoneGraphDisturbanceArea::Duration' has a wrong offset!");
static_assert(offsetof(FZoneGraphDisturbanceArea, InstigatorID) == 0x000020, "Member 'FZoneGraphDisturbanceArea::InstigatorID' has a wrong offset!");

// ScriptStruct ZoneGraphAnnotations.ZoneGraphObstacleDisturbanceArea
// 0x0030 (0x0030 - 0x0000)
struct FZoneGraphObstacleDisturbanceArea final : public FZoneGraphAnnotationEventBase
{
public:
	struct FVector                                position;                                          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ObstacleRadius;                                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x8];                                       // 0x0020(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EZoneGraphObstacleDisturbanceAreaAction       Action;                                            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FZoneGraphObstacleDisturbanceArea) == 0x000008, "Wrong alignment on FZoneGraphObstacleDisturbanceArea");
static_assert(sizeof(FZoneGraphObstacleDisturbanceArea) == 0x000030, "Wrong size on FZoneGraphObstacleDisturbanceArea");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, position) == 0x000000, "Member 'FZoneGraphObstacleDisturbanceArea::position' has a wrong offset!");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, Radius) == 0x000018, "Member 'FZoneGraphObstacleDisturbanceArea::Radius' has a wrong offset!");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, ObstacleRadius) == 0x00001C, "Member 'FZoneGraphObstacleDisturbanceArea::ObstacleRadius' has a wrong offset!");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, Action) == 0x000028, "Member 'FZoneGraphObstacleDisturbanceArea::Action' has a wrong offset!");

}

