#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

class Game
{
public:
	void menu();
	int menu_number = 0;
	bool no_exit = true;
	int* chose_ptr = &chose_play;
	
protected:
	map<int, string> map_menu;
	int chose_play = 0;
	void stats();
	void help();
	vector<int> show_guess_distribution(int attempt, bool won);
	vector<int> result_distribution;
	bool check_win =false;
	//int played = 0;
	int num_won=0;
	int streak=0;
	int max_streak=0;
	double percent_won = 0.0;
	vector<int> list_distribution = {0,0,0,0,0,0};
};

