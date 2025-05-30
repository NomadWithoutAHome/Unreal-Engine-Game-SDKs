﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GenericMenu_Buttons_Slot

#include "Basic.hpp"

#include "WBP_GenericMenu_Buttons_Slot_classes.hpp"
#include "WBP_GenericMenu_Buttons_Slot_parameters.hpp"


namespace SDK
{

// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.UpdateGlowPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GenericMenu_Buttons_Slot_C::UpdateGlowPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "UpdateGlowPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "Tick");

	Params::WBP_GenericMenu_Buttons_Slot_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.SetupLinks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInHasLeftConnection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInHasRightConnection                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::SetupLinks(bool bInHasLeftConnection, bool bInHasRightConnection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "SetupLinks");

	Params::WBP_GenericMenu_Buttons_Slot_C_SetupLinks Parms{};

	Parms.bInHasLeftConnection = bInHasLeftConnection;
	Parms.bInHasRightConnection = bInHasRightConnection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.SetupLink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           InLinkImage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bInHasConnection                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               InConnectionMaterial                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               InNoConnectionMaterial                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 TextureSize                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::SetupLink(class UImage* InLinkImage, bool bInHasConnection, class UMaterialInterface* InConnectionMaterial, class UMaterialInterface* InNoConnectionMaterial, const struct FVector2D& TextureSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "SetupLink");

	Params::WBP_GenericMenu_Buttons_Slot_C_SetupLink Parms{};

	Parms.InLinkImage = InLinkImage;
	Parms.bInHasConnection = bInHasConnection;
	Parms.InConnectionMaterial = InConnectionMaterial;
	Parms.InNoConnectionMaterial = InNoConnectionMaterial;
	Parms.TextureSize = std::move(TextureSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.RefreshUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_GenericMenu_Buttons_Slot_C::RefreshUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "RefreshUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.RefreshLinks
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GenericMenu_Buttons_Slot_C::RefreshLinks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "RefreshLinks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.Refresh Visuals
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GenericMenu_Buttons_Slot_C::Refresh_Visuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "Refresh Visuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "PreConstruct");

	Params::WBP_GenericMenu_Buttons_Slot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.OnActivateState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETedContentSlotState                    InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::OnActivateState(ETedContentSlotState InState, bool bInActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "OnActivateState");

	Params::WBP_GenericMenu_Buttons_Slot_C_OnActivateState Parms{};

	Parms.InState = InState;
	Parms.bInActivated = bInActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.GetContentPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTedContentPanelInstanced**       Out                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::GetContentPanel(class UTedContentPanelInstanced** Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "GetContentPanel");

	Params::WBP_GenericMenu_Buttons_Slot_C_GetContentPanel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.GetContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTedUI_InstancedContent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTedUI_InstancedContent* UWBP_GenericMenu_Buttons_Slot_C::GetContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "GetContent");

	Params::WBP_GenericMenu_Buttons_Slot_C_GetContent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.ExecuteUbergraph_WBP_GenericMenu_Buttons_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericMenu_Buttons_Slot_C::ExecuteUbergraph_WBP_GenericMenu_Buttons_Slot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "ExecuteUbergraph_WBP_GenericMenu_Buttons_Slot");

	Params::WBP_GenericMenu_Buttons_Slot_C_ExecuteUbergraph_WBP_GenericMenu_Buttons_Slot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericMenu_Buttons_Slot.WBP_GenericMenu_Buttons_Slot_C.GetTextColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FSlateColor*                     TextColor_Disabled_0                                   (Parm, OutParm)

void UWBP_GenericMenu_Buttons_Slot_C::GetTextColor(struct FSlateColor* TextColor_Disabled_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericMenu_Buttons_Slot_C", "GetTextColor");

	Params::WBP_GenericMenu_Buttons_Slot_C_GetTextColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextColor_Disabled_0 != nullptr)
		*TextColor_Disabled_0 = std::move(Parms.TextColor_Disabled_0);
}

}

