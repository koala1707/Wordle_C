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
	Game* game;
	Guess guess;
	map<int, char> get_word(int num);
	map<int, char> ans_map = {};
	
	void sequence(int num);
	string expectation;

protected:
	int i = 0;
	
	
		
};

