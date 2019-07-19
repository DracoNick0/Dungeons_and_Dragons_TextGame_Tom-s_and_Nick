#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"
#include "Player.h"
using namespace std;
string choice2;

void EnemyAttackSystem()
{
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();

	int hitchance = (rand() % 100) + 1;
	if (hitchance > 0 && hitchance < Enemy.EnemyHitChance)
	{
		int hitdamage = (rand() % Enemy.EnemyHitDamage) + 1;
		int critchance = (rand() % 100) + 1;
		if (critchance > 0 && critchance < Enemy.EnemyCritChance)
		{
			int critdamage = (rand() % Enemy.EnemyCritDamage) + 1;
			cout << "Crit! " << critdamage << "!" << endl;
			cout << "The enemy dealt " << hitdamage + critdamage << " damage to you." << endl;
			if (Player.PlayerHP <= 0)
			{
				Player.PlayerHP = 0;
				cout << "You take a step back and look into the enemies eyes, then fall over!" << endl << endl;
				cout << "Your health has reached zero... GAME OVER" << endl;
				Player.PlayerSkillCharge = 0;
				Player.PlayerisDead = true;
				exit;
			}
			if (Player.PlayerHP > 0)
			{
				cout << "You take a step back in pain." << endl;
				cout << "You now have " << Player.PlayerHP << " HP." << endl;
			}
		}
		else
		{
			cout << "The enemy dealt " << hitdamage << " damage to You." << endl;
			cout << "You take the hit and stunt back." << endl;
			if (Player.PlayerHP <= 0)
			{
				Player.PlayerHP = 0;
				cout << "You take a step back and look into the enemies eyes, then fall over!" << endl << endl;
				cout << "Your health has reached zero... GAME OVER" << endl;
				Player.PlayerSkillCharge = 0;
				Player.PlayerisDead = true;
				exit;
			}
			if (Player.PlayerHP > 0)
			{
				cout << "You take a step back in pain." << endl;
				cout << "You now have " << Player.PlayerHP << " HP." << endl;
			}
		}
	}
	else
	{
		cout << "The enemy missed thier attack!" << endl;
		cout << "You still have " << Player.PlayerHP << " HP." << endl;
	}
	PlayerManager::GetPlayerManager().SetPlayer(Player);	
	EnemyManager::GetEnemyManager().SetEnemy(Enemy);
}

