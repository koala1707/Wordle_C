#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"
#include <map>
#include "Session.h"
#include <iostream>
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
		auto session = new Session(chose_ptr);
		if (session->won_res) {
			check_win = true;
		}
		else {
			check_win = false;
		}
		result_distribution = show_guess_distribution(session->attempts, check_win);
		
		delete session;
	}
	//See the statistic
	else if (menu_number == 2) {
		stats();
	}
	//See the help
	else if (menu_number == 3) {
		help();
	}
	//Invalid input
	else {
		int c = getchar();
		while (c != '\n' && c != EOF)
			c = getchar();
	}
}

void Game::stats() 
{
	if (check_win) {
		num_won++;
		streak++;
		max_streak++;
	}
	else {
		streak = 0;
	}
	if (*chose_ptr == 0) {
		double percent_won = 0.0;
	}
	else {
		percent_won = (double(max_streak) / double(*chose_ptr)) * 100;
	}
	printf("Played: %d Win%%: %.0f Current streak: %d Max streak: %d\n\n", 
		*chose_ptr, percent_won, streak, max_streak);
	printf("GUESS DISTRIBUTION\n");
	for (int i = 0; i < result_distribution.size(); i++) {
		printf("%d: %d\n", i + 1, result_distribution[i]);
	}
}

vector<int> Game::show_guess_distribution(int attemp, bool won) {

	for (int i = 0; i < list_distribution.size(); i++) {
		if (i == attemp && won) {
			list_distribution[i]++;
		}
	}

	return list_distribution;
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

