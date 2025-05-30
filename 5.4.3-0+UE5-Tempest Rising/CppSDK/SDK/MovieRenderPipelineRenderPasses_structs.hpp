﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieRenderPipelineRenderPasses

#include "Basic.hpp"


namespace SDK
{

// Enum MovieRenderPipelineRenderPasses.EEXRCompressionFormat
// NumValues: 0x000B
enum class EEXRCompressionFormat : uint8
{
	None                                     = 0,
	RLE                                      = 1,
	ZIPS                                     = 2,
	ZIP                                      = 3,
	PIZ                                      = 4,
	PXR24                                    = 5,
	B44                                      = 6,
	B44A                                     = 7,
	DWAA                                     = 8,
	DWAB                                     = 9,
	Max                                      = 10,
};

// ScriptStruct MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
// 0x0030 (0x0030 - 0x0000)
struct FMoviePipelinePostProcessPass final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      Material;                                          // 0x0008(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMoviePipelinePostProcessPass) == 0x000008, "Wrong alignment on FMoviePipelinePostProcessPass");
static_assert(sizeof(FMoviePipelinePostProcessPass) == 0x000030, "Wrong size on FMoviePipelinePostProcessPass");
static_assert(offsetof(FMoviePipelinePostProcessPass, bEnabled) == 0x000000, "Member 'FMoviePipelinePostProcessPass::bEnabled' has a wrong offset!");
static_assert(offsetof(FMoviePipelinePostProcessPass, Material) == 0x000008, "Member 'FMoviePipelinePostProcessPass::Material' has a wrong offset!");

}

