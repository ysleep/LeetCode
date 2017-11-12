//
//  nextGreaterElement.cpp
//  LeetCode
//
//  Created by 杨帅 on 12/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"
vector<int> Solution:: nextGreaterElement(vector<int>& findNums, vector<int>& nums){
    vector<int> res;
    stack<int> stack;
    unordered_map<int,int> m;
    
    for(int i=0; i<nums.size(); i++){
        while(!stack.empty() && stack.top()<nums[i]){
            m[stack.top()]=nums[i];
            stack.pop();
        }
        stack.push(nums[i]);
    }
    for(int i=0;i<findNums.size(); i++){
        res.push_back(m.count(findNums[i])?m[findNums[i]]:-1);
    }
    return res;
}

