//
//  reverseString.cpp
//  LeetCode
//
//  Created by 杨帅 on 09/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

string Solution:: reverseString(string s){
    for(int i=0; i<s.length()/2; i++){
        swap(s[i], s[s.length()-1-i]);
    }
    return s;
}
