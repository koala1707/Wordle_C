#pragma once
#include <string>
using std::string;

class Game
{
public:
	virtual string option()=0;
	void select();

protected:
	//int select = 0;
	//int* ptr;
};

