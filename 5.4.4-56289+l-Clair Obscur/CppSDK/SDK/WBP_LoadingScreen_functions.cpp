﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingScreen

#include "Basic.hpp"

#include "WBP_LoadingScreen_classes.hpp"
#include "WBP_LoadingScreen_parameters.hpp"


namespace SDK
{

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Appear
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadingScreen_C::Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadingScreen_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::ExecuteUbergraph_WBP_LoadingScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "ExecuteUbergraph_WBP_LoadingScreen");

	Params::WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ShowBlack
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoadingScreen_C::ShowBlack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "ShowBlack");

	UObject::ProcessEvent(Func, nullptr);
}

}

