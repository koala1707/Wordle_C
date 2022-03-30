#pragma once
#include <string>
#include "Statistic.h"
using std::string;

class Game
{
public:

	void menu();
	int menu_number = 0;
	int* chose_ptr = &chose_play;
protected:
	
	int chose_play = 0;
	void help();
};

