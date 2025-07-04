﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameActionInstance_Sequential

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GameActionInstance_ChildExecutor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameActionInstance_Sequential.BP_GameActionInstance_Sequential_C
// 0x0028 (0x0070 - 0x0048)
class UBP_GameActionInstance_Sequential_C final : public UBP_GameActionInstance_ChildExecutor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NextIndex;                                         // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GameAction_Sequential_C*            GameActionSequential;                              // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      PlayerController;                                  // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldTriggerAutoSave;                             // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteGameAction(const class APlayerController* Controller);
	void ExecuteUbergraph_BP_GameActionInstance_Sequential(int32 EntryPoint);
	void GetNextGameActionToExecuteAndUpdateIndex(struct FGameAction_Wrapper* GameActionWrapper);
	bool HasAnyGameActionToExecute();
	void OnChildGameActionFinished(class UGameActionInstance* GameActionInstance);
	void TryExecuteNextGameAction();

	class FString GetDebugString() const;
	bool ShouldBlockAutoSaveDuringExecution() const;
	bool ShouldTriggerAutoSaveAfterExecution() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameActionInstance_Sequential_C">();
	}
	static class UBP_GameActionInstance_Sequential_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameActionInstance_Sequential_C>();
	}
};
static_assert(alignof(UBP_GameActionInstance_Sequential_C) == 0x000008, "Wrong alignment on UBP_GameActionInstance_Sequential_C");
static_assert(sizeof(UBP_GameActionInstance_Sequential_C) == 0x000070, "Wrong size on UBP_GameActionInstance_Sequential_C");
static_assert(offsetof(UBP_GameActionInstance_Sequential_C, UberGraphFrame) == 0x000048, "Member 'UBP_GameActionInstance_Sequential_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GameActionInstance_Sequential_C, NextIndex) == 0x000050, "Member 'UBP_GameActionInstance_Sequential_C::NextIndex' has a wrong offset!");
static_assert(offsetof(UBP_GameActionInstance_Sequential_C, GameActionSequential) == 0x000058, "Member 'UBP_GameActionInstance_Sequential_C::GameActionSequential' has a wrong offset!");
static_assert(offsetof(UBP_GameActionInstance_Sequential_C, PlayerController) == 0x000060, "Member 'UBP_GameActionInstance_Sequential_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UBP_GameActionInstance_Sequential_C, ShouldTriggerAutoSave) == 0x000068, "Member 'UBP_GameActionInstance_Sequential_C::ShouldTriggerAutoSave' has a wrong offset!");

}

