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
    vector<vector<int>> nums;
    vector<int> row1;
    row1.push_back(1);
    row1.push_back(2);
    row1.push_back(3);
    row1.push_back(4);
    row1.push_back(5);
    row1.push_back(6);
    vector<int> row2;
    row2.push_back(7);
    row2.push_back(8);
    row2.push_back(9);
    row2.push_back(10);
    row2.push_back(11);
    row2.push_back(12);
    nums.push_back(row1);
    nums.push_back(row2);
    
    vector<vector<int>> res_nums = solution.matrixReshape(nums, 3, 4);
    for(int i=0;i<res_nums.size();i++){
        for(int j=0;j<res_nums[i].size();j++){
            cout<<res_nums[i][j]<<" ";
        }
        cout<<endl;
    }
    

    
    return 0;
}
