#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

class Session;

class Guess
{
public:
	Session *session;
	void question(string answer,map<int, char> dictionary, string user_ans);
	string split_input(string input, map<int,char> dic);
	void show_inputs(string res);
	int play_game;
	
protected:
	//string user_ans;
	//vector<char> user_ans_char;
	//string input;
	//int attempts = 0;
	string response = "";
	string res;
	int skip;
	int num_guess;
	//map<int, string> user_input = {};
	vector<string> user_input;
	//void comment(int num);
	//map<int, string> list_comment = {};
	bool check_input(string _input);
	bool string_check = false;
	//string convert_lower(string user_ans);

};

