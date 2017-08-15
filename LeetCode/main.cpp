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
    Solution solution(535);
    
    string l1 = "www.baidu.com";
    string s1 = solution.encode(l1);
    string ls1 = solution.decode(s1);
    cout<<s1<<endl;
    cout<<ls1<<endl;
    

    string l2 = "www.baidu.com";
    string s2 = solution.encode(l2);
    string ls2 = solution.decode(s2);
    cout<<s2<<endl;
    cout<<ls2<<endl;

    
    return 0;
}
