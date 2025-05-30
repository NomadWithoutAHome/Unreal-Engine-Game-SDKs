﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapImageTracker

#include "Basic.hpp"

#include "MagicLeapImageTracker_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0070 (0x0270 - 0x0200)
class UMagicLeapImageTrackerComponent final : public USceneComponent
{
public:
	class UTexture2D*                             TargetImageTexture;                                // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name_0;                                            // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LongerDimension;                                   // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsStationary;                                     // 0x0214(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseUnreliablePose;                                // 0x0215(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapImageTargetOrientation              AxisOrientation;                                   // 0x0216(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_217[0x1];                                      // 0x0217(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnSetImageTargetSucceeded;                         // 0x0218(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnSetImageTargetFailed;                            // 0x0228(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnImageTargetFound;                                // 0x0238(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnImageTargetLost;                                 // 0x0248(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FVector& LastTrackedLocation, const struct FRotator& LastTrackedRotation, const struct FVector& NewUnreliableLocation, const struct FRotator& NewUnreliableRotation)> OnImageTargetUnreliableTracking; // 0x0258(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool RemoveTargetAsync();
	bool SetTargetAsync(class UTexture2D* ImageTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapImageTrackerComponent">();
	}
	static class UMagicLeapImageTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapImageTrackerComponent>();
	}
};
static_assert(alignof(UMagicLeapImageTrackerComponent) == 0x000010, "Wrong alignment on UMagicLeapImageTrackerComponent");
static_assert(sizeof(UMagicLeapImageTrackerComponent) == 0x000270, "Wrong size on UMagicLeapImageTrackerComponent");
static_assert(offsetof(UMagicLeapImageTrackerComponent, TargetImageTexture) == 0x0001F8, "Member 'UMagicLeapImageTrackerComponent::TargetImageTexture' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, Name_0) == 0x000200, "Member 'UMagicLeapImageTrackerComponent::Name_0' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, LongerDimension) == 0x000210, "Member 'UMagicLeapImageTrackerComponent::LongerDimension' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, bIsStationary) == 0x000214, "Member 'UMagicLeapImageTrackerComponent::bIsStationary' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, bUseUnreliablePose) == 0x000215, "Member 'UMagicLeapImageTrackerComponent::bUseUnreliablePose' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, AxisOrientation) == 0x000216, "Member 'UMagicLeapImageTrackerComponent::AxisOrientation' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnSetImageTargetSucceeded) == 0x000218, "Member 'UMagicLeapImageTrackerComponent::OnSetImageTargetSucceeded' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnSetImageTargetFailed) == 0x000228, "Member 'UMagicLeapImageTrackerComponent::OnSetImageTargetFailed' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnImageTargetFound) == 0x000238, "Member 'UMagicLeapImageTrackerComponent::OnImageTargetFound' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnImageTargetLost) == 0x000248, "Member 'UMagicLeapImageTrackerComponent::OnImageTargetLost' has a wrong offset!");
static_assert(offsetof(UMagicLeapImageTrackerComponent, OnImageTargetUnreliableTracking) == 0x000258, "Member 'UMagicLeapImageTrackerComponent::OnImageTargetUnreliableTracking' has a wrong offset!");

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapImageTrackerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnableImageTracking(bool bEnable);
	static int32 GetMaxSimultaneousTargets();
	static bool IsImageTrackingEnabled();
	static void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapImageTrackerFunctionLibrary">();
	}
	static class UMagicLeapImageTrackerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapImageTrackerFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapImageTrackerFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapImageTrackerFunctionLibrary");
static_assert(sizeof(UMagicLeapImageTrackerFunctionLibrary) == 0x000028, "Wrong size on UMagicLeapImageTrackerFunctionLibrary");

}

