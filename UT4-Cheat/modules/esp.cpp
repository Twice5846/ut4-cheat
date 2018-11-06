// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------

// ===== Platform includes =====
#include <algorithm>

// ===== Project includes =====
#include "esp.h"


namespace modules
{

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
ESP::ESP(Game* game) :
	Module(game)
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
ESP::~ESP()
{

}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void ESP::Render()
{
	auto hud = game_->GetLocalHUD();

	std::vector<AUTPlayerState*> player_states;
	game_->GetAllActors(player_states);
	for (auto it = player_states.begin(); it != player_states.end(); it++) {
		auto state = *it;
		auto character = state->GetUTCharacter();
		if (!character || !character->Mesh || character == game_->GetLocalCharacter() || character->Health <= 0) {
			continue;
		}

		if (!character->Mesh->DoesSocketExist("Head") || !character->Mesh->DoesSocketExist("Root")) {
			continue;
		}

		FVector world_top = character->Mesh->GetSocketLocation("Head");
		FVector world_bottom = character->Mesh->GetSocketLocation("Root");

		world_top.X = world_bottom.X;
		world_top.Y = world_bottom.Y;
		world_top.Z += 50;
		world_bottom.Z -= 50;

		FVector2D screen_top, screen_bottom;
		if (game_->WorldToSceen(world_top, screen_top) && game_->WorldToSceen(world_bottom, screen_bottom)) {
			UFont* font = hud->ChatFont;
			float scale = 1;

			wchar_t text[256];
			swprintf_s(text, sizeof(text), L"%s", state->PlayerName.c_str());

			float text_width, text_height;
			hud->GetTextSize(text, font, scale, &text_width, &text_height);

			float text_box_height = text_height + 4;
			float height = screen_bottom.Y - screen_top.Y + text_box_height;
			float width = max(height / 2, text_width + 4);
			FVector2D top_left(screen_top.X - width / 2, screen_top.Y - text_box_height);

			FLinearColor border_color(1, 1, 1, 1);
			FLinearColor color = character->GetTeamColor();
			if (!game_->IsVisible(character->K2_GetActorLocation())) {
				color.A *= 0.5;
				border_color.A *= 0.5;
			}

			// Name text box
			hud->DrawRect(
				color,
				top_left.X,
				top_left.Y,
				width,
				text_box_height
			);

			// Name
			hud->DrawText_(
				text,
				FLinearColor(1, 1, 1, 1),
				top_left.X + width / 2 - text_width / 2,
				top_left.Y + 2,
				font,
				scale,
				false
			);

			DrawBox(top_left.X, top_left.Y, width, height, 2, color);

			DrawBox(top_left.X - 1, top_left.Y - 1, width + 2, height + 2, 1, border_color);
			DrawBox(top_left.X + 2, top_left.Y + text_box_height, width - 4, height - text_box_height - 2, 1, border_color);
		}
	}

	std::vector<AUTPickup*> pickups;
	game_->GetAllActors(pickups);
	for (auto it = pickups.begin(); it != pickups.end(); it++) {
		auto pickup = *it;

		FVector position = pickup->K2_GetActorLocation();
		FVector2D screen;
		if (!game_->WorldToSceen(position, screen)) {
			continue;
		}

		auto icon = pickup->MinimapIcon;
		if (!icon.Texture) {
			icon = pickup->HUDIcon;
		}
		if (!icon.Texture) {
			continue;
		}

		auto texture = (UTexture2D*)icon.Texture;
		float texture_width = texture->Blueprint_GetSizeX();
		float texture_height = texture->Blueprint_GetSizeY();
		float width = 32;
		float height = 32;

		//hud->DrawTextureSimple(icon.Texture, 0, 0, 1, false);

		hud->DrawTexture(
			icon.Texture,
			screen.X - width / 2,
			screen.Y - height / 2,
			width,
			height,
			icon.U / texture_width,
			icon.V / texture_height,
			icon.UL / texture_width,
			icon.VL / texture_height,
			FLinearColor(1, 1, 1, 1),
			EBlendMode::BLEND_Translucent,
			1,
			false,
			0,
			FVector2D(0.5, 0.5)
		);

		float respawnTimeOffset = pickup->GetRespawnTimeOffset(game_->GetLocalController()->Pawn);
		if (respawnTimeOffset <= 0) {
			respawnTimeOffset = 0;
		}

		if (respawnTimeOffset > 0) {
			wchar_t text[256] = { 0 };
			swprintf_s(text, sizeof(text), L"%.0fs", respawnTimeOffset);

			UFont* font = hud->ChatFont;
			float scale = 1;

			float text_width, text_height;
			hud->GetTextSize(text, font, scale, &text_width, &text_height);

			hud->DrawText_(text, FLinearColor(1, 1, 1, 1), screen.X - text_width / 2, screen.Y + height / 2 + 2, font, scale, false);
		}
	}
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void ESP::ClientCommand()
{
	
}

// ----------------------------------------------------------------------------
// 
// ----------------------------------------------------------------------------
void ESP::DrawBox(float x, float y, float w, float h, float t, FLinearColor c)
{
	auto hud = game_->GetLocalHUD();
	if (!hud) {
		return;
	}

	hud->DrawRect(c, x, y, t, h);
	hud->DrawRect(c, x + t, y, w - 2 * t, t);
	hud->DrawRect(c, x + w - t, y, t, h);
	hud->DrawRect(c, x + t, y + h - t, w - 2 * t, t);
}

}
