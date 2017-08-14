//
//  main.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution solution;
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(6);
    a.push_back(0);
    a.push_back(5);
    TreeNode *t = solution.constructMaximumBinaryTree(a);
    
    cout<<t->val<<" "<<t->left->val<<" "<<t->right->val<<" "<<t->left->right->val;
	int b;
	cin>>b;
    
    return 0;
}
