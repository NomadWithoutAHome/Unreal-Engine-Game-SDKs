﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameModeBase

#include "Basic.hpp"

#include "BP_GameModeBase_classes.hpp"
#include "BP_GameModeBase_parameters.hpp"


namespace SDK
{

// Function BP_GameModeBase.BP_GameModeBase_C.ExecuteUbergraph_BP_GameModeBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::ExecuteUbergraph_BP_GameModeBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "ExecuteUbergraph_BP_GameModeBase");

	Params::BP_GameModeBase_C_ExecuteUbergraph_BP_GameModeBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.BanListFetched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::BanListFetched(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "BanListFetched");

	Params::BP_GameModeBase_C_BanListFetched Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.FetchLatestBanList
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::FetchLatestBanList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "FetchLatestBanList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.BootPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::BootPlayer(class AController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "BootPlayer");

	Params::BP_GameModeBase_C_BootPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.CheckIfPlayerIsCommunityBanned
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::CheckIfPlayerIsCommunityBanned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "CheckIfPlayerIsCommunityBanned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameModeBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.UpdateSessesionString
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    StringValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::UpdateSessesionString(class FName Key, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "UpdateSessesionString");

	Params::BP_GameModeBase_C_UpdateSessesionString Parms{};

	Parms.Key = Key;
	Parms.StringValue = std::move(StringValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.UpdateSessionInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IntValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::UpdateSessionInt(class FName Key, int32 IntValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "UpdateSessionInt");

	Params::BP_GameModeBase_C_UpdateSessionInt Parms{};

	Parms.Key = Key;
	Parms.IntValue = IntValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "K2_PostLogin");

	Params::BP_GameModeBase_C_K2_PostLogin Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      ExitingController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "K2_OnLogout");

	Params::BP_GameModeBase_C_K2_OnLogout Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnSuccess_9852C3DF41CA2991DFE1CB829D68D4CD
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::OnSuccess_9852C3DF41CA2991DFE1CB829D68D4CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "OnSuccess_9852C3DF41CA2991DFE1CB829D68D4CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnFailure_9852C3DF41CA2991DFE1CB829D68D4CD
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::OnFailure_9852C3DF41CA2991DFE1CB829D68D4CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "OnFailure_9852C3DF41CA2991DFE1CB829D68D4CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnSuccess_5637587B49E186B5EBC2B1A699F2E746
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::OnSuccess_5637587B49E186B5EBC2B1A699F2E746()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "OnSuccess_5637587B49E186B5EBC2B1A699F2E746");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnFailure_5637587B49E186B5EBC2B1A699F2E746
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::OnFailure_5637587B49E186B5EBC2B1A699F2E746()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "OnFailure_5637587B49E186B5EBC2B1A699F2E746");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeBase.BP_GameModeBase_C.CheckIfPlayerIsBannedOnHost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    UniqueUserID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AController*                      Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameModeBase_C::CheckIfPlayerIsBannedOnHost(const class FString& UniqueUserID, class AController* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeBase_C", "CheckIfPlayerIsBannedOnHost");

	Params::BP_GameModeBase_C_CheckIfPlayerIsBannedOnHost Parms{};

	Parms.UniqueUserID = std::move(UniqueUserID);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}

