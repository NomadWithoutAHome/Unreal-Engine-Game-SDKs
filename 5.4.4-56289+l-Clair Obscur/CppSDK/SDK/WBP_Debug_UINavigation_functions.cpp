﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_UINavigation

#include "Basic.hpp"

#include "WBP_Debug_UINavigation_classes.hpp"
#include "WBP_Debug_UINavigation_parameters.hpp"


namespace SDK
{

// Function WBP_Debug_UINavigation.WBP_Debug_UINavigation_C.Draw Arrow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext&                   Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// const struct FVector2D&                 Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Tint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Debug_UINavigation_C::Draw_Arrow(struct FPaintContext& Context, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& Tint, const class FText& Text) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_UINavigation_C", "Draw Arrow");

	Params::WBP_Debug_UINavigation_C_Draw_Arrow Parms{};

	Parms.Context = std::move(Context);
	Parms.Start = std::move(Start);
	Parms.End = std::move(End);
	Parms.Tint = std::move(Tint);
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}


// Function WBP_Debug_UINavigation.WBP_Debug_UINavigation_C.Get Node Position
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const struct FFUINavigationNode&        NavigationNode                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_UINavigation_C::Get_Node_Position(const struct FFUINavigationNode& NavigationNode, struct FVector2D* position, struct FVector2D* Size) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_UINavigation_C", "Get Node Position");

	Params::WBP_Debug_UINavigation_C_Get_Node_Position Parms{};

	Parms.NavigationNode = std::move(NavigationNode);

	UObject::ProcessEvent(Func, &Parms);

	if (position != nullptr)
		*position = std::move(Parms.position);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);
}


// Function WBP_Debug_UINavigation.WBP_Debug_UINavigation_C.GetDirectionsPointingToNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FFUINavigationNode&              SourceNode                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   TargetNode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EDirection>*                     Directions                                             (Parm, OutParm)

void UWBP_Debug_UINavigation_C::GetDirectionsPointingToNode(struct FFUINavigationNode& SourceNode, int32 TargetNode, TArray<EDirection>* Directions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_UINavigation_C", "GetDirectionsPointingToNode");

	Params::WBP_Debug_UINavigation_C_GetDirectionsPointingToNode Parms{};

	Parms.SourceNode = std::move(SourceNode);
	Parms.TargetNode = TargetNode;

	UObject::ProcessEvent(Func, &Parms);

	SourceNode = std::move(Parms.SourceNode);

	if (Directions != nullptr)
		*Directions = std::move(Parms.Directions);
}


// Function WBP_Debug_UINavigation.WBP_Debug_UINavigation_C.GetNodeCenter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const struct FVector2D&                 position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_Debug_UINavigation_C::GetNodeCenter(const struct FVector2D& position, const struct FVector2D& Size) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_UINavigation_C", "GetNodeCenter");

	Params::WBP_Debug_UINavigation_C_GetNodeCenter Parms{};

	Parms.position = std::move(position);
	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Debug_UINavigation.WBP_Debug_UINavigation_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext&                   Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_Debug_UINavigation_C::OnPaint(struct FPaintContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_UINavigation_C", "OnPaint");

	Params::WBP_Debug_UINavigation_C_OnPaint Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}


// Function WBP_Debug_UINavigation.WBP_Debug_UINavigation_C.PaintNodeRecursive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext&                   Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// const struct FFUINavigationNode&        FUINavigationNode                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   Depth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_UINavigation_C::PaintNodeRecursive(struct FPaintContext& Context, const struct FFUINavigationNode& FUINavigationNode, int32 Depth) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_UINavigation_C", "PaintNodeRecursive");

	Params::WBP_Debug_UINavigation_C_PaintNodeRecursive Parms{};

	Parms.Context = std::move(Context);
	Parms.FUINavigationNode = std::move(FUINavigationNode);
	Parms.Depth = Depth;

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}

}

