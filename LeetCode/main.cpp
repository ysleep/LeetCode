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
    vector<string> ops;
    ops.push_back("5");
    ops.push_back("-2");
    ops.push_back("4");
    ops.push_back("C");
    ops.push_back("D");
    ops.push_back("9");
    ops.push_back("+");
    ops.push_back("+");
    cout<<solution.calPoints(ops);

    
    return 0;
}
