


using namespace std;


void AttackSystem()
{
	tempplayer Tester;
	cout << "READY!" << endl;
	cout << "BEGIN!" << endl << endl;
	cout << "The enemy is ready to fight, what do you do?" << endl << endl;
	cout << "1. Attack" << endl;
	cout << "2. Special Attack" << endl;
	cout << "3. Run" << endl;
	cout << "4. Surrender" << endl;

	float choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "You chose to Attack." << endl;
		int hitchance = (rand() % 100);
		if (hitchance)
		{

		}

	}
	else if (choice == 2)
	{
		cout << "You chose to Special Attack";
		
		
	

	}
	else if (choice == 3)
	{
		
	}
	else if (choice == 4)
	{

	}
	else
	{
		cout << "I'm sorry, that is not a choice, please pick again." << endl;
	}
}