#pragma once
#include <string>
#include <map>
using namespace std;

class Game
{
public:
	void menu();
	int menu_number = 0;
	int* chose_ptr = &chose_play;
	
protected:
	int chose_play = 0;
	void stats();
	void help();
	map<int, int> show_guess_distribution(int attempt);
	map<int, int> list_distribution;
	map<int, int> result_distribution;
	bool check_win =false;
	int played = 0;
	int num_won=0;
	int streak=0;
	int max_streak=0;
	double percent_won = 0.0;
	map<int, int> won_attempts ={};
};