void AttackSystem()
{
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();
	int i = 0;
	while (Player.PlayerHP > 0 || Enemy.EnemyHP > 0)
	{
		if (Player.PlayerHP <= 0)
		{
			exit;
		}

		if (i > 0)
		{
			cout << "The enemy stands unguarded, what do you do?" << endl;
		}
		cout << "1. Attack" << endl;
		cout << "2. Special Attack" << endl;

		i++;

		float choice;
		cin >> choice;
		if (choice == 1)
		{
			Player.PlayerSkillCharge++;
			if (Player.PlayerSkillCharge > 10)
			{
				Player.PlayerSkillCharge = 10;
			}
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
					Enemy.EnemyHP -= hitdamage + critdamage;
					if (Enemy.EnemyHP <= 0)
					{
						Enemy.EnemyHP = 0;
						cout << "The enemy takes a step back, looks into your eyes, then falls down dead... You WIN!" << endl << endl;
						Player.PlayerSkillCharge = 0;
						Enemy.EnemyisDead = true;
						break;
					}
					if (Enemy.EnemyHP > 0)
					{
						cout << "The enemy takes a step back in pain." << endl;
						cout << "The enemy now has " << Enemy.EnemyHP << " HP." << endl;
						cout << "Your skill charge is now " << Player.PlayerSkillCharge << endl << endl;
						EnemyAttackSystem();
					}
				}
				else
				{
					cout << "You dealt " << hitdamage << " damage to the enemy." << endl;
					Enemy.EnemyHP -= hitdamage;
					if (Enemy.EnemyHP <= 0)
					{
						Enemy.EnemyHP = 0;
						cout << "The enemy takes a step back, looks into your eyes, then falls down dead... You WIN!" << endl << endl;
						Player.PlayerSkillCharge = 0;
						Enemy.EnemyisDead = true;
						break;
					}
					if (Enemy.EnemyHP > 0)
					{
						cout << "The enemy flinches at your attack." << endl;
						cout << "The enemy now has " << Enemy.EnemyHP << " HP." << endl;
						cout << "Your skill charge is now " << Player.PlayerSkillCharge << endl << endl;
						EnemyAttackSystem();
					}
				}
			}
			else 
			{
				cout << "You miss your attack, the enemy scoffs at your puny arm swing!" << endl;
				cout << "The enemy still has " << Enemy.EnemyHP << " HP left." << endl;
				cout << "Your skill charge is now " << Player.PlayerSkillCharge << endl << endl;
				EnemyAttackSystem();
			}
		}
		else if (choice == 2)
		{
			if(Player.PlayerSkillCharge >= 2)
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
						Player.PlayerSkillCharge -= 2;
						cout << endl << "You chose " << Player.PlayerSkill1 << endl;
						cout << "You dealt " << Player.PlayerSkill1Damage << endl << endl;
						Enemy.EnemyHP -= Player.PlayerSkill1Damage;
						if (Enemy.EnemyHP <= 0)
						{
							Enemy.EnemyHP = 0;
							cout << "The enemy takes a step back, looks into your eyes, then falls down dead... You WIN!" << endl;
							Player.PlayerSkillCharge = 0;
							Enemy.EnemyisDead = true;
							break;
						}
						if (Enemy.EnemyHP > 0)
						{
							cout << "The enemy takes a step back in deep pain. " << endl;
							cout << "The enemy now has " << Enemy.EnemyHP << " HP." << endl;
							cout << "Your skill charge is now " << Player.PlayerSkillCharge << endl << endl;
							EnemyAttackSystem();
						}
					}
					else if (choice2 == Player.PlayerSkill2)
					{
						temp = 1;
						Player.PlayerSkillCharge -= 2;
						cout << endl << "You chose " << Player.PlayerSkill2 << endl;
						cout << "You dealt " << Player.PlayerSkill2Damage << endl << endl;
						Enemy.EnemyHP -= Player.PlayerSkill2Damage;
						if (Enemy.EnemyHP <= 0)
						{
							Enemy.EnemyHP = 0;
							cout << "The enemy takes a step back, looks into your eyes, then falls down dead... You WIN!" << endl;
							Player.PlayerSkillCharge = 0;
							Enemy.EnemyisDead = true;
							break;
						}
						if (Enemy.EnemyHP > 0)
						{
							cout << "The enemy takes a step back in deep pain. " << endl;
							cout << "The enemy now has " << Enemy.EnemyHP << " HP." << endl;
							cout << "Your skill charge is now " << Player.PlayerSkillCharge << endl << endl;
							EnemyAttackSystem();
						}
					}
					else if (choice2 == Player.PlayerSkill3)
					{
						temp = 1;
						Player.PlayerSkillCharge -= 2;
						cout << endl << "You chose " << Player.PlayerSkill3 << endl;
						cout << "You dealt " << Player.PlayerSkill3Damage << endl << endl;
						Enemy.EnemyHP -= Player.PlayerSkill3Damage;
						if (Enemy.EnemyHP <= 0)
						{
							Enemy.EnemyHP = 0;
							cout << "The enemy takes a step back, looks into your eyes, then falls down dead... You WIN!" << endl;
							Player.PlayerSkillCharge = 0;
							Enemy.EnemyisDead = true;
							break;
						}
						if (Enemy.EnemyHP > 0)
						{
							cout << "The enemy takes a step back stunned... " << endl;
							cout << "The enemy now has " << Enemy.EnemyHP << " HP." << endl;
							cout << "Your skill charge is now " << Player.PlayerSkillCharge << endl << endl;
							EnemyAttackSystem();
						}
					}
					else
					{
						temp = 0;
						cout << "This is not a skill, please pick again." << endl;
					}
					if (Enemy.EnemyHP <= 0)
					{
						break;
					}
				}
				if (Enemy.EnemyHP <= 0)
				{
					break;
				}
			}
			else
			{
				cout << "This is not an option, please recharge your skills first." << endl;
			}
		}
		else
		{
			cout << "This is not a choice, please pick again." << endl;
		}
	}
	PlayerManager::GetPlayerManager().SetPlayer(Player);
	EnemyManager::GetEnemyManager().SetEnemy(Enemy);
}