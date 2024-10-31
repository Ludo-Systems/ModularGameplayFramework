#pragma once

#include "NativeGameplayTags.h"

// Use our own macro (which adds the module name) to declare the gameplay tags 
#define DA_DECLARE_GAMEPLAY_TAG_EXTERN(TagName) GAMEPLAYFRAMEWORK_API extern FNativeGameplayTag TagName;

namespace CoreGameplayTags
{
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_Move);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_LookMouse);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_LookStick);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_PrimaryAttack);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_SecondaryAttack);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_Use);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_Jump);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_Run);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_Dash);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Input_Crouch);
	
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character_ID);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character_Type);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character_Type_AI);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character_Type_Player);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character_Type_Player_ThirdPerson);

	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Death);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Death_Dying);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Death_Dead);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Stunned);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Jumping);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Attacking);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Sprinting);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Parrying)
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Status_Healing);
	
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_Sprint);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_Jump);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_PrimaryAttack);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_SecondaryAttack);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_Dash);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_Parry);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_Heal);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_GainMana);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_SelectItem);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_UseItem);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_Buff);

	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Pickup);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Pickup_Health);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Pickup_Mana);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Pickup_Credits);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Pickup_Ability);
	
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Behavior_SurvivesDeath);

	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Event);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Event_Damage);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Event_Heal);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Event_Death);

	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_Damage);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_DamageImmunity);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_DamageSelfDestruct);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_FellOutOfWorld);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_DA_Damage_Message);

	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Cheat_GodMode);
	DA_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Cheat_UnlimitedHealth);

}