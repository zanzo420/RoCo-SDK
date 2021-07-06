#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WalkinSequence6_Revised_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WalkinSequence6_Revised.SequenceDirector_C
// 0x0014 (0x0044 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       StreamingLevelName;                                       // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ThisTotalNumWalking_7;                                    // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WalkinSequence6_Revised.SequenceDirector_C");
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTSequenceDirector_8();
	void SequenceEvent__ENTRYPOINTSequenceDirector_7();
	void SequenceEvent__ENTRYPOINTSequenceDirector_6();
	void SequenceEvent__ENTRYPOINTSequenceDirector_5();
	void SequenceEvent__ENTRYPOINTSequenceDirector_4();
	void SequenceEvent__ENTRYPOINTSequenceDirector_3();
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void Nameplate_Index4_Event();
	void Nameplate_Index5_Event();
	void OnEnableSlomo(bool bEnableSlomo);
	void SequenceEvent_5();
	void Nameplate_Index3_Event();
	void Nameplate_Index2_Event();
	void Nameplate_Index0_Event();
	void Nameplate_Index1_Event();
	void Nameplate_Player6();
	void Nameplate_Player5();
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
