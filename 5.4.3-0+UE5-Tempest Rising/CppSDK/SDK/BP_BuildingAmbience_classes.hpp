﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuildingAmbience

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BuildingAmbience.BP_BuildingAmbience_C
// 0x0010 (0x00C0 - 0x00B0)
class UBP_BuildingAmbience_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Debug_Debug_Print_Data;                            // 0x00B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Debug_on_Destroyed;                                // 0x00B9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Debug_Ambience_Population;                         // 0x00BA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Is_Dying;                                          // 0x00BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasEverVisible;                                   // 0x00BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BuildingVisibilityChanged(bool bIsVisible);
	void Event_OnDestroyed();
	void ExecuteUbergraph_BP_BuildingAmbience(int32 EntryPoint);
	void PlayAmbientSound();
	void ReceiveBeginPlay();
	void UnbindAll();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildingAmbience_C">();
	}
	static class UBP_BuildingAmbience_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuildingAmbience_C>();
	}
};
static_assert(alignof(UBP_BuildingAmbience_C) == 0x000008, "Wrong alignment on UBP_BuildingAmbience_C");
static_assert(sizeof(UBP_BuildingAmbience_C) == 0x0000C0, "Wrong size on UBP_BuildingAmbience_C");
static_assert(offsetof(UBP_BuildingAmbience_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_BuildingAmbience_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BuildingAmbience_C, Debug_Debug_Print_Data) == 0x0000B8, "Member 'UBP_BuildingAmbience_C::Debug_Debug_Print_Data' has a wrong offset!");
static_assert(offsetof(UBP_BuildingAmbience_C, Debug_on_Destroyed) == 0x0000B9, "Member 'UBP_BuildingAmbience_C::Debug_on_Destroyed' has a wrong offset!");
static_assert(offsetof(UBP_BuildingAmbience_C, Debug_Ambience_Population) == 0x0000BA, "Member 'UBP_BuildingAmbience_C::Debug_Ambience_Population' has a wrong offset!");
static_assert(offsetof(UBP_BuildingAmbience_C, Is_Dying) == 0x0000BB, "Member 'UBP_BuildingAmbience_C::Is_Dying' has a wrong offset!");
static_assert(offsetof(UBP_BuildingAmbience_C, bWasEverVisible) == 0x0000BC, "Member 'UBP_BuildingAmbience_C::bWasEverVisible' has a wrong offset!");

}

