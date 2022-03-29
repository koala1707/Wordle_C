#include "Session.h"
#include "Menu.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;

Session::Session()
 {

}

Session::Session(int* num)
{
    //auto dictionary = get_word();
    //guess.question(expectation, dictionary);
    auto dictionary = get_word(*num);
    guess.question(expectation, dictionary);
    *num += 1;
}

Session::~Session()
{
}

void Session::sequence(int num) {

}

map<int, char> Session::get_word(int num)
{
    Dictionary d;
    expectation = d.words[num];
    for (int i = 0; i < expectation.length(); i++) {
        ans_map.insert(pair<int, char>(i, expectation[i]));
    }
    return ans_map;
}




