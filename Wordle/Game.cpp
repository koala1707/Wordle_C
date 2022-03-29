#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"
#include <map>
#include "Session.h"
#include "Statistic.h"
using namespace std;

void Game::menu()
{
	map<int, string> menu;

	printf("Welcome to Werdle.\nSelect an option :\n\n");

	menu[1] = "Play a game.";
	menu[2] = "View statistic.";
	menu[3] = "View help.";

	for (const auto& x : menu) {
		printf(" %d. %s\n", x.first, x.second.c_str());
	}

	int* menu_ptr = &menu_number;
	printf("> ");
	scanf("%d", menu_ptr);

	//Start Playing the game
	if (menu_number == 1) {
		Session s;//Play p;
		//Session* session = new Session();
		auto session = new Session();
		
		//auto new_session = new Session;
		delete session;
		chose_play += 1;

	}
	//See the statistic
	else if (menu_number == 2) {
		statistics();
	}
	//See the help
	else if (menu_number == 3) {
		//Help h;
		help();
	}
	//Invalid input
	else {
		int c = getchar();
		while (c != '\n' && c != EOF)
			c = getchar();
	}


}

//void Game::play()
//{
//	//Session session;
//	//Session();
//	auto new_session = new Session();
//	delete new_session;
//}

void Game::statistics()
{
}

void Game::help()
{
	const char* help = "Guess the WERDLE in six tries.\n\n\
Each guess must be a five-letter word. Hit the enter button to submit.\n\n\
Examples\n\
[A] P P L E\n\
The letter A is in the correct position.\n\
D |E| A L T\n\
The letter E is in the word but in the wrong position.\n\n";

	printf("%s", help);
}

void Game::select()
{
	

	/*int select = 0;
	int* ptr = &select;
	printf("Welcome to Werdle\nSelect an option: \n\n");
	printf(" 1.Play a game.\n 2.View statistic.\n 3.View help.\n");*/
	
}
