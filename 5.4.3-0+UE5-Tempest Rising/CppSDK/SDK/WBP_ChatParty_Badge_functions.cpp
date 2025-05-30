﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChatParty_Badge

#include "Basic.hpp"

#include "WBP_ChatParty_Badge_classes.hpp"
#include "WBP_ChatParty_Badge_parameters.hpp"


namespace SDK
{

// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.ExecuteUbergraph_WBP_ChatParty_Badge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::ExecuteUbergraph_WBP_ChatParty_Badge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "ExecuteUbergraph_WBP_ChatParty_Badge");

	Params::WBP_ChatParty_Badge_C_ExecuteUbergraph_WBP_ChatParty_Badge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.K2_DescribePreorder
// (Event, Public, BlueprintEvent)
// Parameters:
// const bool                              bPreorder                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::K2_DescribePreorder(const bool bPreorder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "K2_DescribePreorder");

	Params::WBP_ChatParty_Badge_C_K2_DescribePreorder Parms{};

	Parms.bPreorder = bPreorder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.K2_DescribeSameTeam
// (Event, Public, BlueprintEvent)
// Parameters:
// const bool                              bIsSameTeam                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::K2_DescribeSameTeam(const bool bIsSameTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "K2_DescribeSameTeam");

	Params::WBP_ChatParty_Badge_C_K2_DescribeSameTeam Parms{};

	Parms.bIsSameTeam = bIsSameTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.K2_DescribeSender
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const EChatMessageSender&               Sender                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::K2_DescribeSender(const EChatMessageSender& Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "K2_DescribeSender");

	Params::WBP_ChatParty_Badge_C_K2_DescribeSender Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.K2_DescribeSenderName
// (Event, Public, BlueprintEvent)
// Parameters:
// const class FString&                    Param_Name_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::K2_DescribeSenderName(const class FString& Param_Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "K2_DescribeSenderName");

	Params::WBP_ChatParty_Badge_C_K2_DescribeSenderName Parms{};

	Parms.Param_Name_0 = std::move(Param_Name_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "PreConstruct");

	Params::WBP_ChatParty_Badge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ChatParty_Badge.WBP_ChatParty_Badge_C.SetBackgroundBrush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlateBrushAsset*                 Asset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatParty_Badge_C::SetBackgroundBrush(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ChatParty_Badge_C", "SetBackgroundBrush");

	Params::WBP_ChatParty_Badge_C_SetBackgroundBrush Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);
}

}

