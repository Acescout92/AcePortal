#include "stdafx.h"
#include "iostream"
#include "string"
#include <ctime>
void MainMenu();
void RandomNums();
int login(int x);
void LoginConfirm();
void GameMenu();

using namespace std;
int main()
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
		cout << "Hello, Anon! Welcome to AcePortal v.01! \n\n\n";
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
		//case 'A':
			//AdvenGame();
			//break;
	case 'M':
		break;
	default:
		cout << "Bad input, please try again\n";
		break;
		
	}

	goto GameSelectMenu;
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
	/*Objectives for v.01:
	  1. Create basic graphics 
	      -defined border; I want (ASCII 178) for vertical, and (ASCII 205) for horizontal.
		  -clear text box, defined with above parameters
		  -stretch goal: potential inventory box. 
	  2. Create basic story layout
	      -We should be able to accept a quest, answer a riddle, enter a castle, solve a puzzle, acquire a sword, and kill a monster.
		  -NPCs: Princess, Guard, Goblin.
		  -v.01 will include only two dialogue choices per NPC, each with unique reactions and implications. Story will be very short initially.
	  3. Establish core game logic
	      -Outside of being text-based, I want the gamer to be able to know what items they have.
		  -v.01 will rely on strictly boolean logic for items (sword = 0/sword = 1). Future plans to implement pointers.
		  -Stretch goal: implement health and damage system. Will require random number generators for each item and NPC.
		  -Future goal: Player stats including ATK, MAG, DEF, INT, etc that will influence combat and puzzle outcomes.
	  4. Basic story:
		 -Introduction to the world
			-Make up some retarded bullshit you absolute shitheel.
		 -Player is a knight
		 -Princess asks knight to save her kingdom after a dark wizard conquers her castle
		    -YES: Player heads to castle, meets guard
			-NO: GAME OVER (add some snark)
		 -Guard will not let knight in until he solves a riddle
		    -RIDDLE: Guard will allow play in if they can solve his riddle
					-riddle: What starts life with four legs, has two legs in the middle, and ends life with three? 
					         -ANSWER: Human
							          -May want to throw in numerous "right answers" if checking a string.
							 -WRONG ANSWER:
							          -GAME OVER
			-ATTACK: GAME OVER: without a weapon, the guard cuts player's head off
		 -There is a sword held by a statue
		    -RECOVER: a puzzle is initiated
					  -Statue reads: "The Vision of Justice"
									-OPTIONS:
										-Pull at sword
											-does nothing, Goblin approaches
										-Remove statue's eyeballs
											-solution, player receives sword
										-Pull on statue
											-GAME OVER the statue crushed you, retard.
										-Push statue over
										    -Goblin shows up to investigate the noise
		 -A Goblin approaches, "combat ensues"
			-If player has sword:
				-ATTACK
					-Kills Goblin
				-RUN
					-GAME OVER goblins are quick litter fuckers
			-If player does not have sword:
				-GAME OVER the goblin straight up Tyson Foods your ass.
					  */
}

