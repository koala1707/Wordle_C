#include "Guess.h"
#include "Session.h"
#include "string"
#include <map>
#include <iostream>
using namespace std;

// Check if the user input is matched with the answer in the dictionary
void Guess::question(string answer,map<int, char> dictionary, string input)
{
        input_type = check_input(input);
        // Check all characters of the user input are not integer and exact 5 letters
        if (input_type && input.length() == 5) {
            split_res = split_input(input, dictionary);
            show_inputs(split_res);
        }
}

//Split the user input and then it stores into map<int, char>
string Guess::split_input(string input, map<int, char> dic)
{
    response = "";
    skip = 0;
   
    for (int i = 0; i < input.length(); i++) {
        //Check if it's already used || for previous letters 
        duplicate = false;

        if (input[i] == dic[i]) {
            response += '[';
            response += input[i];
            response += ']';
            //Found the same location and same letter
            skip = i;
        }
        else {
            //A word of dictionary starts after different letter (different position)
            for (int j = skip; j < dic.size() - skip; j++) {
                if (skip != 0) {
                    if (input[i] == dic[j] && input[skip] != dic[j]) {
                        response += '|';
                        response += input[i];
                        response += '|';
                        duplicate = true;
                        break;
                    }
                }
                //The first letter is not the same position but it's included.
                else {
                    if (input[i] == dic[j]) {
                        response += '|';
                        response += input[i];
                        response += '|';
                        duplicate = true;
                        break;
                    }
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

// Shows all inputs user did
void Guess::show_inputs(string res)
{
    user_input.push_back(res);
    for (int i = 0; i < user_input.size(); i++) {
        printf("%s\n", user_input[i].c_str());
    }
}

// Check if the user input is all string
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
