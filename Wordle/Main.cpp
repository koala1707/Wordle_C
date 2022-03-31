#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

int main()
{
	Game game;
	do {
		game.menu();
	} while (game.no_exit = true);
	
	return 0;
}
