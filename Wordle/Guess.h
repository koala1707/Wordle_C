#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

class Session;
class Guess
{
public:
	void question(string answer, map<int, char> dictionary, string user_ans);

protected:
	bool last_match = false;
	bool input_type;
	string response{ "" };
	string last_letter;
	bool duplicate;
	int skip;
	vector<string> user_input;
	string split_res;
	bool string_check{ false };

	bool check_input(string _input);
	string split_input(string input, map<int, char> dic);
	void show_inputs(string res);
};

