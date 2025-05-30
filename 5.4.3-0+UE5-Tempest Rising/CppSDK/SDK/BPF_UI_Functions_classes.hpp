﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_UI_Functions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPF_UI_Functions.BPF_UI_Functions_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_UI_Functions_C final : public UBlueprintFunctionLibrary
{
public:
	static struct FVector2D Ease_Vector_2D(struct FVector2D& A, struct FVector2D& B, double Alpha, EEasingFunc Function, double BlendExp, int32 Steps, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPF_UI_Functions_C">();
	}
	static class UBPF_UI_Functions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPF_UI_Functions_C>();
	}
};
static_assert(alignof(UBPF_UI_Functions_C) == 0x000008, "Wrong alignment on UBPF_UI_Functions_C");
static_assert(sizeof(UBPF_UI_Functions_C) == 0x000028, "Wrong size on UBPF_UI_Functions_C");

}

