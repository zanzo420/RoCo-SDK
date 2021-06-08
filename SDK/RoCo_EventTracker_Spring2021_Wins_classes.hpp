#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_Wins_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Spring2021_Wins.EventTracker_Spring2021_Wins_C
// 0x0008 (0x01F8 - 0x01F0)
class UEventTracker_Spring2021_Wins_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Spring2021_Wins.EventTracker_Spring2021_Wins_C");
		return ptr;
	}


	void IsWinningTeam(bool* IsWinningTeam);
	void GetJobItemId(int* JobItemId);
	void Set_Rogue_Slot_if_Empty(int ItemId, int LootTableItemId, bool* Was_Set);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHasEnded_Event();
	void ExecuteUbergraph_EventTracker_Spring2021_Wins(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
