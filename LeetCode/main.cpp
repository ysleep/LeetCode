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
    /*
     [".X..X"
      ".X..X"
      "....X"
      "X.XX."
      "X...X"]
     */
    Solution solution(4);
    vector<char> v0;
    vector<char> v1;
    vector<char> v2;
    vector<char> v3;
    vector<char> v4;
    v0.push_back('.');
    v0.push_back('X');
    v0.push_back('.');
    v0.push_back('.');
    v0.push_back('X');
    v1.push_back('.');
    v1.push_back('X');
    v1.push_back('.');
    v1.push_back('.');
    v1.push_back('X');
    v2.push_back('.');
    v2.push_back('.');
    v2.push_back('.');
    v2.push_back('.');
    v2.push_back('X');
    v3.push_back('X');
    v3.push_back('.');
    v3.push_back('X');
    v3.push_back('X');
    v3.push_back('.');
    v4.push_back('X');
    v4.push_back('.');
    v4.push_back('.');
    v4.push_back('.');
    v4.push_back('X');
    
    vector<vector<char>> v;
    v.push_back(v0);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    
    int a = solution.countBattleships(v);
    cout<<a;
    
    
    return 0;
}
