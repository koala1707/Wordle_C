#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Play.h"
#include "Dictionary.h"
#include "Menu.h"

using namespace std;

Play::Play()
{
    Menu m;
    Dictionary d;
    vector<string> list_ans = {};
    string input;

    while(input != d.words[m.chose_play]){
        //printf("%s", d.words[m.chose_play].c_str());
        //array?? to store input for game??
        printf("guess >");
        cin >> input;

        list_ans.push_back(input);
    }
    
}


Play::~Play()
{
}

void Play::split(string s)
{
    s = "apple";

}
