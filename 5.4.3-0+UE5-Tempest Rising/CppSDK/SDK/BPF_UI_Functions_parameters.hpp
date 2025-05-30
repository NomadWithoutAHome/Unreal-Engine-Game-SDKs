﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_UI_Functions

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPF_UI_Functions.BPF_UI_Functions_C.Ease Vector 2D
// 0x00B8 (0x00B8 - 0x0000)
struct BPF_UI_Functions_C_Ease_Vector_2D final
{
public:
	struct FVector2D                              A;                                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              B;                                                 // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Alpha;                                             // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEasingFunc                                   Function;                                          // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BlendExp;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Steps;                                             // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ReturnValue;                                       // 0x0048(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_1;      // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VEase_Alpha_ImplicitCast;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VEase_BlendExp_ImplicitCast;              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_UI_Functions_C_Ease_Vector_2D) == 0x000008, "Wrong alignment on BPF_UI_Functions_C_Ease_Vector_2D");
static_assert(sizeof(BPF_UI_Functions_C_Ease_Vector_2D) == 0x0000B8, "Wrong size on BPF_UI_Functions_C_Ease_Vector_2D");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, A) == 0x000000, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::A' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, B) == 0x000010, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::B' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, Alpha) == 0x000020, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::Alpha' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, Function) == 0x000028, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::Function' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, BlendExp) == 0x000030, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::BlendExp' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, Steps) == 0x000038, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::Steps' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, __WorldContext) == 0x000040, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, ReturnValue) == 0x000048, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000058, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, CallFunc_Conv_Vector2DToVector_ReturnValue_1) == 0x000070, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::CallFunc_Conv_Vector2DToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, CallFunc_VEase_ReturnValue) == 0x000088, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::CallFunc_VEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0000A0, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, CallFunc_VEase_Alpha_ImplicitCast) == 0x0000B0, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::CallFunc_VEase_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPF_UI_Functions_C_Ease_Vector_2D, CallFunc_VEase_BlendExp_ImplicitCast) == 0x0000B4, "Member 'BPF_UI_Functions_C_Ease_Vector_2D::CallFunc_VEase_BlendExp_ImplicitCast' has a wrong offset!");

}

