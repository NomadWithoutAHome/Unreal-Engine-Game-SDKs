﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GroupingPolicy_Base

#include "Basic.hpp"

#include "BP_GroupingPolicy_Base_classes.hpp"
#include "BP_GroupingPolicy_Base_parameters.hpp"


namespace SDK
{

// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.GetGroupInstances
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_GroupInstance_Base_C*> ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class UBP_GroupInstance_Base_C*> UBP_GroupingPolicy_Base_C::GetGroupInstances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "GetGroupInstances");

	Params::BP_GroupingPolicy_Base_C_GetGroupInstances Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.GetPolicyDisplayName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText*                            PolicyDisplayName_0                                    (Parm, OutParm)

void UBP_GroupingPolicy_Base_C::GetPolicyDisplayName(class FText* PolicyDisplayName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "GetPolicyDisplayName");

	Params::BP_GroupingPolicy_Base_C_GetPolicyDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PolicyDisplayName_0 != nullptr)
		*PolicyDisplayName_0 = std::move(Parms.PolicyDisplayName_0);
}


// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.InitGroupPolicy
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GroupingPolicy_Base_C::InitGroupPolicy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "InitGroupPolicy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.PopulateGroupsWithObjects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>&                 Objects                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GroupingPolicy_Base_C::PopulateGroupsWithObjects(TArray<class UObject*>& Objects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "PopulateGroupsWithObjects");

	Params::BP_GroupingPolicy_Base_C_PopulateGroupsWithObjects Parms{};

	Parms.Objects = std::move(Objects);

	UObject::ProcessEvent(Func, &Parms);

	Objects = std::move(Parms.Objects);
}


// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.RegisterGroupInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UBP_GroupInstance_Base_C*&  GroupInstance                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_GroupingPolicy_Base_C::RegisterGroupInstance(const class UBP_GroupInstance_Base_C*& GroupInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "RegisterGroupInstance");

	Params::BP_GroupingPolicy_Base_C_RegisterGroupInstance Parms{};

	Parms.GroupInstance = GroupInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.SetMultiMatchAllowed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Allowed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GroupingPolicy_Base_C::SetMultiMatchAllowed(bool Allowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "SetMultiMatchAllowed");

	Params::BP_GroupingPolicy_Base_C_SetMultiMatchAllowed Parms{};

	Parms.Allowed = Allowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GroupingPolicy_Base.BP_GroupingPolicy_Base_C.SetPolicyDisplayName
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GroupingPolicy_Base_C::SetPolicyDisplayName(const class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GroupingPolicy_Base_C", "SetPolicyDisplayName");

	Params::BP_GroupingPolicy_Base_C_SetPolicyDisplayName Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}

}

