#define _CRT_SECURE_NO_WARNINGS
#include "Menu.h"
#include <map>
#include <string>
#include "Game.h"
#include "Play.h"
#include "Statistic.h"
#include "Help.h"

using namespace std;

void Menu::menu()
{
	map<int, string> menu;

	printf("Welcome to Werdle.\nSelect an option :\n\n");

	menu[1] = "Play a game.";
	menu[2] = "View statistic.";
	menu[3] = "View help.";

	for (const auto& x : menu) {
		printf(" %d. %s\n", x.first, x.second.c_str());
	}

	int *menu_ptr = &menu_number;
	printf("> ");
	scanf("%d", menu_ptr);
	
	
}

void Menu::show_function()
{
	menu();

	Game* gamePtr = NULL;

	if (menu_number == 1) {
		gamePtr = new Play();
		printf("%s",gamePtr->option().c_str());
		
	}
	else if (menu_number == 2) {
		gamePtr = new Statistic();
		printf("%s", gamePtr->option().c_str());
		
	}
	else if (menu_number == 3) {
		gamePtr = new Help();
		printf("%s", gamePtr->option().c_str());
		
	}
	else {
		int c = getchar();
		while (c != '\n' && c != EOF)
			c = getchar();
		
	}
	
}
