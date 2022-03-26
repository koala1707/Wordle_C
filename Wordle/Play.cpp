#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <array>
#include <map>
#include "Play.h"
#include "Dictionary.h"
#include "Menu.h"

using namespace std;

Play::Play()
{
   
    Menu m;
    Dictionary d;
 
   // expectation = d.words[m.chose_play];

    while(input != expectation){
        attempts += 1;
        //printf("%s", d.words[m.chose_play].c_str());
        printf("guess >");
        cin >> input;
        split_input(input);
        list_ans.push_back(input);
        auto show_all_inputs= show_inputs(attempts, response);
       // if (!show_all_inputs.empty()) {
            for (int i = 0; i < show_all_inputs.size(); i++) {
                printf("%s\n", show_all_inputs[i].c_str());
            }
        //}
       
        
    }
    
}


Play::~Play()
{
}

void Play::split_input(string s)
{

    //map of the letter in dictionary
   
    for (int i = 0; i < expectation.length(); i++) {
        ans_map.insert(pair<int, char>(i, expectation[i]));
    }
    
    bool c = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ans_map[i]) {
            printf("same position: %c\n", ans_map[i]);
            //response += '[' + s[i] + ']';
            response += '[';
            response += s[i];
            response += ']';
            skip = i;
        }
        else{
            for (int j = 0; j < ans_map.size(); j++) {
                if (s[i] == ans_map[j] && s[skip]!=ans_map[j]) {
                    printf("included: %c\n", ans_map[j]);
                    //response += '|' + s[i] + '|';
                    response += '|';
                    response += s[i];
                    response += '|';
                    c = true;
                    break;
                }
            }
            if(!c){
                response += ' ';
                response += s[i];
                response+= ' ';
            }
        }
        
    }
    printf("res: %s\n", response.c_str());

   
    //for (const auto& x : ans_map)
    //{
    //    printf("%d: %c\n", x.first, x.second);
    //}

    //for (int i = 0; i < s.length(); i++) {
    //    for (int j = 0; j < expectation.length(); j++) {
    //        if (s[i] == expectation[i]) {
    //            printf("same position\n");
    //            response += '[' + s[i] + ']';
    //            break;
    //        }
    //        else if (s[i] == expectation[j]) {
    //            printf("%c: included\n", expectation[j]);
    //            response += '|' + s[i] + '|';
    //        }
    //    }
    //    
    //    
    //}
   
    //printf("res: %s\n", response.c_str());
    //cout << "res: " << response << "\n" << endl;
   
   
}

map<int, string> Play::show_inputs(int times, string res)
{
    user_input.insert({ times, res });
    return user_input;
}
