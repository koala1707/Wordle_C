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
	~Session();
	Guess guess;
	map<int, char> get_word();
	map<int, char> ans_map = {};
	
	
	string expectation;

protected:
	
	
		
};

