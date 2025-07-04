﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InputLockComponent

#include "Basic.hpp"

#include "SandFall_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InputLockComponent.BP_InputLockComponent_C
// 0x0078 (0x0118 - 0x00A0)
class UBP_InputLockComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSF_ReferenceCounter                   MovementAndCameraLockReferenceCounter;             // 0x00A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSF_ReferenceCounter                   MovementOnlyLockReferenceCounter;                  // 0x00C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSF_ReferenceCounter                   CameraOnlyLockReferenceCounter;                    // 0x00E8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void()>              OnInputLocksUpdated;                               // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddInputLock(const struct FS_InputLockParameters& Parameters, struct FSF_ReferenceCounterHandle& InputLockBlocker, const class FString& DebugName);
	void ClearInputLocks();
	void ExecuteUbergraph_BP_InputLockComponent(int32 EntryPoint);
	bool IsCameraInputLocked();
	bool IsMovementInputLocked();
	void OnAnyInputLockChanged(bool _isActive);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RemoveInputLock(const struct FS_InputLockParameters& Parameters, struct FSF_ReferenceCounterHandle& InputLockBlocker);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InputLockComponent_C">();
	}
	static class UBP_InputLockComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InputLockComponent_C>();
	}
};
static_assert(alignof(UBP_InputLockComponent_C) == 0x000008, "Wrong alignment on UBP_InputLockComponent_C");
static_assert(sizeof(UBP_InputLockComponent_C) == 0x000118, "Wrong size on UBP_InputLockComponent_C");
static_assert(offsetof(UBP_InputLockComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_InputLockComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InputLockComponent_C, MovementAndCameraLockReferenceCounter) == 0x0000A8, "Member 'UBP_InputLockComponent_C::MovementAndCameraLockReferenceCounter' has a wrong offset!");
static_assert(offsetof(UBP_InputLockComponent_C, MovementOnlyLockReferenceCounter) == 0x0000C8, "Member 'UBP_InputLockComponent_C::MovementOnlyLockReferenceCounter' has a wrong offset!");
static_assert(offsetof(UBP_InputLockComponent_C, CameraOnlyLockReferenceCounter) == 0x0000E8, "Member 'UBP_InputLockComponent_C::CameraOnlyLockReferenceCounter' has a wrong offset!");
static_assert(offsetof(UBP_InputLockComponent_C, OnInputLocksUpdated) == 0x000108, "Member 'UBP_InputLockComponent_C::OnInputLocksUpdated' has a wrong offset!");

}

