#include "Guess.h"
#include "Session.h"
#include "string"
#include <map>
#include <iostream>
using namespace std;

void Guess::question(string answer,map<int, char> dictionary, string input)
{
        input_type = check_input(input);
        if (input_type && input.length() == 5) {
            split_res = split_input(input, dictionary);
            show_inputs(split_res);
        }
}

string Guess::split_input(string input, map<int, char> dic)
{
    response = "";
    for (int i = 0; i < input.length(); i++) {
        duplicate = false;
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
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
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
    user_input.push_back(res);
    for (int i = 0; i < user_input.size(); i++) {
        printf("%s\n", user_input[i].c_str());
    }
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
