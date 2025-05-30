﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TempestFieldAmbience

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TempestFieldAmbience.BP_TempestFieldAmbience_C
// 0x0058 (0x0108 - 0x00B0)
class UBP_TempestFieldAmbience_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Speed;                                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dynamic_Enable_Distance;                           // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bounds_X_Max;                                      // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bounds_Y_Max;                                      // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bounds_X_Min;                                      // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bounds_Y_Min;                                      // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bounds_Z_Value;                                    // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Last_Location;                                     // 0x00F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Enable_Dynamic_Tempest_Field();
	void ExecuteUbergraph_BP_TempestFieldAmbience(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TempestFieldAmbience_C">();
	}
	static class UBP_TempestFieldAmbience_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TempestFieldAmbience_C>();
	}
};
static_assert(alignof(UBP_TempestFieldAmbience_C) == 0x000008, "Wrong alignment on UBP_TempestFieldAmbience_C");
static_assert(sizeof(UBP_TempestFieldAmbience_C) == 0x000108, "Wrong size on UBP_TempestFieldAmbience_C");
static_assert(offsetof(UBP_TempestFieldAmbience_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_TempestFieldAmbience_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Speed) == 0x0000B8, "Member 'UBP_TempestFieldAmbience_C::Speed' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Dynamic_Enable_Distance) == 0x0000C0, "Member 'UBP_TempestFieldAmbience_C::Dynamic_Enable_Distance' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Bounds_X_Max) == 0x0000C8, "Member 'UBP_TempestFieldAmbience_C::Bounds_X_Max' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Bounds_Y_Max) == 0x0000D0, "Member 'UBP_TempestFieldAmbience_C::Bounds_Y_Max' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Bounds_X_Min) == 0x0000D8, "Member 'UBP_TempestFieldAmbience_C::Bounds_X_Min' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Bounds_Y_Min) == 0x0000E0, "Member 'UBP_TempestFieldAmbience_C::Bounds_Y_Min' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Bounds_Z_Value) == 0x0000E8, "Member 'UBP_TempestFieldAmbience_C::Bounds_Z_Value' has a wrong offset!");
static_assert(offsetof(UBP_TempestFieldAmbience_C, Last_Location) == 0x0000F0, "Member 'UBP_TempestFieldAmbience_C::Last_Location' has a wrong offset!");

}

