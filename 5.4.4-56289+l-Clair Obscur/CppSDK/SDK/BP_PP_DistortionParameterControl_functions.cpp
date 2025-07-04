﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PP_DistortionParameterControl

#include "Basic.hpp"

#include "BP_PP_DistortionParameterControl_classes.hpp"
#include "BP_PP_DistortionParameterControl_parameters.hpp"


namespace SDK
{

// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.DistortionTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PP_DistortionParameterControl_C::DistortionTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "DistortionTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.DistortionTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PP_DistortionParameterControl_C::DistortionTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "DistortionTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.ExecuteUbergraph_BP_PP_DistortionParameterControl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PP_DistortionParameterControl_C::ExecuteUbergraph_BP_PP_DistortionParameterControl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "ExecuteUbergraph_BP_PP_DistortionParameterControl");

	Params::BP_PP_DistortionParameterControl_C_ExecuteUbergraph_BP_PP_DistortionParameterControl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.ReverseDistortionParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const double                            Speed                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PP_DistortionParameterControl_C::ReverseDistortionParameter(const double Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "ReverseDistortionParameter");

	Params::BP_PP_DistortionParameterControl_C_ReverseDistortionParameter Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.SetDistortion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PP_DistortionParameterControl_C::SetDistortion(double NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "SetDistortion");

	Params::BP_PP_DistortionParameterControl_C_SetDistortion Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.SetDistortionParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const double                            Speed                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const double                            DistortionValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const double                            HardnessValue                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PP_DistortionParameterControl_C::SetDistortionParameter(const double Speed, const double DistortionValue, const double HardnessValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "SetDistortionParameter");

	Params::BP_PP_DistortionParameterControl_C_SetDistortionParameter Parms{};

	Parms.Speed = Speed;
	Parms.DistortionValue = DistortionValue;
	Parms.HardnessValue = HardnessValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PP_DistortionParameterControl.BP_PP_DistortionParameterControl_C.SetHardness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PP_DistortionParameterControl_C::SetHardness(double NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PP_DistortionParameterControl_C", "SetHardness");

	Params::BP_PP_DistortionParameterControl_C_SetHardness Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

}

