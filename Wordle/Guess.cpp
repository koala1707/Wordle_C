#include "Guess.h"
#include "Session.h"
#include "string"
#include "Game.h"
#include <map>
#include <iostream>
using namespace std;

void Guess::question(string answer,map<int, char> dictionary)
{
    do {
        printf("guess >");
        cin >> user_ans;
        input = convert_lower(user_ans);
        bool input_type = check_input(input);
        if (input_type && input.length() == 5) {
            res = split_input(input, dictionary);
            show_inputs(res);
            attempts += 1;
        }
    } while (!(input == answer || attempts == 6));

    if(attempts < 6) {
        comment(attempts);
    };

    //Game game;
    //game.menu();
;}

string Guess::split_input(string input, map<int, char> dic)
{
    response = "";
    for (int i = 0; i < input.length(); i++) {
        bool c = false;
        if (input[i] == dic[i]) {
            response += '[';
            response += input[i];
            response += ']';
            skip = i;
        }
        else {
            for (int j = 0; j < dic.size(); j++) {
                if (input[i] == dic[j] && input[skip] != dic[j]) {
                    response += '|';
                    response += input[i];
                    response += '|';
                    c = true;
                    break;
                }
            }
            if (!c) {
                response += ' ';
                response += input[i];
                response += ' ';
            }
        }
    }
    return response;
}

void Guess::show_inputs(string res)
{
    user_input.insert({ attempts, res });
    for (int i = 0; i < user_input.size(); i++) {
        printf("%s\n", user_input[i].c_str());
    }
}

void Guess::comment(int num) {
    list_comment.insert({ 0, "Impossible!" });
    list_comment.insert({ 1, "Amazing" });
    list_comment.insert({ 2, "Outstanding!" });
    list_comment.insert({ 3, "Great!" });
    list_comment.insert({ 4, "Nice one!" });
    list_comment.insert({ 5, "You got there!" });
    printf("%s\n\n", list_comment[num].c_str());
}

bool Guess::check_input(string _input) 
{
    for (int i = 0; i < _input.length(); i++) {
        string_check = false;
        if (isdigit(_input[i]) == false) {
            string_check = true;
        }
        else {
            break;
        }
    }
    return string_check;
}

string Guess::convert_lower(string user_ans) 
{
    for (int i = 0; i < user_ans.length(); i++) {
        user_ans_char.push_back(tolower(user_ans[i]));
    }
    string result(user_ans_char.begin(), user_ans_char.end());
    user_ans_char.clear();
    return result;
}
