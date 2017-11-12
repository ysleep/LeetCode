//
//  findDuplicates.cpp
//  LeetCode
//
//  Created by 杨帅 on 12/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"
vector<int> Solution::findDuplicates(vector<int>& nums){
    vector<int> res;
    for(int i=0;i<nums.size(); i++){
        int index = i;
        int num = nums[index];
        nums[index] = -1;
        while(1){
            if(nums[num-1]==-1){
                nums[num-1] = num;
                break;
            }
            if(nums[num-1]==num){
                res.push_back(num);
                break;
            }
            index = num-1;
            num = nums[index];
            nums[index] = index+1;
        }
    }
    return res;
}

