﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QA_3C_Debugger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ALSV4_CPP_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_QA_3C_Debugger.WBP_QA_3C_Debugger_C
// 0x0080 (0x0360 - 0x02E0)
class UWBP_QA_3C_Debugger_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Debug_GenericParameterListWidget_C* ParameterListWidget_Collisions;                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterListWidget_C* ParameterListWidget_Overlaps;                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_AllowedGait;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_CameraInputMapping;                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_CurrentSpeed;                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_CurrentVelocity;                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_DesiredGait;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_Gait;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_MaxSpeed;                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_MovementInputMapping;              // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_MovementMode;                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_OverlayState;                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_RotationMode;                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Debug_GenericParameterWidget_C*    ParameterWidget_Stance;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          TickEnabled;                                       // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_QA_3C_Debugger(int32 EntryPoint);
	void InitParameterNames();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateALSStateParameters(class ABP_jRPG_Character_World_C* Character);
	void UpdateCharacterInputMappingParameters(class ABP_jRPG_Character_World_C* Character);
	void UpdateCharacterStateParameters(class ABP_jRPG_Character_World_C* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QA_3C_Debugger_C">();
	}
	static class UWBP_QA_3C_Debugger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QA_3C_Debugger_C>();
	}
};
static_assert(alignof(UWBP_QA_3C_Debugger_C) == 0x000008, "Wrong alignment on UWBP_QA_3C_Debugger_C");
static_assert(sizeof(UWBP_QA_3C_Debugger_C) == 0x000360, "Wrong size on UWBP_QA_3C_Debugger_C");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_QA_3C_Debugger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterListWidget_Collisions) == 0x0002E8, "Member 'UWBP_QA_3C_Debugger_C::ParameterListWidget_Collisions' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterListWidget_Overlaps) == 0x0002F0, "Member 'UWBP_QA_3C_Debugger_C::ParameterListWidget_Overlaps' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_AllowedGait) == 0x0002F8, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_AllowedGait' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_CameraInputMapping) == 0x000300, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_CameraInputMapping' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_CurrentSpeed) == 0x000308, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_CurrentSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_CurrentVelocity) == 0x000310, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_CurrentVelocity' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_DesiredGait) == 0x000318, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_DesiredGait' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_Gait) == 0x000320, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_Gait' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_MaxSpeed) == 0x000328, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_MaxSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_MovementInputMapping) == 0x000330, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_MovementInputMapping' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_MovementMode) == 0x000338, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_MovementMode' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_OverlayState) == 0x000340, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_OverlayState' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_RotationMode) == 0x000348, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_RotationMode' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, ParameterWidget_Stance) == 0x000350, "Member 'UWBP_QA_3C_Debugger_C::ParameterWidget_Stance' has a wrong offset!");
static_assert(offsetof(UWBP_QA_3C_Debugger_C, TickEnabled) == 0x000358, "Member 'UWBP_QA_3C_Debugger_C::TickEnabled' has a wrong offset!");

}

