//
//  main.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

Solution::Solution(){}
Solution::Solution(int problemId){
    if(problemId==561){
        srand( (unsigned)time(NULL) );
    }
	if(problemId==535){
		 charDictStr = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		 string tinyUrlPrefix = "http://tinyurl.com/";
	}
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution solution(557);
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(0);
    root->right = new TreeNode(4);
    
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(1);
    
    TreeNode* newRoot = solution.trimBST(root, 1, 2);
    
    int a=0;
    
    return 0;
}
