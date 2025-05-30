﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SteamID

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SteamID.W_SteamID_C
// 0x0030 (0x0290 - 0x0260)
class UW_SteamID_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_106;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CloseButton_C*                       W_CloseButton_C_0;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextBox_C*                           W_TextBox_Password;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 SteamID;                                           // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_SteamID(int32 EntryPoint);
	void BndEvt__W_SteamID_W_CloseButton_C_0_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SteamID_C">();
	}
	static class UW_SteamID_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SteamID_C>();
	}
};
static_assert(alignof(UW_SteamID_C) == 0x000008, "Wrong alignment on UW_SteamID_C");
static_assert(sizeof(UW_SteamID_C) == 0x000290, "Wrong size on UW_SteamID_C");
static_assert(offsetof(UW_SteamID_C, UberGraphFrame) == 0x000260, "Member 'UW_SteamID_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SteamID_C, Image_106) == 0x000268, "Member 'UW_SteamID_C::Image_106' has a wrong offset!");
static_assert(offsetof(UW_SteamID_C, W_CloseButton_C_0) == 0x000270, "Member 'UW_SteamID_C::W_CloseButton_C_0' has a wrong offset!");
static_assert(offsetof(UW_SteamID_C, W_TextBox_Password) == 0x000278, "Member 'UW_SteamID_C::W_TextBox_Password' has a wrong offset!");
static_assert(offsetof(UW_SteamID_C, SteamID) == 0x000280, "Member 'UW_SteamID_C::SteamID' has a wrong offset!");

}

