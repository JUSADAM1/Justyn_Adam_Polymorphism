#pragma once
#include <string>
#include "Character.h"

using namespace std;

class zombies : public character
{
public:

	zombies();
	zombies(string weapons, bool WepType, int speed);
	~zombies();

	void setGun(string);
	string getGun();

	void setSpeedy(int);
	int getSpeedy();

	void setgType(bool);
	bool getgType();

	void display();
	void display(bool characterInfo);


private:

	string gun;
	bool gType;
	int speedy;
};

