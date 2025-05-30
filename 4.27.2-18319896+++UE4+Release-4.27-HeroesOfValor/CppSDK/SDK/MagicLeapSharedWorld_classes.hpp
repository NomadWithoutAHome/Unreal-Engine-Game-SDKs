﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapSharedWorld

#include "Basic.hpp"

#include "MagicLeapSharedWorld_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (0x03D8 - 0x0308)
class AMagicLeapSharedWorldGameMode final : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData        SharedWorldData;                                   // 0x0308(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnNewLocalDataFromClients;                         // 0x0318(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                         PinSelectionConfidenceThreshold;                   // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32C[0xA4];                                     // 0x032C(0x00A4)(Fixing Size After Last Property [ Dumper-7 ])
	class AMagicLeapSharedWorldPlayerController*  ChosenOne;                                         // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
	void SelectChosenOne();
	bool SendSharedWorldDataToClients();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSharedWorldGameMode">();
	}
	static class AMagicLeapSharedWorldGameMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapSharedWorldGameMode>();
	}
};
static_assert(alignof(AMagicLeapSharedWorldGameMode) == 0x000008, "Wrong alignment on AMagicLeapSharedWorldGameMode");
static_assert(sizeof(AMagicLeapSharedWorldGameMode) == 0x0003D8, "Wrong size on AMagicLeapSharedWorldGameMode");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, SharedWorldData) == 0x000308, "Member 'AMagicLeapSharedWorldGameMode::SharedWorldData' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, OnNewLocalDataFromClients) == 0x000318, "Member 'AMagicLeapSharedWorldGameMode::OnNewLocalDataFromClients' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, PinSelectionConfidenceThreshold) == 0x000328, "Member 'AMagicLeapSharedWorldGameMode::PinSelectionConfidenceThreshold' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, ChosenOne) == 0x0003D0, "Member 'AMagicLeapSharedWorldGameMode::ChosenOne' has a wrong offset!");

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (0x02D0 - 0x0290)
class AMagicLeapSharedWorldGameState final : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData        SharedWorldData;                                   // 0x0290(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;                             // 0x02A0(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnSharedWorldDataUpdated;                          // 0x02B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnAlignmentTransformsUpdated;                      // 0x02C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void OnReplicate_AlignmentTransforms();
	void OnReplicate_SharedWorldData();

	struct FTransform CalculateXRCameraRootTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSharedWorldGameState">();
	}
	static class AMagicLeapSharedWorldGameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapSharedWorldGameState>();
	}
};
static_assert(alignof(AMagicLeapSharedWorldGameState) == 0x000008, "Wrong alignment on AMagicLeapSharedWorldGameState");
static_assert(sizeof(AMagicLeapSharedWorldGameState) == 0x0002D0, "Wrong size on AMagicLeapSharedWorldGameState");
static_assert(offsetof(AMagicLeapSharedWorldGameState, SharedWorldData) == 0x000290, "Member 'AMagicLeapSharedWorldGameState::SharedWorldData' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameState, AlignmentTransforms) == 0x0002A0, "Member 'AMagicLeapSharedWorldGameState::AlignmentTransforms' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameState, OnSharedWorldDataUpdated) == 0x0002B0, "Member 'AMagicLeapSharedWorldGameState::OnSharedWorldDataUpdated' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameState, OnAlignmentTransformsUpdated) == 0x0002C0, "Member 'AMagicLeapSharedWorldGameState::OnAlignmentTransformsUpdated' has a wrong offset!");

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (0x0588 - 0x0570)
class AMagicLeapSharedWorldPlayerController final : public APlayerController
{
public:
	uint8                                         Pad_570[0x18];                                     // 0x0570(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientMarkReadyForSendingLocalData();
	void ClientSetChosenOne(bool bChosenOne);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);

	bool CanSendLocalDataToServer() const;
	bool IsChosenOne() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSharedWorldPlayerController">();
	}
	static class AMagicLeapSharedWorldPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapSharedWorldPlayerController>();
	}
};
static_assert(alignof(AMagicLeapSharedWorldPlayerController) == 0x000008, "Wrong alignment on AMagicLeapSharedWorldPlayerController");
static_assert(sizeof(AMagicLeapSharedWorldPlayerController) == 0x000588, "Wrong size on AMagicLeapSharedWorldPlayerController");

}

