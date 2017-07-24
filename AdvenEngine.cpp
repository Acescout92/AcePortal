#include "stdafx.h"
#include "iostream"
#include "string"
#include <ctime>
#include <windows.h>
#include <tuple>
#include "AdvenDefs.h"

using namespace std;
void Games::StatsMod()
{

	int stMod, hpMod, wisMod, inMod; //stFin, hpFin, wisFin, inFin, expFin;
	int newStrength, newHealth, newWisdom, newIntelligence;


	char select;
	if (hasEXP == true)
	{
		cout << "Available points: " << Experience << endl;
		//print();
		while (Experience > 0)
		{
		LevelUp:
			cout << "\t\tStrength: " << Strength << endl;
			cout << "\t\tHealth: " << Health << endl;
			cout << "\t\tWisdom: " << Wisdom << endl;
			cout << "\t\tIntelligence: " << Intelligence << endl;
			cout << "\n\t\tAvailable Experience Points: " << Experience << endl;
			cout << "Choose which stat you would like to modify: S, H, W, I, R to Return: ";
			cin >> select;
			switch (select)
			{
			case 'S':
				cout << "How many points?\n";
				cin >> stMod;
				if (stMod > Experience)
				{
					cout << "Wrong Value" << endl;
					goto LevelUp;
				}
				else
				{
					Experience = Experience - stMod;
					newStrength = Strength + stMod;
					cout << "Strength is now: " << newStrength << endl;
					hasMod = true;
					Strength = newStrength;
					return;
				}
			case 'H':
				cout << "How many points?" << endl;
				cin >> hpMod;
				if (hpMod>Experience)
				{
					cout << "Wrong Value" << endl << "\n";
					goto LevelUp;
				}
				else
				{
					Experience = Experience - hpMod;
					newHealth = Health + hpMod;
					cout << "Health is now: " << newHealth << endl;
					hasMod = true;
					Health = newHealth;
					return;
				}
			case 'W':
				cout << "How many points?" << endl;
				cin >> wisMod;
				if (wisMod > Experience)
				{
					cout << "Wrong Value" << endl;
					goto LevelUp;

				}
				else
				{
					Experience = Experience - wisMod;
					newWisdom = Wisdom + wisMod;
					cout << "Wisdom is now: " << newWisdom << endl;
					hasMod = true;
					Wisdom = newWisdom;
					return;
				}
			case 'I':
				cout << "How many points?\n";
				cin >> inMod;
				if (inMod > Experience)
				{
					cout << "Wrong Value" << endl << "\n";
					goto LevelUp;

				}
				else
				{
					Experience = Experience - wisMod;
					newIntelligence = Intelligence + inMod;
					std::cout << "Intelligence is now: " << newIntelligence << endl;
					hasMod = true;
					Intelligence = newIntelligence;
					return;
				}
			case 'R':
				break;
			}
			return;
		}
	}
}
void Games::gameover()
{
	cout << "You dead, guy\n";
	return;
}
void Games::StatsMenu()
{

	char choice;
	cout << "\t\tStats, M for modification, L for List: \n";
	cin >> choice;
	switch (choice)
	{
	case 'L':
		print();
		break;
	case 'M':
		StatsMod();
		break;
	default:
		cout << "Wrong input: ";
		break;
	}
	return;

}
void Games::print()
{
	//Reference Stats() and prints its current values


	cout << "\t\tStrength is: " << Strength << endl;
	cout << "\t\tHealth is: " << Health << endl;
	cout << "\t\tWisdom is: " << Wisdom << endl;
	cout << "\t\tIntelligence is: " << Intelligence << endl;
	cout << "\t\tExperience points: " << Experience << endl;


}

