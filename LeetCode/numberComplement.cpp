//
//  numberComplement.cpp
//  LeetCode
//
//  Created by 杨帅 on 21/08/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

int Solution::findComplement(int num){
    if(num==0)
        return 1;
    int mi2 = 1;
    int res = 0;
    while(num>0){
        if(num%2==0)
            res += mi2;
        num = num>>1;
        mi2 = mi2*2;
    }
    return res;
}
