#include <iostream>

using namespace std;

void playGame();
void playMulti();
void optionsMenu();
void creditsScreen();

int main()
{
	int menuInput = 0;
	bool menuLoop = true;

	do
	{
		cout << "Welcome to the menu. Please select from the following options:" << endl;
		cout << "Choose 1 for play game.\nChoose 2 for Multiplayer.\nChoose 3 for Options.\nChoose 4 for Credits.\n";
		cout << "Choose 5 to exit.\nEnter your choice and push enter: ";

		cin >> menuInput;

		switch (menuInput)
		{
		case 1: playGame();
			break;
		case 2: playMulti();
			break;
		case 3: optionsMenu();
			break;
		case 4: creditsScreen();
			break;
		case 5: menuLoop = false;
			break;
		default: cout << "Invalid input. Please try again.\n";
			break;
		}
	} while (menuLoop);

	return 0;
}

void playGame()
{
	cout << "Playing game." << endl;

	for (int i = 0; i < 10; i = i + 2)
	{
		cout << "i: " << i << endl;
		for (int j = 0; j < 10; j++)
			cout << "j: " << j << endl;
	}
}


void playMulti()
{
	cout << "Playing multiplayer." << endl;
}

void optionsMenu()
{
	cout << "Options menu.\n";
}

void creditsScreen()
{
	cout << "Credits.\n";
}