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

class EnemyManager
{
	private:
		tempenemy* enemy;
		EnemyManager();
	public:
		~EnemyManager();
		static EnemyManager GetEnemyManager();
		tempenemy GetEnemy();
		void SetEnemy(tempenemy newEnemy);
};