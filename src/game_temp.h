/*
 * This file is part of EasyRPG Player.
 *
 * EasyRPG Player is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Player is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GAME_TEMP_H_
#define _GAME_TEMP_H_

// Headers
#include <string>
#include "game_battler.h"
#include "graphics.h"
#include "rpg_music.h"

/**
 * Game Temp static class.
 */
class Game_Temp {
public:
	/**
	 * Initializes Game Temp.
	 */
	static void Init();

	static bool menu_calling;
	static bool menu_beep;

	static Game_Battler* forcing_battler;

	static bool battle_calling;
	static bool shop_calling;
	static bool inn_calling;
	static bool name_calling;
	static bool save_calling;
	static bool to_title;
	static bool gameover;

	static bool transition_processing;
	static Graphics::TransitionType transition_type;
	static bool transition_erase;

	static bool shop_buys;
	static bool shop_sells;
	static int shop_type;		// message set A, B, or C
	static bool shop_handlers;	// custom transaction/no-transaction handlers
	static std::vector<int> shop_goods;
	static bool shop_transaction;

	static int inn_type;		// message set A or B
	static int inn_price;
	static bool inn_handlers;	// custom stay/no-stay handlers
	static bool inn_stay;

	static std::string hero_name;
	static int hero_name_id;
	static int hero_name_charset;
	
	static bool battle_running;
	static int battle_troop_id;
	static int battle_terrain_id;
	static std::string battle_background;
	static int battle_formation;
	static int battle_escape_mode;
	static int battle_defeat_mode;
	static bool battle_first_strike;
	static int battle_mode;
	static int battle_result;
	static bool battle_wait;
	
	static RPG::Music* map_bgm;

	enum BattleMode {
		BattleNormal,
		BattleInitiative,
		BattleSurround,
		BattleBackAttack,
		BattlePincer
	};

	enum BattleResult {
		BattleVictory,
		BattleEscape,
		BattleDefeat,
		BattleAbort
	};

private:
	Game_Temp();
};

#endif
