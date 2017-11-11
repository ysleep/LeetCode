//
//  trimBST.cpp
//  LeetCode
//
//  Created by 杨帅 on 11/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"
TreeNode* Solution:: trimBST(TreeNode* root, int L, int R){
    if(root==NULL)
        return NULL;
    if(root->val<L)
        return trimBST(root->right, L, R);
    else if(root->val>R)
        return trimBST(root->left, L, R);
    else{
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
}
