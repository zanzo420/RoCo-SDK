#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_A3Salvo_Level_2_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A3Salvo_Level_2_WeaponComponent.A3Salvo_Level_2_WeaponComponent_C
// 0x0000 (0x1200 - 0x1200)
class UA3Salvo_Level_2_WeaponComponent_C : public UA3Salvo_Level_1_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass A3Salvo_Level_2_WeaponComponent.A3Salvo_Level_2_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
