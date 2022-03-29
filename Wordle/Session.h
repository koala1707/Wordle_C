#pragma once
#include <string>
#include <map>
#include "Menu.h"
#include "Dictionary.h"
#include "Guess.h"

using namespace std;

class Session
{
public:
	Session();
	Session(int count);
	~Session();
	Guess guess;
	map<int, string> user_inputs;
	
	map<int, char> get_word(int num);
	map<int, char> ans_map = {};
	
	Dictionary d;
	string expectation;

protected:
	void get_guess();
	
		
};

