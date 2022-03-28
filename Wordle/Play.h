#pragma once
#include <string>
#include <vector>
#include <map>
#include "Dictionary.h"
#include "Menu.h"
using namespace std;

class Play
{
public:
	Play();
	~Play();
	

protected:
	void split_input(string s);
	vector<string> list_ans = {};
	vector<char> input_letters = {};
	string response = "";
	//find a letter which is the same position as Dictionary
	int skip;

	map<int, string> user_input = {};
	map<int, string> show_inputs(int times, string res);
	map<int, char> ans_map = {};
	int attempts;

	
	
	string input;
	Dictionary d;
	Menu m;
	string expectation = d.words[m.chose_play];
};

