﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CustomMoveZone_Climbing

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CustomMoveZone_Climbing.BPI_CustomMoveZone_Climbing_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_CustomMoveZone_Climbing_C final
{
public:
	void CheckEnter(const struct FVector& Character_Bottom_Location, const struct FVector& Input_Direction, double Input_Scale, bool* Result);
	void CheckEnterToTop(const struct FVector& Character_Bottom_Location, const struct FVector& Input_Direction, double Input_Scale, bool* Result);
	void CheckExitToBottom(double Input_Scale, bool* Result);
	void CheckExitToTop(double Input_Scale, bool* Result);
	void CheckMoveToNextHold(const struct FVector& Input_Direction, double Input_Scale, bool* Result, class AActor** Next_Hold, bool* Is_Far_Hold);
	void GetHoldLocation(struct FVector* Hold_Location, struct FVector* Character_Bottom_Location);
	void GetHoldRotation(struct FRotator* Hold_Rotation);
	void GetTopEnterLocatoin(struct FVector* Top_Enter_Location, struct FRotator* Top_Enter_Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CustomMoveZone_Climbing_C">();
	}
	static class IBPI_CustomMoveZone_Climbing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CustomMoveZone_Climbing_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IBPI_CustomMoveZone_Climbing_C) == 0x000001, "Wrong alignment on IBPI_CustomMoveZone_Climbing_C");
static_assert(sizeof(IBPI_CustomMoveZone_Climbing_C) == 0x000001, "Wrong size on IBPI_CustomMoveZone_Climbing_C");

}

