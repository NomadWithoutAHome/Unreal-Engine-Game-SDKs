﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponSkin_Lune_Base

#include "Basic.hpp"

#include "EAttackType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WeaponSkin_Lune_Base.BP_WeaponSkin_Lune_Base_C.DestroyStainAtIndex
// 0x0020 (0x0020 - 0x0000)
struct BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex final
{
public:
	int32                                         StainIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class ABP_LuneStain_C*                  Temp_object_Variable;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LuneStain_C*                        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex) == 0x000008, "Wrong alignment on BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex");
static_assert(sizeof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex) == 0x000020, "Wrong size on BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex, StainIndex) == 0x000000, "Member 'BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex::StainIndex' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex, Temp_object_Variable) == 0x000008, "Member 'BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000019, "Member 'BP_WeaponSkin_Lune_Base_C_DestroyStainAtIndex::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BP_WeaponSkin_Lune_Base.BP_WeaponSkin_Lune_Base_C.ExecuteUbergraph_BP_WeaponSkin_Lune_Base
// 0x0004 (0x0004 - 0x0000)
struct BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base) == 0x000004, "Wrong alignment on BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base");
static_assert(sizeof(BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base) == 0x000004, "Wrong size on BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base, EntryPoint) == 0x000000, "Member 'BP_WeaponSkin_Lune_Base_C_ExecuteUbergraph_BP_WeaponSkin_Lune_Base::EntryPoint' has a wrong offset!");

// Function BP_WeaponSkin_Lune_Base.BP_WeaponSkin_Lune_Base_C.SetStainInSlot
// 0x0160 (0x0160 - 0x0000)
struct BP_WeaponSkin_Lune_Base_C_SetStainInSlot final
{
public:
	EAttackType                                   ElementType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_0;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_7;                            // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LuneStain_C*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_8;                            // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackType                                   Temp_byte_Variable;                                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112[0x2];                                      // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0114(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_DoubleToLinearColor_ReturnValue;     // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Divide_LinearColorLinearColor_ReturnValue; // 0x0144(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot) == 0x000010, "Wrong alignment on BP_WeaponSkin_Lune_Base_C_SetStainInSlot");
static_assert(sizeof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot) == 0x000160, "Wrong size on BP_WeaponSkin_Lune_Base_C_SetStainInSlot");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, ElementType) == 0x000000, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::ElementType' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Index_0) == 0x000004, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Index_0' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable) == 0x000008, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000018, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_1) == 0x00001C, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_2) == 0x00002C, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_3) == 0x00003C, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_4) == 0x00004C, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_5) == 0x00005C, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_6) == 0x00006C, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E0, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_7) == 0x0000E8, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F8, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_struct_Variable_8) == 0x000100, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_struct_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, Temp_byte_Variable) == 0x000110, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000111, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, K2Node_Select_Default) == 0x000114, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_Array_Get_Item) == 0x000128, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_Conv_DoubleToLinearColor_ReturnValue) == 0x000130, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_Conv_DoubleToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000140, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_SetStainInSlot, CallFunc_Divide_LinearColorLinearColor_ReturnValue) == 0x000144, "Member 'BP_WeaponSkin_Lune_Base_C_SetStainInSlot::CallFunc_Divide_LinearColorLinearColor_ReturnValue' has a wrong offset!");

// Function BP_WeaponSkin_Lune_Base.BP_WeaponSkin_Lune_Base_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponSkin_Lune_Base_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_WeaponSkin_Lune_Base_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_WeaponSkin_Lune_Base_C_UserConstructionScript");
static_assert(sizeof(BP_WeaponSkin_Lune_Base_C_UserConstructionScript) == 0x000018, "Wrong size on BP_WeaponSkin_Lune_Base_C_UserConstructionScript");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_UserConstructionScript, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000000, "Member 'BP_WeaponSkin_Lune_Base_C_UserConstructionScript::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponSkin_Lune_Base_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_WeaponSkin_Lune_Base_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");

}

