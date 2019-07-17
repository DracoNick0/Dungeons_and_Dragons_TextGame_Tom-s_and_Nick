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
	while
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();

	cout << "READY!" << endl;
	cout << "BEGIN!" << endl << endl;
	cout << "The enemy is ready to fight, what do you do?" << endl << endl;
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
			cout << "You missed." << endl;
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