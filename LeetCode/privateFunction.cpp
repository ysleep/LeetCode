//
//  privateFunction.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

int Solution::findMax(vector<int>& nums, int begin, int end){
    if(begin<0 || end>=nums.size() || begin>end)
        return NULL;
    int maxNum = nums[begin];
    int maxNumIndex = begin;
    for(int i=begin+1; i<=end; i++){
        if(maxNum<nums[i]){
            maxNum = nums[i];
            maxNumIndex = i;
        }
    }
    return maxNumIndex;
}
