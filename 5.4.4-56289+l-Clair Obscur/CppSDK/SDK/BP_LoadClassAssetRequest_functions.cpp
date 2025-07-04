﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LoadClassAssetRequest

#include "Basic.hpp"

#include "BP_LoadClassAssetRequest_classes.hpp"
#include "BP_LoadClassAssetRequest_parameters.hpp"


namespace SDK
{

// Function BP_LoadClassAssetRequest.BP_LoadClassAssetRequest_C.ExecuteUbergraph_BP_LoadClassAssetRequest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadClassAssetRequest_C::ExecuteUbergraph_BP_LoadClassAssetRequest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LoadClassAssetRequest_C", "ExecuteUbergraph_BP_LoadClassAssetRequest");

	Params::BP_LoadClassAssetRequest_C_ExecuteUbergraph_BP_LoadClassAssetRequest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LoadClassAssetRequest.BP_LoadClassAssetRequest_C.GetLoadedClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                          LoadedClass_0                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_LoadClassAssetRequest_C::GetLoadedClass(class UClass** LoadedClass_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LoadClassAssetRequest_C", "GetLoadedClass");

	Params::BP_LoadClassAssetRequest_C_GetLoadedClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LoadedClass_0 != nullptr)
		*LoadedClass_0 = Parms.LoadedClass_0;
}


// Function BP_LoadClassAssetRequest.BP_LoadClassAssetRequest_C.OnLoaded_24BB3CF04E742C1F02C996922FF9C0CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_LoadClassAssetRequest_C::OnLoaded_24BB3CF04E742C1F02C996922FF9C0CF(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LoadClassAssetRequest_C", "OnLoaded_24BB3CF04E742C1F02C996922FF9C0CF");

	Params::BP_LoadClassAssetRequest_C_OnLoaded_24BB3CF04E742C1F02C996922FF9C0CF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LoadClassAssetRequest.BP_LoadClassAssetRequest_C.StartLoading
// (BlueprintCallable, BlueprintEvent)

void UBP_LoadClassAssetRequest_C::StartLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LoadClassAssetRequest_C", "StartLoading");

	UObject::ProcessEvent(Func, nullptr);
}

}

