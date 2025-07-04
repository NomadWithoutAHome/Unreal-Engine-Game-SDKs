﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Tool_PerformanceMeasureTool

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Tool_PerformanceMeasureTool.BPI_Tool_PerformanceMeasureTool_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_Tool_PerformanceMeasureTool_C final
{
public:
	void StartPerformanceMeasures(double Delay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Tool_PerformanceMeasureTool_C">();
	}
	static class IBPI_Tool_PerformanceMeasureTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Tool_PerformanceMeasureTool_C>();
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
static_assert(alignof(IBPI_Tool_PerformanceMeasureTool_C) == 0x000001, "Wrong alignment on IBPI_Tool_PerformanceMeasureTool_C");
static_assert(sizeof(IBPI_Tool_PerformanceMeasureTool_C) == 0x000001, "Wrong size on IBPI_Tool_PerformanceMeasureTool_C");

}

