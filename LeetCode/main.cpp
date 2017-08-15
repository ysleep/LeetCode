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
    if(problemId==535){
        srand( (unsigned)time(NULL) );
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution solution(657);
    int flag = solution.hammingDistance(0,7);
    cout<<flag<<endl;

    
    return 0;
}
