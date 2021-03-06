#include "stdafx.h"
#include "iostream"
#include "string"
#include <ctime>
#include <windows.h>
#include <tuple>
#include "AdvenDefs.h"





void MainMenu();
int login(int x);
void AdvenGame();
void RandomNums();

void LoginConfirm();
using namespace std;

Games run;


void GameMenu()
{
GameSelectMenu: //Game Selection Menu
	char gameType;
	cout << "\n\n\n";
	cout << "\t\t\t\tGame Selection\n\t\t\t\tR-Random Numbers\n\t\t\t\tP-Pong\n\t\t\t\tA-Adventure\n\t\t\t\tM-MainMenu\n\n";
	cin >> gameType;
	switch (gameType)
	{
	case 'R':
		RandomNums();
		break;
	case 'A':
		AdvenGame();
		break;
	case 'M':
		MainMenu();
		break;
	default:
		cout << "Bad input, please try again\n";
		break;
	}
	goto GameSelectMenu;
	return;
}



int main(int argc, char*argv[])
{
	LoginConfirm();
}

int login(int x)
{
	string name;
	cout << "Please input username\n";
	getline(cin, name);
	if (name != "Acescout92")
	{

		return (x = 0);
	}
	else
	{
		return (x = 1);
	}

}

void LoginConfirm()
{
	int LogCheck = 0;
	int loginOK = login(LogCheck);

	if (loginOK != 1)
	{
		cout << "I'm sorry, you are not registered to access this program. Goodbye \n ";
		return;
	}
	else MainMenu();
}

void MainMenu()
{
	mainMenu:
		char menuSelect; //begin main menu greeting
		cout << "\n\n\n\t\t\t";
		cout << "Hello, Bryce! Welcome to The Proving Grounds v.01! \n\n\n";
		cout << "\t\t\t\tWhat would you like to do today?\n\n\t\t\tG = Game\t\t\t\tF = Food\n\n\n\n";
		cin >> menuSelect;

		switch (menuSelect)
		{
			case 'G':
				GameMenu();
				break;
			case 'F': //potential restaurant decider
				void food();
				break;
			default:
				cout << "Bad input. Please input one of the given responses \n";
				break;

		}
		goto mainMenu;
		return;
}


void RandomNums()
{
	
	int guess = 0;
	char choice;
	srand((int)time(0));
	int i = (rand() % 20) + 1; //sets up the winning value to be a random number. Based on time, so requires waiting a few seconds to get a new num.
	int wrongGuess = 0;

	cout << "\n\n\t\t\tWelcome to the Random Numbers Game! I hope you enjoy!\n\n";
	cout << "\t\t\t\tPlease pick a number between 1 and 20\n\n\n";
	cin >> guess;

	while (guess != i)
	{	
		
		if (guess > i)
		{
			cout << "Your guess was too high\n";
		}
		else
		{
			cout << "Your guess was too low\n";
		}
		guess = 0;
		cin >> guess;
		wrongGuess++;
	}


	cout << "That's correct! It took you: " << wrongGuess << " tries to find the right answer! \n";
	//top of game menu 
	cout << "Thank you for playing! Please select an option:\nP-Play Again\nG-Game Menu\nM-Main Menu\n";
gameMenu:
	cin >> choice;
	switch (choice)
	{
	case 'M':
		MainMenu();
	case 'G':
		GameMenu();
	case 'P':
		RandomNums();
	default:
		cout << "Please input a valid choice\nP-Play Again\nG-Games Menu\nM-Main Menu\n";
		goto gameMenu;
	}



}


 


void AdvenGame()
{
	
	string playername;
	bool gamedone = false, statsmenu = false;
	
	char decision;


	cout << "Please input Player Name:\n";
	cin >> playername;

	cout << "Welcome, " << playername << " to NuAdven\n\n";
	cout << "\t\t\tLong Ago, somethingsomethingsomethingblahblahblah just test game mechanics.\n\n";
	
	while (!gamedone)

	{

		decision1:
			cout << "\t\t\tPrincess encounter: Please save kingdom\n";
			cin >> decision;

			switch (decision)
			{
			case 'Y':
				cout << "\t\tThe Princess thanks you. You being your journey to the castle\n\n";
				break;
			case 'N':
				cout << "\t\tEverything dies, gg\n";
				run.gameover();
			case 'S':
				run.StatsMenu();
				goto decision1;	
			default:
				cout << "Input something that makes sense, dingus\n";
				goto decision1;
			}

			return;
	}
}





 

  
 
 
 