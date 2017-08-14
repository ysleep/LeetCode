//
//  Header.h
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#ifndef header_h
#define header_h

#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:
    //struction test
    string helloWorld();
    //654. Maximum Binary Tree
    TreeNode* constructMaximumBinaryTree(vector<int>& nums, int begin, int end);
    TreeNode* constructMaximumBinaryTree(vector<int>& nums);

private:
    int findMax(vector<int>& nums, int begin, int end);
};


#endif /* header_h */
