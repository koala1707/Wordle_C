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
    auto dictionary = get_word(*num);
    do{
        printf("guess >");
        cin >> user_ans;
        input = convert_lower(user_ans);
        guess.question(expectation, dictionary, input);
        *attempts_ptr += 1;
    } while (!(input == expectation || *attempts_ptr == 5));
    if (*attempts_ptr <= 5) {
        comment(*attempts_ptr);
    }
    *num += 1;
    //auto dictionary = get_word();
    //guess.question(expectation, dictionary);
   
    
   
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

string Session::convert_lower(string user_ans)
{
    for (int i = 0; i < user_ans.length(); i++) {
        user_ans_char.push_back(tolower(user_ans[i]));
    }
    string result(user_ans_char.begin(), user_ans_char.end());
    user_ans_char.clear();
    return result;
}

void Session::comment(int num) {
    list_comment.insert({ 0, "Impossible!" });
    list_comment.insert({ 1, "Amazing" });
    list_comment.insert({ 2, "Outstanding!" });
    list_comment.insert({ 3, "Great!" });
    list_comment.insert({ 4, "Nice one!" });
    list_comment.insert({ 5, "You got there!" });
    printf("%s\n\n", list_comment[num].c_str());
}




