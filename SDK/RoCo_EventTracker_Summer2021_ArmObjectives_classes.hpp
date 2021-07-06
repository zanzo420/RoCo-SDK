#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Summer2021_ArmObjectives_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Summer2021_ArmObjectives.EventTracker_Summer2021_ArmObjectives_C
// 0x0008 (0x0210 - 0x0208)
class UEventTracker_Summer2021_ArmObjectives_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Summer2021_ArmObjectives.EventTracker_Summer2021_ArmObjectives_C");
		return ptr;
	}


	void IsWinningTeam(bool* IsWinningTeam);
	void GetJobItemId(int* JobItemId);
	void Set_Game_Mode_Slot_if_Empty(int ItemId, int LootTableItemId, bool* Was_Set);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void ObjectiveInteraction_Event();
	void ExecuteUbergraph_EventTracker_Summer2021_ArmObjectives(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
