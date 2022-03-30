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
	
protected:
	bool check_input(string _input);
	string split_input(string input, map<int, char> dic);
	void show_inputs(string res);
	vector<string> user_input;
	string res;
	string response = "";
	int skip;
	bool string_check = false;
};

