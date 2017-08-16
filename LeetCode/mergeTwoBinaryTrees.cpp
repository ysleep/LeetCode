//
//  mergeTwoBinaryTrees.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/16.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

TreeNode* Solution::mergeTrees(TreeNode* t1, TreeNode* t2){
    if(t1!=NULL && t2!=NULL){
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
    }else if(t1==NULL && t2!=NULL){
        return t2;
    }else if(t1!=NULL && t2==NULL){
        return t1;
    }else{
        return NULL;
    }
}


