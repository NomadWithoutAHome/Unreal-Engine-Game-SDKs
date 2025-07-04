﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NotificationBullet

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_NotificationBullet.WBP_NotificationBullet_C.ExecuteUbergraph_WBP_NotificationBullet
// 0x0030 (0x0030 - 0x0000)
struct WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet) == 0x000008, "Wrong alignment on WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet");
static_assert(sizeof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet) == 0x000030, "Wrong size on WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, EntryPoint) == 0x000000, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000008, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000010, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_NotificationBullet_C_ExecuteUbergraph_WBP_NotificationBullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_NotificationBullet.WBP_NotificationBullet_C.LoadNotificationData
// 0x0010 (0x0010 - 0x0000)
struct WBP_NotificationBullet_C_LoadNotificationData final
{
public:
	TScriptInterface<class IBPI_UINotifiedObject_C> NotifiedObject;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationBullet_C_LoadNotificationData) == 0x000008, "Wrong alignment on WBP_NotificationBullet_C_LoadNotificationData");
static_assert(sizeof(WBP_NotificationBullet_C_LoadNotificationData) == 0x000010, "Wrong size on WBP_NotificationBullet_C_LoadNotificationData");
static_assert(offsetof(WBP_NotificationBullet_C_LoadNotificationData, NotifiedObject) == 0x000000, "Member 'WBP_NotificationBullet_C_LoadNotificationData::NotifiedObject' has a wrong offset!");

// Function WBP_NotificationBullet.WBP_NotificationBullet_C.MarkNotificationAsRead
// 0x0018 (0x0018 - 0x0000)
struct WBP_NotificationBullet_C_MarkNotificationAsRead final
{
public:
	class UUserWidget*                            MarkCaller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationBullet_C_MarkNotificationAsRead) == 0x000008, "Wrong alignment on WBP_NotificationBullet_C_MarkNotificationAsRead");
static_assert(sizeof(WBP_NotificationBullet_C_MarkNotificationAsRead) == 0x000018, "Wrong size on WBP_NotificationBullet_C_MarkNotificationAsRead");
static_assert(offsetof(WBP_NotificationBullet_C_MarkNotificationAsRead, MarkCaller) == 0x000000, "Member 'WBP_NotificationBullet_C_MarkNotificationAsRead::MarkCaller' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_MarkNotificationAsRead, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000008, "Member 'WBP_NotificationBullet_C_MarkNotificationAsRead::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_MarkNotificationAsRead, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_NotificationBullet_C_MarkNotificationAsRead::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_NotificationBullet.WBP_NotificationBullet_C.UpdateNotificationVisibility
// 0x0018 (0x0018 - 0x0000)
struct WBP_NotificationBullet_C_UpdateNotificationVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_ShouldShowNotification_bShouldShow;   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NotificationBullet_C_UpdateNotificationVisibility) == 0x000008, "Wrong alignment on WBP_NotificationBullet_C_UpdateNotificationVisibility");
static_assert(sizeof(WBP_NotificationBullet_C_UpdateNotificationVisibility) == 0x000018, "Wrong size on WBP_NotificationBullet_C_UpdateNotificationVisibility");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, CallFunc_BPI_ShouldShowNotification_bShouldShow) == 0x000003, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::CallFunc_BPI_ShouldShowNotification_bShouldShow' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000008, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NotificationBullet_C_UpdateNotificationVisibility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_NotificationBullet_C_UpdateNotificationVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

