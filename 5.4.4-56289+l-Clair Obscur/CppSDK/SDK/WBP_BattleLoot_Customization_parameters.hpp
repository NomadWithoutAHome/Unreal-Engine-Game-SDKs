﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattleLoot_Customization

#include "Basic.hpp"

#include "S_jRPG_Item_StaticData_structs.hpp"


namespace SDK::Params
{

// Function WBP_BattleLoot_Customization.WBP_BattleLoot_Customization_C.ExecuteUbergraph_WBP_BattleLoot_Customization
// 0x0028 (0x0028 - 0x0000)
struct WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization) == 0x000008, "Wrong alignment on WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization");
static_assert(sizeof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization) == 0x000028, "Wrong size on WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization");
static_assert(offsetof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization, EntryPoint) == 0x000000, "Member 'WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization, K2Node_Event_Animation) == 0x000008, "Member 'WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_BattleLoot_Customization_C_ExecuteUbergraph_WBP_BattleLoot_Customization::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_BattleLoot_Customization.WBP_BattleLoot_Customization_C.LoadCustomization
// 0x0130 (0x0130 - 0x0000)
struct WBP_BattleLoot_Customization_C_LoadCustomization final
{
public:
	struct FS_jRPG_Item_StaticData                CustomizationData;                                 // 0x0000(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleLoot_Customization_C_LoadCustomization) == 0x000008, "Wrong alignment on WBP_BattleLoot_Customization_C_LoadCustomization");
static_assert(sizeof(WBP_BattleLoot_Customization_C_LoadCustomization) == 0x000130, "Wrong size on WBP_BattleLoot_Customization_C_LoadCustomization");
static_assert(offsetof(WBP_BattleLoot_Customization_C_LoadCustomization, CustomizationData) == 0x000000, "Member 'WBP_BattleLoot_Customization_C_LoadCustomization::CustomizationData' has a wrong offset!");

// Function WBP_BattleLoot_Customization.WBP_BattleLoot_Customization_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_BattleLoot_Customization_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleLoot_Customization_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_BattleLoot_Customization_C_OnAnimationFinished");
static_assert(sizeof(WBP_BattleLoot_Customization_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_BattleLoot_Customization_C_OnAnimationFinished");
static_assert(offsetof(WBP_BattleLoot_Customization_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_BattleLoot_Customization_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_BattleLoot_Customization.WBP_BattleLoot_Customization_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_BattleLoot_Customization_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleLoot_Customization_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_BattleLoot_Customization_C_PreConstruct");
static_assert(sizeof(WBP_BattleLoot_Customization_C_PreConstruct) == 0x000001, "Wrong size on WBP_BattleLoot_Customization_C_PreConstruct");
static_assert(offsetof(WBP_BattleLoot_Customization_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_BattleLoot_Customization_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

