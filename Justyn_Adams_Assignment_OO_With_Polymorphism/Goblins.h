#pragma once
#include <string>
#include "Character.h"

class Goblins:public character
{
public:
	Goblins();
	
	Goblins(string magicalPowers, int power, bool colors);

	~Goblins();

	void setMagicalPowers(string magical);
	string getMagicalPowers();

	void setPowerLvl(int powerLVL);
	int getPowerLvl();

	void setColor(bool colors);
	bool getColor();

	void display(bool CharGoblin);
	void display();

private:

	string magical;
	int powerLvl;
	bool color;

};

