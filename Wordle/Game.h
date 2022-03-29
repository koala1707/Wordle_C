#pragma once
#include <string>
using std::string;

class Game
{
public:
	void menu();
	int menu_number = 0;
	int chose_play = 0;
	void statistics();
	void help();
	bool stop_game = false;

protected:
};

