#pragma once
#include <string>
#include <map>
using namespace std;

class Session;

class Guess
{
public:
	/*Guess();
	Guess(int num_play, map<int, char>);
	~Guess();*/
	Session *session;
	void question(string answer,map<int, char> dictionary);
	string split_input(string input, map<int,char> dic);
	void show_inputs(string res);
	
protected:
	string input;
	int attempts = 0;
	string response = "";
	int skip;
	int num_guess;
	map<int, string> user_input = {};
	void comment(int num);
	map<int, string> list_comment = {};
	bool check_input(string _input);
	bool string_check = false;

};

