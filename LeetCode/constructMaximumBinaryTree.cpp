//
//  constructMaximumBinaryTree.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"


TreeNode* Solution::constructMaximumBinaryTree(vector<int>& nums, int begin, int end){
    if(begin>end)
        return NULL;
    int maxNumIndex = findMax(nums, begin, end);
    TreeNode *t = new TreeNode(nums[maxNumIndex]);
    t->left = constructMaximumBinaryTree(nums,begin,maxNumIndex-1);
    t->right = constructMaximumBinaryTree(nums,maxNumIndex+1,end);
    return t;
    
}

TreeNode* Solution::constructMaximumBinaryTree(vector<int>& nums){
    return constructMaximumBinaryTree(nums, 0, nums.size()-1);
}



