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
    vector<vector<int>> grid;
    vector<int> grid_1;
    grid_1.push_back(1);
    grid_1.push_back(0);
    //grid_1.push_back(0);
    //grid_1.push_back(0);
    vector<int> grid_2;
    grid_2.push_back(0);
    grid_2.push_back(0);
    //grid_2.push_back(1);
    //grid_2.push_back(0);
    vector<int> grid_3;
    grid_3.push_back(0);
    grid_3.push_back(0);
    //grid_3.push_back(0);
    //grid_3.push_back(0);
    vector<int> grid_4;
    grid_4.push_back(0);
    grid_4.push_back(0);
    //grid_4.push_back(0);
    //grid_4.push_back(0);
    grid.push_back(grid_1);
    grid.push_back(grid_2);
    grid.push_back(grid_3);
    grid.push_back(grid_4);
    cout<<solution.islandPerimeter(grid);
    
    return 0;
}
