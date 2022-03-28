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
#include "Session.h"

using namespace std;

int main()
{
	Game game;
	do {
		game.menu();
		//auto menu_number = game.menu_number;
		////Start Playing the game
		//if (menu_number == 1) {
		//	//Play p;
		//	chose_play += 1;
		//	Session session = new Session;
		//	delete session
		//}
		////See the statistic
		//else if (menu_number == 2) {
		//	statistics();
		//}
		////See the help
		//else if (menu_number == 3) {
		//	//Help h;
		//	help();
		//}
		////Invalid input
		//else {
		//	int c = getchar();
		//	while (c != '\n' && c != EOF)
		//		c = getchar();
		//}
	} while (game.menu_number != 0);
	
	return 0;
}
