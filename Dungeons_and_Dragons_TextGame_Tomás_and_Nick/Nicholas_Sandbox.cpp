#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"


using namespace std;


void AttackSystem()
{
	tempplayer Tester;
	cout << "READY!" << endl << endl;
	cout << "BEGIN!" << endl << endl;
	cout << "The enemy is ready to fight, what do you do?" << endl;
	cout << "1. Attack" << endl;
	cout << "2. Use Item" << endl;
	cout << "3. Run" << endl;
	cout << "4. Surrender" << endl;

	float choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "You chose to upper cut." << endl;
		Tester.PlayerHitChance;
	}
	else if (choice == 2)
	{
		cout << "You chose to kick low";
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