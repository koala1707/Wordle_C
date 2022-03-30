#pragma once
#include <string>
#include <map>
#include "Menu.h"
#include "Dictionary.h"
#include "Guess.h"

using namespace std;

class Game;

class Session
{
public:
	Session();
	Session(int* num);
	~Session();
	string user_ans;
	string input;
	Game* game;
	Guess guess;
	map<int, char> get_word(int num);
	map<int, char> ans_map = {};
	void sequence(int num);
	string expectation;

protected:
	int i = 0;
	vector<char> user_ans_char;
	string convert_lower(string user_ans);
	int attempts = -1;
	int* attempts_ptr = &attempts;
	void comment(int num);
	map<int, string> list_comment = {};
		
};

