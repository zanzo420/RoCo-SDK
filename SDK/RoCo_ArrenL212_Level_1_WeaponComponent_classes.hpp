#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ArrenL212_Level_1_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArrenL212_Level_1_WeaponComponent.ArrenL212_Level_1_WeaponComponent_C
// 0x0000 (0x1200 - 0x1200)
class UArrenL212_Level_1_WeaponComponent_C : public UArrenL212_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ArrenL212_Level_1_WeaponComponent.ArrenL212_Level_1_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
