#pragma once
#include <string>

using namespace std;

class character {

public:
	character();
	character(std::string C_name, int C_heal);
	~character();
	
	void setCname(string);
	string getCname();

	void setCheal(int);
	int getCheal();

	void display();

protected:

	string name;
	int health;


};

