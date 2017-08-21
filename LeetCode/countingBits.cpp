//
//  countingBits.cpp
//  LeetCode
//
//  Created by 杨帅 on 21/08/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

vector<int> Solution::countBits(int num){
    vector<int> res;
    res.push_back(0);
    if(num==0)
        return res;
    res.push_back(1);
    if(num==1)
        return res;
    int mi2=1;
    for(int i=2;i<=num;i++){
        if(i==(mi2*2)){
            mi2 = mi2*2;
        }
        res.push_back(res[i-mi2]+1);
    }
    return res;
}
