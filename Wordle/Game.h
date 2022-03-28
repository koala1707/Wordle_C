#pragma once
#include <string>
using std::string;

class Game
{
public:
	/*Game();
	~Game();*/
	void menu();
	void show_function();
	int menu_number = 0;
	int chose_play = 0;
	void play();
	void statistics();
	void help();
	//virtual string option()=0;
	void select();

protected:
	//int select = 0;
	//int* ptr;
};

