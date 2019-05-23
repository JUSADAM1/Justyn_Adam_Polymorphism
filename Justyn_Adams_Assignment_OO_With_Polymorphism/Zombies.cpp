#include <iostream>
#include "Zombies.h"
#include "string"

using namespace std;


zombies::zombies()
{
}
/*I used this statements because they are easier for me to use instead of going through the work of using pointers
 * like dont get me wrong I can do pointers but, I am lazy like most programmers and it makes it feel like JAVA.
 */
zombies::zombies(string weapons, bool WepType, int speed)
{

	this->gun = weapons;
	this->gType = WepType;
	this->speedy = speed;

}

zombies::~zombies()
{

	this->gun = "";
	this->speedy = 0;
	this->gType = false;
	
}

void zombies::setSpeedy(int speed)
{
	
	this->speedy = speed;

}

int zombies::getSpeedy()
{

	return speedy;

}

void zombies::setGun(string weapons)
{

	this->gun = weapons;

}

string zombies::getGun()
{

	return gun;

}

void zombies::setgType(bool WepType)
{
	this->gType = WepType;
}

bool zombies::getgType()
{

	return gType;

}


void zombies::display(bool characterInfo)
{

	character::display();

	if(characterInfo)
	{

		cout << "This is the soldier class " << endl;
		cout << "This is only one class out of a long line of other types of zombies." << endl;
		cout << "This particular Zombie type is just a grunt, but can use these type of weapons like: " << "SMGs, Side Arms, and melee weapons but only," << this->gType << " at a time." << endl;
		cout << "Gun: " << this->gun << endl;
		cout << "The speed of a zombie can reach up to: " << this->speedy << endl;
		
	}
	else
	{

	}

}
void zombies::display()
{

	character::display();
	cout << "This is only one class out of a long line of other types of zombies." << endl;
	cout << "This particular Zombie type is just a grunt, but can use these type of weapons like: "<<"SMGs, Side Arms, and melee weapons but only," << this->gType <<" at a time."<< endl;
	cout << "Gun: " << this->gun << endl;
	cout << "The speed of a zombie can reach up to: " << this->speedy << endl;

}


