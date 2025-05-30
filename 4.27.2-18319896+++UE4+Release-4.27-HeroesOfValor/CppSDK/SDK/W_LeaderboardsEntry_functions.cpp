﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LeaderboardsEntry

#include "Basic.hpp"

#include "W_LeaderboardsEntry_classes.hpp"
#include "W_LeaderboardsEntry_parameters.hpp"


namespace SDK
{

// Function W_LeaderboardsEntry.W_LeaderboardsEntry_C.ExecuteUbergraph_W_LeaderboardsEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LeaderboardsEntry_C::ExecuteUbergraph_W_LeaderboardsEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeaderboardsEntry_C", "ExecuteUbergraph_W_LeaderboardsEntry");

	Params::W_LeaderboardsEntry_C_ExecuteUbergraph_W_LeaderboardsEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LeaderboardsEntry.W_LeaderboardsEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LeaderboardsEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeaderboardsEntry_C", "Tick");

	Params::W_LeaderboardsEntry_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LeaderboardsEntry.W_LeaderboardsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LeaderboardsEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeaderboardsEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_LeaderboardsEntry.W_LeaderboardsEntry_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UW_LeaderboardsEntry_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeaderboardsEntry_C", "GetText_0");

	Params::W_LeaderboardsEntry_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_LeaderboardsEntry.W_LeaderboardsEntry_C.SetBgColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UW_LeaderboardsEntry_C::SetBgColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeaderboardsEntry_C", "SetBgColor");

	Params::W_LeaderboardsEntry_C_SetBgColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

