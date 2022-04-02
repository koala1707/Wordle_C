#pragma once
#include <string>
#include <map>
#include <vector>
#include "Session.h"
using namespace std;

class Game
{
public:
	void menu();
	bool no_exit{ true };
	Session* session;
	
protected:
	string user_option;
	int menu_number{ 0 };
	map<int, string> map_menu;
	int chose_play{ 0 };
	int* chose_ptr{ &chose_play };
	bool check_win{ false };
	int num_won{ 0 };
	int streak{ 0 };
	int max_streak{ 0 };
	double percent_won{ 0.0 };
	vector<int> result_distribution;
	vector<int> list_distribution{ 0,0,0,0,0,0 };

	int check_input(string input);
	void stats();
	void help();
	vector<int> show_guess_distribution(int attempt, bool won);
};


