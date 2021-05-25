// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WaitForPlayers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WaitForPlayers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.HandlePhaseChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WaitForPlayers_C::HandlePhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.HandlePhaseChange");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.ExecuteUbergraph_WBP_WaitForPlayers
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WaitForPlayers_C::ExecuteUbergraph_WBP_WaitForPlayers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WaitForPlayers.WBP_WaitForPlayers_C.ExecuteUbergraph_WBP_WaitForPlayers");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
