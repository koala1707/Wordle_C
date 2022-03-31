#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

class Game
{
public:
	void menu();
	bool no_exit = true;
	
protected:
	map<int, string> map_menu;
	int chose_play = 0;
	int* chose_ptr = &chose_play;
	int menu_number = 0;
	bool check_win = false;
	int num_won = 0;
	int streak = 0;
	int max_streak = 0;
	double percent_won = 0.0;
	vector<int> result_distribution;
	vector<int> list_distribution = { 0,0,0,0,0,0 };

	void stats();
	void help();
	vector<int> show_guess_distribution(int attempt, bool won);
};

