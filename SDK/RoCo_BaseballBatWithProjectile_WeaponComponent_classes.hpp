#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BaseballBatWithProjectile_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BaseballBatWithProjectile_WeaponComponent.BaseballBatWithProjectile_WeaponComponent_C
// 0x0000 (0x1570 - 0x1570)
class UBaseballBatWithProjectile_WeaponComponent_C : public UMasterMelee_WeaponComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass BaseballBatWithProjectile_WeaponComponent.BaseballBatWithProjectile_WeaponComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
