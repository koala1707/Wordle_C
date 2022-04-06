#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

int main()
{
	Game game;
	//Keep asking options to user.
	do {
		game.menu();
		//game.menu_number = 0;
	} while (game.no_exit = true);
	
	return 0;
}
