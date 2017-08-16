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
#include <map>
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
    Solution();
    Solution(int problemId);
    string helloWorld();
    //654. Maximum Binary Tree
    TreeNode* constructMaximumBinaryTree(vector<int>& nums, int begin, int end);
    TreeNode* constructMaximumBinaryTree(vector<int>& nums);
    
    //535. Encode and Decode TinyURL
    string encode(string longUrl);
    string decode(string shortUrl);
    
    //657. Judge Route Circle
    bool judgeCircle(string moves);
    
    //461. Hamming Distance
    int hammingDistance(int x, int y);
    
    //617. Merge Two Binary Trees
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
    


private:
    int findMax(vector<int>& nums, int begin, int end);
    TreeNode* copyBinaryTree(TreeNode* t);
    
    //535. Encode and Decode TinyURL
    string charDictStr = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string tinyUrlPrefix = "http://tinyurl.com/";
    map<string, string> tinyURLLong2ShortMap;
    map<string, string> tinyURLShort2LongMap;
    
};


#endif /* header_h */
