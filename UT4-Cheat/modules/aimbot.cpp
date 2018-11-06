// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Platform includes =====
#include <algorithm>

// ===== Project includes =====
#include "aimbot.h"


namespace modules
{

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Aimbot::Aimbot(Game* game) :
	Module(game),
	is_active_(false),
	last_attack_time_(0),
	current_target_character_(nullptr)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
Aimbot::~Aimbot()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Aimbot::Render()
{
	auto character = game_->GetLocalCharacter();
	if (!character) {
		return;
	}

	if (GetAsyncKeyState(VK_MBUTTON) & 1) {
		is_active_ = !is_active_;

		printf("Aimbot online: %i\n", is_active_);
	}

	if (!is_active_) {
		return;
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Aimbot::ClientCommand()
{
	auto character = game_->GetLocalCharacter();
	if (!character) {
		return;
	}

	if (!is_active_) {
		return;
	}

	Target current_target;
	if (!CheckTarget(current_target_character_, &current_target)) {
		std::vector<Target> target_list;
		if (FindTargets(target_list)) {
			current_target = target_list[0];
			current_target_character_ = current_target.character;
		} else {
			// Stop firing when target lost
			if (current_target_character_) {
				StopAttack();
			}

			current_target_character_ = nullptr;

			return;
		}
	}

	AimAtPosition(current_target.position);

	StartAttack();
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Aimbot::GetTargetPosition(AUTCharacter* character, FVector& target_position) const
{
	if (!character || !character->Mesh) {
		return false;
	}

	auto local_weapon = game_->GetLocalWeapon();
	if (!local_weapon) {
		return false;
	}

	target_position = character->K2_GetActorLocation();

	if (local_weapon->IsA(AUTWeap_Sniper::StaticClass()) && character->Mesh->DoesSocketExist("Head")) {
		target_position = character->Mesh->GetSocketLocation("Head");
	}

	float projectile_speed = GetProjectileSpeed();
	if (projectile_speed > 0) {
		float distance = character->GetDistanceTo(game_->GetLocalCharacter());

		// Don't aim at targets that are more than one second away.
		if (distance > projectile_speed) {
			return false;
		}

		float scale = distance / projectile_speed;

		FVector character_velocity = character->GetVelocity();

		target_position.X += character_velocity.X * scale;
		target_position.Y += character_velocity.Y * scale;
		target_position.Z += character_velocity.Z * scale;
	}

	return true;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
float Aimbot::GetProjectileSpeed(int fire_mode) const
{
	auto local_weapon = game_->GetLocalWeapon();
	if (!local_weapon) {
		return 0;
	}

	if (!local_weapon->ProjClass.IsValidIndex(fire_mode)) {
		return 0;
	}

	auto projectile_class = local_weapon->ProjClass[fire_mode];
	if (!projectile_class) {
		return 0;
	}

	auto projectile = (AUTProjectile*)projectile_class->CreateDefaultObject();
	auto projectile_movement = projectile->ProjectileMovement;
	if (!projectile_movement) {
		return 0;
	}

	return projectile_movement->InitialSpeed;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Aimbot::CheckTarget(AUTCharacter* character, Target* out_target)
{
	if (!character) {
		return false;
	}

	if (character == game_->GetLocalCharacter()) {
		return false;
	}

	if (character->Health <= 0) {
		return false;
	}

	if (game_->IsFriend(character)) {
		return false;
	}

	auto controller = game_->GetLocalController();

	FVector target_position;
	if (!GetTargetPosition(character, target_position)) {
		return false;
	}

	if (!game_->IsVisible(target_position)) {
		return false;
	}

	if (out_target != nullptr) {
		out_target->character = character;
		out_target->distance = character->GetDistanceTo(controller);
		out_target->position = target_position;
	}

	return true;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Aimbot::FindTargets(std::vector<Target>& target_list)
{
	std::vector<AUTPlayerState*> player_states;
	game_->GetAllActors(player_states);

	for (auto it = player_states.begin(); it != player_states.end(); it++) {
		auto character = (*it)->GetUTCharacter();

		Target target;
		if (!CheckTarget(character, &target))
			continue;

		target_list.push_back(target);
	}

	std::sort(target_list.begin(), target_list.end());

	return target_list.size() > 0;
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Aimbot::AimAtPosition(FVector position)
{
	auto local_controller = game_->GetLocalController();
	if (!local_controller) {
		return;
	}

	auto local_weapon = game_->GetLocalWeapon();
	if (!local_weapon) {
		return;
	}

	FVector view_location = local_weapon->GetFireStartLoc(0);

	auto system_library = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
	
	FRotator aim_rotation = system_library->STATIC_FindLookAtRotation(view_location, position);

	{
		FRotator fire_direction = local_weapon->GetBaseFireRotation();
		FRotator spread_direction = local_weapon->GetAdjustedAim(view_location);

		FRotator spread_offset;
		spread_offset.Pitch = spread_direction.Pitch - fire_direction.Pitch;
		spread_offset.Yaw = spread_direction.Yaw - fire_direction.Yaw;
		spread_offset.Roll = spread_direction.Roll - fire_direction.Roll;

		aim_rotation.Pitch -= spread_offset.Pitch;
		aim_rotation.Yaw -= spread_offset.Yaw;
		aim_rotation.Roll -= spread_offset.Roll;
	}

	game_->GetLocalController()->SetControlRotation(aim_rotation);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Aimbot::StartAttack()
{
	auto local_weapon = game_->GetLocalWeapon();
	if (!local_weapon) {
		return;
	}

	if (CanAttack()) {
		local_weapon->StartFire(0);

		last_attack_time_ = GetTime();
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void Aimbot::StopAttack()
{
	auto local_weapon = game_->GetLocalWeapon();
	if (!local_weapon) {
		return;
	}

	if (local_weapon->IsFiring()) {
		local_weapon->StopFire(0);
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
bool Aimbot::CanAttack()
{
	auto local_weapon = game_->GetLocalWeapon();
	if (!local_weapon) {
		return false;
	}

	return GetTime() >= last_attack_time_ + local_weapon->GetRefireTime(0);
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
float Aimbot::GetTime()
{
	auto statics = game_->GetGameplayStatics();
	if (!statics) {
		return 0;
	}

	auto world = game_->GetWorld();
	if (!world) {
		return 0;
	}

	return statics->STATIC_GetTimeSeconds(world);
}

}