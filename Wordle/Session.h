#pragma once
#include <string>
#include <map>
#include "Dictionary.h"
#include "Guess.h"
//#include "Statistic.h"
using namespace std;

class Game;
class Session
{
public:
	Session();
	Session(int* num);
	~Session();
	Game* game;
	Guess guess;
	string input;
	string expectation;

	bool won_res;

	int attempts = -1;
	int* attempts_ptr = &attempts;

protected:
	map<int, char> get_word(int num);
	string user_ans;
	string convert_lower(string user_ans);
	
	void comment(int num);
	vector<char> user_ans_char;
	map<int, string> list_comment = {};
	map<int, char> ans_map = {};

};

