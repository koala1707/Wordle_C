#include "Session.h"
#include "Menu.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;

Session::Session()
{
   
}

Session::Session(int count) {
    auto dictionary = get_word(count);
    //while (guess.input != expectation || guess.attempts == 5) {

        //Guess(attempts, dictionary); 
    guess.question(expectation, dictionary);

    //}
}

Session::~Session()
{
}

map<int, char> Session::get_word(int num)
{
    printf("num: %d\n", num);
    expectation = d.words[num];
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


