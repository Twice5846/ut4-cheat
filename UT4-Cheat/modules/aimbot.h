// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

#pragma once

// ===== Platform includes =====
#include <vector>

// ===== Project includes =====
#include "module.h"



namespace modules
{

class Aimbot : public Module
{
public:

	// 
	Aimbot(Game* game);
	~Aimbot();

	// 
	virtual void		Render();
	virtual void		ClientCommand();


private:

	struct Target
	{
		AUTCharacter*	character;
		FVector			position;
		float			distance;

		Target()
		{
			character = nullptr;
			distance = 0;

			position.X = position.Y = position.Z = 0;
		}

		bool operator < (const Target& rhs)
		{
			return distance < rhs.distance;
		}
	};

	// 
	bool				GetTargetPosition(AUTCharacter* character, FVector& target_position) const;
	float				GetProjectileSpeed(int fire_mode = 0) const;

	// 
	bool				CheckTarget(AUTCharacter* character, Target* out_target = nullptr);
	bool				FindTargets(std::vector<Target>& target_list);

	// 
	void				AimAtPosition(FVector position);
	void				StartAttack();
	void				StopAttack();
	bool				CanAttack();

	//
	float				GetTime();

	// 
	bool				is_active_;
	float				last_attack_time_;

	// 
	AUTCharacter*		current_target_character_;
};

}
