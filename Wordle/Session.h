#pragma once
#include <string>
#include <map>
#include "Guess.h"
using namespace std;

class Game;
class Session
{
public:
	Session(int* num);
	~Session();
	Game* game;
	Guess guess;

	bool won_res;
	int attempts{ -1 };
	int* attempts_ptr{ &attempts };

protected:
	string user_ans;
	string input;
	string expectation;
	vector<char> user_ans_char;
	map<int, string> list_comment{};
	map<int, char> ans_map{};

	map<int, char> get_word(int num);
	string convert_lower(string user_ans);
	void comment(int num);
};

