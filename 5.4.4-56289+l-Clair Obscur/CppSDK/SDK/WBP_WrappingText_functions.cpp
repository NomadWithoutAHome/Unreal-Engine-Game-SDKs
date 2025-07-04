﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WrappingText

#include "Basic.hpp"

#include "WBP_WrappingText_classes.hpp"
#include "WBP_WrappingText_parameters.hpp"


namespace SDK
{

// Function WBP_WrappingText.WBP_WrappingText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WrappingText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WrappingText.WBP_WrappingText_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WrappingText_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WrappingText.WBP_WrappingText_C.ExecuteUbergraph_WBP_WrappingText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::ExecuteUbergraph_WBP_WrappingText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "ExecuteUbergraph_WBP_WrappingText");

	Params::WBP_WrappingText_C_ExecuteUbergraph_WBP_WrappingText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WrappingText.WBP_WrappingText_C.FindFinalMaxDesiredWidth
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 FinalMaxDesiredWidth                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::FindFinalMaxDesiredWidth(double* FinalMaxDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "FindFinalMaxDesiredWidth");

	Params::WBP_WrappingText_C_FindFinalMaxDesiredWidth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FinalMaxDesiredWidth != nullptr)
		*FinalMaxDesiredWidth = Parms.FinalMaxDesiredWidth;
}


// Function WBP_WrappingText.WBP_WrappingText_C.OnNextTick
// (BlueprintCallable, BlueprintEvent)

void UWBP_WrappingText_C::OnNextTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "OnNextTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WrappingText.WBP_WrappingText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "PreConstruct");

	Params::WBP_WrappingText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WrappingText.WBP_WrappingText_C.Set Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText&                            InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_WrappingText_C::Set_Text(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "Set Text");

	Params::WBP_WrappingText_C_Set_Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	InText = std::move(Parms.InText);
}


// Function WBP_WrappingText.WBP_WrappingText_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           TextStyle_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::SetStyle(class UClass* TextStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "SetStyle");

	Params::WBP_WrappingText_C_SetStyle Parms{};

	Parms.TextStyle_0 = TextStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WrappingText.WBP_WrappingText_C.SetTextMaxDesiredWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  TextMaxDesiredWidth_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::SetTextMaxDesiredWidth(double TextMaxDesiredWidth_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "SetTextMaxDesiredWidth");

	Params::WBP_WrappingText_C_SetTextMaxDesiredWidth Parms{};

	Parms.TextMaxDesiredWidth_0 = TextMaxDesiredWidth_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WrappingText.WBP_WrappingText_C.SetTextMinDesiredWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  TextMaxDesiredWidth_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::SetTextMinDesiredWidth(double TextMaxDesiredWidth_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "SetTextMinDesiredWidth");

	Params::WBP_WrappingText_C_SetTextMinDesiredWidth Parms{};

	Parms.TextMaxDesiredWidth_0 = TextMaxDesiredWidth_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WrappingText.WBP_WrappingText_C.SetWrappingFontSizePercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  WrappingFontSizePercentage_0                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::SetWrappingFontSizePercentage(double WrappingFontSizePercentage_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "SetWrappingFontSizePercentage");

	Params::WBP_WrappingText_C_SetWrappingFontSizePercentage Parms{};

	Parms.WrappingFontSizePercentage_0 = WrappingFontSizePercentage_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WrappingText.WBP_WrappingText_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WrappingText_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WrappingText.WBP_WrappingText_C.UpdateTextSizeIfWrapping
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  MaxDesiredWidth                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrappingText_C::UpdateTextSizeIfWrapping(double MaxDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WrappingText_C", "UpdateTextSizeIfWrapping");

	Params::WBP_WrappingText_C_UpdateTextSizeIfWrapping Parms{};

	Parms.MaxDesiredWidth = MaxDesiredWidth;

	UObject::ProcessEvent(Func, &Parms);
}

}

