#include "Session.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;

Session::Session(int* num)
{
    auto dictionary = get_word(*num);
    do{
        printf("guess >");
        cin >> user_ans;
        input = convert_lower(user_ans);
        //Check if the user input and an answer of dictionary is matched in guess class
        guess.question(expectation, dictionary, input);
        //Count how many attempts a user used
        *attempts_ptr += 1;
    } while (!(input == expectation || *attempts_ptr == 5));
    // Shows a comment if the user input is matched with the answer of dictionary
    if (*attempts_ptr < 6 && input == expectation) {
        comment(*attempts_ptr);
        // user won
        won_res = true;
    }
    else {
        printf("Correct answer: %s\n\n", expectation.c_str());
        // user lost
        won_res = false;
    }
    // Change an answer from dictionary
    *num += 1;
}

Session::~Session()
{
}

//change a answer(from dictionary) into a map<int, char>
map<int, char> Session::get_word(int num)
{
    Dictionary d;
    expectation = d.words[num];
    for (int i = 0; i < expectation.length(); i++) {
        ans_map.insert(pair<int, char>(i, expectation[i]));
    }
    return ans_map;
}

//change an input into lowercase
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





