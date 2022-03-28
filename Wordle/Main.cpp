#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <iostream>
#include <string>

#include "Game.h"
#include "Play.h"
#include "Statistic.h"
#include "Help.h"
#include "GameHelp.h"
#include "Menu.h"

using namespace std;

int main()
{
	
	Game game;
	do {
		game.menu();
	} while (game.menu_number != 0);
	
	return 0;
}
