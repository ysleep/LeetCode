//
//  judgeRouteCircle.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/15.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

bool Solution::judgeCircle(string moves){
    int udMove = 0;
    int lrMove = 0;
    for(int i=0; i<moves.size(); i++){
        if(moves[i] == 'U')
            udMove++;
        if(moves[i] == 'D')
            udMove--;
        if(moves[i] == 'L')
            lrMove++;
        if(moves[i] == 'R')
            lrMove--;
    }
    return udMove==0 && lrMove==0;
}
