#pragma once
#include <vector>
class Games
{
	bool hasEXP = true;
	bool hasMod = true;
	bool hasSword = false;
public:
	Games() = default;
	int Strength = 10, Health = 10, Wisdom = 10, Intelligence = 10, Experience = 10; //basic RPG variables, change numbers to change starting values.
	void StatsMod();
	void StatsMenu();
	void print();
	void gameover();

};