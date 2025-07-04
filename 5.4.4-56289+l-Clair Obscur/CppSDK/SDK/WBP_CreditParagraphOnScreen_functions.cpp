﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CreditParagraphOnScreen

#include "Basic.hpp"

#include "WBP_CreditParagraphOnScreen_classes.hpp"
#include "WBP_CreditParagraphOnScreen_parameters.hpp"


namespace SDK
{

// Function WBP_CreditParagraphOnScreen.WBP_CreditParagraphOnScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CreditParagraphOnScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditParagraphOnScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CreditParagraphOnScreen.WBP_CreditParagraphOnScreen_C.ExecuteUbergraph_WBP_CreditParagraphOnScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreditParagraphOnScreen_C::ExecuteUbergraph_WBP_CreditParagraphOnScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditParagraphOnScreen_C", "ExecuteUbergraph_WBP_CreditParagraphOnScreen");

	Params::WBP_CreditParagraphOnScreen_C_ExecuteUbergraph_WBP_CreditParagraphOnScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

