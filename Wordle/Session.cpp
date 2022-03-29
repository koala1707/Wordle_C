#include "Session.h"
#include "Menu.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;

Session::Session()
{
    auto dictionary = get_word();
    guess.question(expectation, dictionary);
}

Session::~Session()
{
}

map<int, char> Session::get_word()
{
    expectation = d.words[0];
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


