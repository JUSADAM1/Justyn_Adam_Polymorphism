#include <iostream>
#include "Character.h"
#include "string"

using namespace std;

character::character()
{
}

character::~character()
{
}

character::character(string C_name, int C_heal)
{
	this-> name = C_name;
	this-> health = C_heal;
}
void character::setCname(string C_name)
{

	this->name = C_name;
}

string character::getCname()
{

	return name;
	
}
//Health level cant go negative
void character::setCheal(int C_heal)
{
	if(C_heal <= 0 || C_heal >= 100)
	{
		this->health = C_heal;
	}
	else
	{
		cout << "IF YOU ARE SEEING THIS THEN YOU BROKE THE PROGRAM " << endl;
	}
}

int character::getCheal()
{
	return health;
}

void character::display()
{
	cout << "Name: " << this->name << endl;
	cout << "Health Level: " << this->health << endl;
}


