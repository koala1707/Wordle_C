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
		//int* chose_ptr = &chose_play;
		auto session = new Session(chose_ptr);
		//printf("%s\n", session_mem.won_res ? "true" : "false");
		//printf("mem: %d\n", *session_mem.won_ptr);
		played = session->attempts_ptr;
		result_distribution = show_guess_distribution(session->attempts);
		if (session->won_res) {
			check_win = true;
		}
		else {
			check_win = false;
		}
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
	printf("max: %d / chose_ptr: %d\n", max_streak, *chose_ptr);
	printf("played: %d\n", *played);
	percent_won = ((max_streak / *chose_ptr) * 100);
	printf("Played: %d Win%: %f Current streak: %d Max streak: %d\n\n", 
		*chose_ptr, percent_won, streak, max_streak);
	cout << "Played: " << *chose_ptr << " Win%: "<< percent_won << " Current streak: " << streak << " Max streak: " << max_streak<< endl;
	printf("GUESS DISTRIBUTION\n");
	for (int i = 0; i < won_attempts.size(); i++) {
		printf("%d: %d\n", i + 1, won_attempts[i]);
	}
}

map<int,int> Game::show_guess_distribution(int attemp) {


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

