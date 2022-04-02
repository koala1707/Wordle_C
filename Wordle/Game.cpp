#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"
#include <map>
#include "Session.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Options of Wordle
void Game::menu()
{
	printf("Welcome to Wordle.\nSelect an option :\n\n");

	map_menu[1] = "Play a game.";
	map_menu[2] = "View statistic.";
	map_menu[3] = "View help.";

	for (const auto& x : map_menu) {
		printf(" %d. %s\n", x.first, x.second.c_str());
	}
	// ask a user input
	printf("> ");
	cin >> user_option;
	menu_number = check_input(user_option);
	
	//Start Playing Wordle
	if (menu_number == 1) {
		unique_ptr<Session> session(new Session(chose_ptr));
		
		if (session->won_res) {
			num_won++;
			streak++;
			max_streak++;
			check_win = true;
		}
		else {
			streak = 0; 
			check_win = false;
		}
		result_distribution = show_guess_distribution(session->attempts, check_win);
	}
	//See the statistic
	else if (menu_number == 2) {
		stats();
	}
	//See the help
	else if (menu_number == 3) {
		help(); 
	}
	//menu_number = 0;
	else {
		int invalid_input = getchar();
		while (invalid_input != '\n' && invalid_input != EOF)
			invalid_input = getchar();
	}
}

//check if the user input is valid.
int Game::check_input(string input) {
	//delete spaces in the user input
	setfill(input);
	vector<char> split_input(input.begin(), input.end());
	for (int i = 0; i < split_input.size(); i++) {
		if (split_input.size() == 1) {
			if (split_input[0] == '1') {
				return 1;
			}
			else if (split_input[0] == '2') {
				return 2;
			}
			else if (split_input[0] == '3') {
				return 3;
			}
		}
	}	
	return 0;
}

void Game::stats() 
{
	//a user hasn't started playing Wordle yet. The result of statistics is all zero.
	if (*chose_ptr == 0) {
		double percent_won = 0.0;
		result_distribution = list_distribution;
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

