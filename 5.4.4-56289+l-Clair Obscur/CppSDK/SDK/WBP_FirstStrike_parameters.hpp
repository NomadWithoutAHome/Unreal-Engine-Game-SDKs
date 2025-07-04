﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FirstStrike

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_FirstStrike.WBP_FirstStrike_C.ExecuteUbergraph_WBP_FirstStrike
// 0x0038 (0x0038 - 0x0000)
struct WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraUIComponent*                    CallFunc_GetNiagaraComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraUIComponent*                    CallFunc_GetNiagaraComponent_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   K2Node_CustomEvent_FX_SmokeHorizontal2;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike) == 0x000008, "Wrong alignment on WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike");
static_assert(sizeof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike) == 0x000038, "Wrong size on WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, EntryPoint) == 0x000000, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, CallFunc_GetNiagaraComponent_ReturnValue) == 0x000008, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::CallFunc_GetNiagaraComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, CallFunc_GetNiagaraComponent_ReturnValue_1) == 0x000018, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::CallFunc_GetNiagaraComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, K2Node_CustomEvent_FX_SmokeHorizontal2) == 0x000020, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::K2Node_CustomEvent_FX_SmokeHorizontal2' has a wrong offset!");
static_assert(offsetof(WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_FirstStrike_C_ExecuteUbergraph_WBP_FirstStrike::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_FirstStrike.WBP_FirstStrike_C.FX_SmokeHorizontal2_Event
// 0x0008 (0x0008 - 0x0000)
struct WBP_FirstStrike_C_FX_SmokeHorizontal2_Event final
{
public:
	class UNiagaraSystemWidget*                   FX_SmokeHorizontal2_0;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FirstStrike_C_FX_SmokeHorizontal2_Event) == 0x000008, "Wrong alignment on WBP_FirstStrike_C_FX_SmokeHorizontal2_Event");
static_assert(sizeof(WBP_FirstStrike_C_FX_SmokeHorizontal2_Event) == 0x000008, "Wrong size on WBP_FirstStrike_C_FX_SmokeHorizontal2_Event");
static_assert(offsetof(WBP_FirstStrike_C_FX_SmokeHorizontal2_Event, FX_SmokeHorizontal2_0) == 0x000000, "Member 'WBP_FirstStrike_C_FX_SmokeHorizontal2_Event::FX_SmokeHorizontal2_0' has a wrong offset!");

// Function WBP_FirstStrike.WBP_FirstStrike_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_FirstStrike_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FirstStrike_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_FirstStrike_C_PreConstruct");
static_assert(sizeof(WBP_FirstStrike_C_PreConstruct) == 0x000001, "Wrong size on WBP_FirstStrike_C_PreConstruct");
static_assert(offsetof(WBP_FirstStrike_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_FirstStrike_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_FirstStrike.WBP_FirstStrike_C.SequenceEvent__ENTRYPOINTWBP_FirstStrike
// 0x0008 (0x0008 - 0x0000)
struct WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike final
{
public:
	class UNiagaraSystemWidget*                   FX_SmokeHorizontal2_0;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike) == 0x000008, "Wrong alignment on WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike");
static_assert(sizeof(WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike) == 0x000008, "Wrong size on WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike");
static_assert(offsetof(WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike, FX_SmokeHorizontal2_0) == 0x000000, "Member 'WBP_FirstStrike_C_SequenceEvent__ENTRYPOINTWBP_FirstStrike::FX_SmokeHorizontal2_0' has a wrong offset!");

}

