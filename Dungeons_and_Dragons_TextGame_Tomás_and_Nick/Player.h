#pragma once
#include "Nicholas_Sandbox.h"

class PlayerManager
{
	private:
		tempplayer* player;
		PlayerManager();
	public:
		~PlayerManager();
		static PlayerManager GetPlayerManager();
		tempplayer GetPlayer();
		void SetPlayer(tempplayer newPlayer);
};
