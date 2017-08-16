//
//  arrayPartitionI.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/16.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

int Solution::arrayPairSum(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<nums.size()/2;i++){
        sum += nums[2*i];
    }
    return sum;
}
