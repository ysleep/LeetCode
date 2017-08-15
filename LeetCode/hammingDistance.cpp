//
//  hammingDistance.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/15.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

int Solution::hammingDistance(int x, int y){
    int xy = x ^ y;
    int count = 0;
    while(xy>0){
        if(xy%2==1)
            count++;
        xy = xy/2;
    }
    return count;
}

