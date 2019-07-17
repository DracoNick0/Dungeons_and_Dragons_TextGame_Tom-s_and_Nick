#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"
#include "Player.h"


using namespace std;


void AttackSystem()
{
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();
	cout << "The enemy is ready to fight, what do you do?" << endl << endl;
	while (Player.PlayerHP > 0 || Enemy.EnemyHP > 0)
	{
		cout << "1. Attack" << endl;
		cout << "2. Special Attack" << endl;

		float choice;
		cin >> choice;
		if (choice == 1)
		{
			cout << "You chose to Attack." << endl;
			int hitchance = (rand() % 100) + 1;
			if (hitchance > 0 && hitchance < Player.PlayerHitChance)
			{
				int hitdamage = (rand() % Player.PlayerHitDamage) + 1;
				int critchance = (rand() % 100) + 1;
				if (critchance > 0 && critchance < Player.PlayerCritChance)
				{
					int critdamage = (rand() % Player.PlayerCritDamage) + 1;
					cout << "Crit! " << critdamage << "!" << endl;
					cout << "You dealt " << hitdamage + critdamage << " damage to the enemy." << endl;
				}
				else
				{
					cout << "You dealt " << hitdamage << " damage to the enemy." << endl;
				}
			}
			else
			{
				cout << "You miss your attack, the enemy scoffs at your puny arm swing and attacks back with full power!" << endl;
			}

		}
		else if (choice == 2)
		{
			cout << "You chose to use a Special Attack";

		}

		else
		{
			cout << "This is not a choice, please pick again." << endl;
		}
	}
}