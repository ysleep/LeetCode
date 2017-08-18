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
    Solution solution(4);
    /*
    //tree1
    TreeNode* t1 = new TreeNode(1);
    t1->left = new TreeNode(3);
    t1->right = new  TreeNode(2);
    t1->left->left = new TreeNode(5);
    
    //tree2
    TreeNode* t2 = new TreeNode(2);
    t2->left = new TreeNode(1);
    t2->right = new  TreeNode(3);
    t2->left->right = new TreeNode(4);
    t2->right->right = new TreeNode(7);
    
    //merge
    TreeNode* m = solution.mergeTrees(t1,t2);
    //TreeNode* m = solution.copyBinaryTree(t1);
    cout<<m->val<<" "<<m->left->val<<" "<<m->right->val<<" "<<m->left->left->val<<endl;
     */
    //string res = solution.complexNumberMultiply("1+-1i", "1+-1i");
	vector<int> nums1;
	nums1.push_back(1);
	nums1.push_back(3);
	nums1.push_back(4);
	nums1.push_back(5);
	nums1.push_back(6);
	nums1.push_back(7);
	nums1.push_back(8);
	vector<int> nums2;
	//nums2.push_back(2);
	double res = solution.findMedianSortedArrays(nums1,nums2);
	cout<<res<<endl;
	int a;
	cin>>a;
    
    return 0;
}
