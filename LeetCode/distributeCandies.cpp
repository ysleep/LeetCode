//
//  distributeCandies.cpp
//  LeetCode
//
//  Created by 杨帅 on 12/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"
int Solution:: distributeCandies(vector<int>& candies){
    int candyNums[200001] = {0};
    int totalKind = 0;
    for(int i=0;i<candies.size();i++) candyNums[candies[i]+100000]++;
    for(int i=0;i<200001;i++) if(candyNums[i]>0) totalKind++;
    if(totalKind>candies.size()/2) return candies.size()/2;
    else return totalKind;
}
