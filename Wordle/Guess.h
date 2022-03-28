#pragma once
#include <string>
#include <map>
using namespace std;
class Guess
{
public:
	//Guess();
	////Guess(int times, string res);
	//~Guess();

	void question(int num, string guess);
	string split_input(string input);
	map<int, string> show_inputs(int times, string res);

	string response = "";
	string result = "";
	//void show_inputs(int times, string res);
	void cal_guess();
	bool res = false;
protected:
	
	int skip;
	
	
	map<int, string> user_input = {};

};

