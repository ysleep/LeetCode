//
//  reverseWords.cpp
//  LeetCode
//
//  Created by 杨帅 on 09/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

string reverseWord_string(string s, int begin, int end){
    for(int i=begin; i<(end+begin+1)/2; i++){
        char tmp = s[i];
        s[i] = s[begin+end-i];
        s[begin+end-i] = tmp;
    }
    return s;
}

void reverseWord_charStar(char* s, int begin, int end){
    int sum =  begin+end;
    for(int i=begin; i<(sum+1)/2; i++){
        swap(s[i], s[sum-i]);
    }
}

string Solution::reverseWords(string s){
    /*
    char* p=(char*)s.data();
    int begin = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            reverseWord_charStar(p,begin,i-1);
            begin = i+1;
        }
    }
    reverseWord_charStar(p,begin,s.length()-1);
    return p;
     */
    char* p=(char*)s.data();
    string::size_type position=0;
    int begin=0;
    while((position=s.find_first_of(' ',position))!=string::npos){
        reverseWord_charStar(p,begin,position-1);
        position++;
        begin = position;
    }
    reverseWord_charStar(p,begin,s.length()-1);
    return p;
}



