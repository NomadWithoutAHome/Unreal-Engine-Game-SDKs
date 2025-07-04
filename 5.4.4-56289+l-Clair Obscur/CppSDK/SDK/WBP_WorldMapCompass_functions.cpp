﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorldMapCompass

#include "Basic.hpp"

#include "WBP_WorldMapCompass_classes.hpp"
#include "WBP_WorldMapCompass_parameters.hpp"


namespace SDK
{

// Function WBP_WorldMapCompass.WBP_WorldMapCompass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WorldMapCompass_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMapCompass_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorldMapCompass.WBP_WorldMapCompass_C.ExecuteUbergraph_WBP_WorldMapCompass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMapCompass_C::ExecuteUbergraph_WBP_WorldMapCompass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMapCompass_C", "ExecuteUbergraph_WBP_WorldMapCompass");

	Params::WBP_WorldMapCompass_C_ExecuteUbergraph_WBP_WorldMapCompass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WorldMapCompass.WBP_WorldMapCompass_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldMapCompass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorldMapCompass_C", "Tick");

	Params::WBP_WorldMapCompass_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

