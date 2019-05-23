#include <iostream>
#include "Character.h"
#include "Goblins.h"
#include "Zombies.h"

using namespace std;

int main(){
	
	cout << "Goblins!!!!!!!" << endl;
	Goblins gob = Goblins("ICE BEAM", 25, false);
	gob.setCname("Grunt: GOBLINS");
	gob.setCheal(100);
	gob.setColor(true);
	gob.display(true);

	system("pause");

	cout << "ZOMBIES!!!!!!!!!" << endl;
	zombies zom = zombies("AKA 47", false, 100);
	zom.setCname("Grunt: ZOMBIES");
	zom.setCheal(100);
	zom.display(false);

	system("pause");

	return 0;
}