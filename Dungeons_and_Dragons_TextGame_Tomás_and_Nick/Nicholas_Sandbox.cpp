#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"
#include "Player.h"
using namespace std;
string choice2;

void AttackSystem()
{
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();
	cout << "The enemy is ready to fight, what do you do?" << endl << endl;
	int i = 0;
	int skillcharge = 0;
	while (Player.PlayerHP > 0 || Enemy.EnemyHP > 0)
	{
		if (i > 0)
		{
			cout << "The enemy stands unguarded, what do you do?" << endl;
		}
		cout << "1. Attack" << endl;
		cout << "2. Special Attack" << endl;

		float choice;
		cin >> choice;
		if (choice == 1)
		{
			skillcharge++;
			cout << endl << "You chose to Attack." << endl;
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
					cout << "The enemy takes a step back in pain then attacks back." << endl;
				}
				else
				{
					cout << "You dealt " << hitdamage << " damage to the enemy." << endl;
					cout << "The enemy flinches at your attack and attacks back." << endl;
				}
			}
			else 
			{
				cout << "You miss your attack, the enemy scoffs at your puny arm swing and attacks back!" << endl;
			}
		}
		else if (choice == 2)
		{
			if(skillcharge == 2)
			{
				cout << endl << "Which skill you like to use?" << endl;
				cout << "1. " << Player.PlayerSkill1 << endl;
				cout << "2. " << Player.PlayerSkill2 << endl;
				cout << "3. " << Player.PlayerSkill3 << endl;
				int temp = 0;
				while (temp == 0)
				{
					cin >> choice2;
					if (choice2 == Player.PlayerSkill1)
					{
						temp = 1;
						skillcharge -= 2;
						cout << endl << "You chose " << Player.PlayerSkill1 << endl;
						cout << "You dealt " << Player.PlayerSkill1Damage << endl << endl;
					}
					else if (choice2 == Player.PlayerSkill2)
					{
						temp = 1;
						skillcharge -= 2;
						cout << endl << "You chose " << Player.PlayerSkill2 << endl;
						cout << "You dealt " << Player.PlayerSkill2Damage << endl << endl;
					}
					else if (choice2 == Player.PlayerSkill3)
					{
						temp = 1;
						skillcharge -= 2;
						cout << endl << "You chose " << Player.PlayerSkill3 << endl;
						cout << "You dealt " << Player.PlayerSkill3Damage << endl << endl;
					}
					else
					{
						temp = 0;
						cout << "This is not a skill, please pick again." << endl;
					}
				}
			}
			else if (skillcharge < 2)
			{
				cout << "This is not an option, please recharge your skills first." << endl;
			}
		}
		else
		{
			cout << "This is not a choice, please pick again." << endl;
		}
	}
}