#pragma once
#include <string>
#include <map>
using namespace std;

class Session;

class Guess
{
public:
	Guess();
	Guess(int num_play, map<int, char>);
	~Guess();
	
	;
	Session* session;
	map<int, string> word_dic(int i, string s);
	//Session* _input;
	//string _input = "";
	void question(int num, string guess);
	string split_input(string input, map<int,char> dic);
	map<int, string> list_inputs;
	map<int, string> show_inputs(int times, string res);
	string input;
	string response = "";
	string result = "";
	//void show_inputs(int times, string res);
	void cal_guess();
	bool res = false;
	map<int, string> user_input = {};
protected:
	
	int skip;
	
	
	

};

