#include "Session.h"
#include "Menu.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;

Session::Session()
{
    
    while (guess.input != expectation) {
        attempts += 1;
        auto dictionary = get_word();
        Guess(attempts, dictionary);
        /*user_inputs = guess.user_input;
        for (int i = 0; i < user_inputs.size(); i++) {
            printf("%s\n", user_inputs[i].c_str());
        }*/

        //printf("%s", d.words[m.chose_play].c_str());
        

        //printf("guess >");
        //cin >> _input;
        //game_start(_input);
       
        //string Guess::split_input(_input);
        //printf("input from guess: %s", guess._input);
        //string guess_res = guess.split_input(_input);
        //printf("%s", guess_res);
        
        
        //auto show_all_inputs = guess.show_inputs(attempts, guess_res);
        //get_guess();
        //guess.question(attempts, input);
        //guess.split_input(input);
        //Guess(attempts, guess.response);
        //guess.show_inputs(attempts, guess.response);
        //list_ans.push_back(input);
        //auto show_all_inputs = show_inputs(attempts, response);
      
        /*for (int i = 0; i < show_all_inputs.size(); i++) {
            printf("%s\n", show_all_inputs[i] .c_str());
        }*/
       
    }
}

Session::~Session()
{
}

void Session::game_start(string input) 
{
    Guess guess;
    printf("game_start\n");
    //string g = guess.split_input(input);
    //printf("g: %s\n", guess.response.c_str());
    //printf("g: %s\n", g.c_str());
}


map<int, char> Session::get_word()
{
    for (int i = 0; i < expectation.length(); i++) {
        ans_map.insert(pair<int, char>(i, expectation[i]));
    }
    return ans_map;
}

//void Session::get_guess()
//{
//    Guess guess;
//    guess.question(attempts, input);
//}


