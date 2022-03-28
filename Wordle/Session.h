#pragma once
#include <string>
#include <map>
#include "Menu.h"
#include "Dictionary.h"
#include "Guess.h"
//#include "Guess.h"
using namespace std;

class Session
{
public:
	Session();
	~Session();
	Guess guess;
	void game_start(string input);
	string _input = "";
	int attempts = 0;
	map<int, string> user_inputs;
	
	map<int, char> get_word();
	map<int, char> ans_map = {};
	
	Dictionary d;
	Menu m;
	string expectation = d.words[m.chose_play];

protected:
	void get_guess();
	
		
};

