#include "Guess.h"
#include "Session.h"
#include "string"
#include <map>
#include <iostream>
using namespace std;

//Guess::Guess()
//{
//    printf("Guess\n");
//    Session session;
//    
//    //split_input();
//    //while (!res) {
//    //    attempts += 1;
//    //    //question();
//    //    printf("guess >");
//    //    cin >> input;
//    //    split_input(input);
//    //    auto list = show_inputs(attempts, response);
//    //    for (int i = 0; i < list.size(); i++) {
//    //        printf("%s\n", list[i].c_str());
//    //    }
//    //}
//}

void Guess::question(int num, string guess)
{
    //Session session;
    //while (!res) {
        //attempts += 1;
        ////question();
        //printf("guess >");
        //cin >> input;
    //split_input(session.input);
    //split_input(guess);
    //auto list = show_inputs(session.attempts, response);
    auto list = show_inputs(num, guess);
    for (int i = 0; i < list.size(); i++) {
        printf("%s\n", list[i].c_str());
    }
    //}
}

//Guess::Guess(int times, string res)
//{
//    user_input.insert({ times, res });
//        for (int i = 0; i < user_input.size(); i++) {
//            printf("%s\n", user_input[i].c_str());
//        }
//}

//Guess::~Guess()
//{
//}

string Guess::split_input(string input)
{
    Session session;
    //map of the letter in dictionary
    auto answer = session.ans_map;
    string user_guess = session._input;
    for (int i = 0; i < input.length(); i++) {
        bool c = false;
        response = "";
        if (input[i] == answer[i]) {
            // printf("same position: %c\n", ans_map[i]);
             //response += '[' + s[i] + ']';
            response += '[';
            response += input[i];
            response += ']';
            skip = i;
        }
        else {
            for (int j = 0; j < answer.size(); j++) {
                if (input[i] == answer[j] && input[skip] != answer[j]) {
                    //printf("included: %c\n", ans_map[j]);
                    //response += '|' + s[i] + '|';
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

//void Guess::cal_guess()
//{
//    Session session;
//    if (session.input == session.expectation) {
//        res = true;
//    }
//    
//}



map<int, string> Guess::show_inputs(int times, string res)
{
    user_input.insert({ times, res });
    return user_input;
}



//void Guess::show_inputs(int times, string res)
//{
//    user_input.insert({ times, res });
//    for (int i = 0; i < user_input.size(); i++) {
//        printf("%s\n", user_input[i].c_str());
//    }
//}