﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometrySpline

#include "Basic.hpp"

#include "GeometrySpline_classes.hpp"
#include "GeometrySpline_parameters.hpp"


namespace SDK
{

// Function GeometrySpline.GeometrySpline.SetNavAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UNavArea>             NavAreaClass_0                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGeometrySpline::SetNavAreaClass(TSubclassOf<class UNavArea> NavAreaClass_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometrySpline", "SetNavAreaClass");

	Params::GeometrySpline_SetNavAreaClass Parms{};

	Parms.NavAreaClass_0 = NavAreaClass_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

