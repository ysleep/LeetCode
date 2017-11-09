//
//  findWords.cpp
//  LeetCode
//
//  Created by 杨帅 on 09/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

vector<string> Solution:: findWords(vector<string>& words){
    char first[20] = {'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
    char second[18] = {'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
    char third[14] = {'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
    set<char> charSetArray[3];
    charSetArray[0] = set<char>(first,first+20);
    charSetArray[1] = set<char>(second,second+18);
    charSetArray[2] = set<char>(third,third+14);
    set<char>::iterator it;
    
    vector<string> resultWords;
    for(int i=0;i<words.size();i++){
        bool flag[3] = {false,false,false};
        int flagCount = 0;
        for(int j=0;j<words[i].length();j++){
            if(flagCount>1)
                break;
            for(int k=0;k<3;k++){
                it = charSetArray[k].find(words[i][j]);
                if(it!=charSetArray[k].end()){
                    if(!flag[k]){
                        flag[k] = true;
                        flagCount++;
                    }
                    break;
                }
                
            }
        }
        if(flagCount==1)
            resultWords.push_back(words[i]);
    }
    return resultWords;
}

