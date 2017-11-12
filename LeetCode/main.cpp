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
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(7);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    vector<int> res = solution.findDuplicates(nums);
    for(int num:res) cout<<num<<" ";
    
    return 0;
}
