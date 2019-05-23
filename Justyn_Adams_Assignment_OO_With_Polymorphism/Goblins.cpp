#include <iostream>
#include "string"
#include "Goblins.h"

using namespace std;

Goblins::Goblins()
{

}


Goblins::Goblins(string magicalPowers, int power, bool colors)
{

	this->color = colors;
	this->powerLvl = power;
	this->magical = magicalPowers;

}

Goblins::~Goblins()
{
}

void Goblins::setMagicalPowers(string magicalPowers)
{
	this->magical = magicalPowers;
}
string Goblins::getMagicalPowers()
{
	return magical;
}

void Goblins::setPowerLvl(int power)
{
	this->powerLvl = power;
}

int Goblins::getPowerLvl()
{
	return powerLvl;
}

void Goblins::setColor(bool colors)
{
	this->color = colors;
}

bool Goblins::getColor()
{
	return color;
}

void Goblins::display()
{

	character::display();
	
	cout << "Magical Power: " << this->magical<< endl;
	cout << "Color Of Goblin: " << this->color << endl;
	cout << "Power Level: " << this->powerLvl << endl;

}

void Goblins::display(bool CharGoblin)
{
	character::display();

	if(CharGoblin)
	{
		cout << "Magical Power: " << this->magical << endl;
		cout << "Color Of Goblin: " << this->color << endl;
		cout << "Power Level: " << this->powerLvl << endl;
	
	}

}
	
	

