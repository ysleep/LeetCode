//
//  fizzBuzz.cpp
//  LeetCode
//
//  Created by 杨帅 on 11/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"
#include<sstream>

vector<string> Solution:: fizzBuzz(int n){
    vector<string> res;
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            res.push_back("FizzBuzz");
        }else if(i%3==0){
            res.push_back("Fizz");
        }else if(i%5==0){
            res.push_back("Buzz");
        }else {
            res.push_back(to_string(i));
        }
    }
    return res;
}
