#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"
using namespace std;

float character;
float player;
string name;

struct Knight
{
	float PlayerHP = 10;
	float PlayerArmor = 10;
	float PlayerHitChance = (rand () % 10) + 1;
	float PlayerHitDamage = (rand () % 5) + 1;
	float PlayerCritChance = (rand () % 20) + 1;
	float PlayerCritDamage = (rand () % 5) + 1;
	float PlayerDodge;
	float Playerisdead = false;
};
struct Asssassin
{
	float PlayerHP = 5;
	float PlayerArmor = 0;
	float PlayerHitChance = (rand() % 5) + 1;
	float PlayerHitDamage = (rand() % 3) + 1;
	float PlayerCritChance = (rand() % 20) + 1;
	float PlayerCritDamage = (rand() % 5) + 1;
	float PlayerDodge;
	float Playerisdead = false;
};
struct Tank
{
	float PlayerHP = 20;
	float PlayerArmor = 20;
	float PlayerHitChance = (rand() % 20) + 1;
	float PlayerHitDamage = (rand() % 25) + 1;
	float PlayerCritChance = (rand() % 30) + 1;
	float PlayerCritDamage = (rand() % 10) + 1;
	float PlayerDodge;
	float Playerisdead = false;
};
struct Mage
{
	float PlayerHP = 5;
	float PlayerArmor = 10;
	float PlayerHitChance = (rand() % 10) + 1;
	float PlayerHitDamage;
	float PlayerCritChance;
	float PlayerCritDamage;
	float PlayerDodge = 0;
	float Playerisdead = false;
};
struct tempplayer
{
	float PlayerHP = 10;
	float PlayerArmor = 10;
	float PlayerHitChance = (rand() % 1) + 1;
	float PlayerHitDamage = (rand() % 1) + 1;
	float PlayerCritChance = (rand() % 1) + 1;
	float PlayerCritDamage = (rand() % 1) + 1;
	float PlayerDodge = (rand() % 1) + 1;
	float Playerisdead = false;
};

void CharacterChoice()
{
	
	
	cout << "Welcome my child, I shall grant you a name. What will your name be." << endl;
	cin >> name;
	cout << "Fine, I shall grant you the name, " << name << " ." << endl;
	cout << "I will give you a decision, a choice! What will you be? A warrior? An asssassin? A tank? Or a Mage?" << endl;
	cout << "1. Warrior" << endl;
	cout << "2. Assassin" << endl;
	cout << "3. Tank" << endl;
	cout << "4. Mage" << endl;

	float temp = 0;
	while (temp == 0)
	{
		cin >> character;
		if (character == 1)
		{
			cout << "Exellent choice! You have chosen to become a warrior. I shall grant you with a variety of skills, a starter sword and a set of armor and your desposal!" << endl;
			player = 1;
			temp = 1;
		}
		else if (character == 2)
		{
			cout << "Exellent choice! You have chosen to become an assassin. I shall grant you with a steathy body, sneaky hands and a starter pair of daggers at your desposal!" << endl;
			player = 2;
			temp = 1;
		}
		else if (character == 3)
		{
			cout << "Exellent choice! You have chosen to become a tank. I shall grant you with a sturdy body, knowlage of support skills and a heavy starter shield at your desposal!" << endl;
			player = 3;
			temp = 1;
		}
		else if (character == 4)
		{
			cout << "Fine, you have chosen to become a mage so I shall grant you the skill to converse with spirits, the power to enchant your voice with elements and the knowlage of ancient runes!" << endl;
			player = 4;
			temp = 1;
		}
		else
		{
			cout << "Please pick again, this is not a choice." << endl;
			temp = 0;
		}
		cout << "Now go to sleep my child the contest will begin soon." << endl << endl << endl;
	}
}
void AttackSystem()
{
	tempplayer Tester;
	cout << "An enemy has appeared what do you do?" << endl;
	cout << "1. Attack" << endl;
	cout << "2. Use Item" << endl;
	cout << "3. Run" << endl;
	cout << "4. Surrender" << endl;

	float choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "You chose to attack." << endl;
		Tester.PlayerHitChance;
	}
	else if (choice == 2)
	{
		
	}
	else if (choice == 3)
	{
		cout << "Which item will you use?" << endl;
	}
	else if (choice == 4)
	{

	}
	else
	{
		cout << "I'm sorry, that is not a choice, please pick again." << endl;
	}
}




int main()
{
	srand(time(NULL));
	CharacterChoice();
	Story1();
}