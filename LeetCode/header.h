//
//  Header.h
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#ifndef header_h
#define header_h

#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <time.h>
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
    
    //561. Array Partition I
    int arrayPairSum(vector<int>& nums);
    
    //537. Complex Number Multiplication
    string complexNumberMultiply(string a, string b);

	//4. Median of Two Sorted Arrays
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2); 
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2, int nums1Index, int nums2Index, int n, bool ifOdd);
    
    //419. Battleships in a Board
    int countBattleships(vector<vector<char>>& board);
    
    //338. Counting Bits
    vector<int> countBits(int num);
    
    //476. Number Complement
    int findComplement(int num);
    
    //557. Reverse Words in a String III
    string reverseWords(string s);
    
    //500. Keyboard Row
    vector<string> findWords(vector<string>& words);
    
    //344. Reverse String
    string reverseString(string s);
    
    //682. Baseball Game
    int calPoints(vector<string>& ops);
    
    //412. Fizz Buzz
    vector<string> fizzBuzz(int n);
    
    //566. Reshape the Matrix
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c);
    
    //669. Trim a Binary Search Tree
    TreeNode* trimBST(TreeNode* root, int L, int R);
    
    //463. Island Perimeter
    int islandPerimeter(vector<vector<int>>& grid);
    
    //575. Distribute Candies
    int distributeCandies(vector<int>& candies);
    
    //496. Next Greater Element I
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums);
    
    
private:
    int findMax(vector<int>& nums, int begin, int end);
    TreeNode* copyBinaryTree(TreeNode* t);
    
    //535. Encode and Decode TinyURL
    string charDictStr;
    string tinyUrlPrefix;;
    map<string, string> tinyURLLong2ShortMap;
    map<string, string> tinyURLShort2LongMap;
    
};


#endif /* header_h */
