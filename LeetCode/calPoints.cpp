//
//  calPoints.cpp
//  LeetCode
//
//  Created by 杨帅 on 11/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

int Solution:: calPoints(vector<string>& ops){
    int result[1000] = {0};
    int flag = 0;
    for(int i=0;i<ops.size();i++){
        if(ops[i]=="+" && flag>1){
            result[flag] = result[flag-1] + result[flag-2];
            flag++;
        }else if(ops[i]=="D" && flag>0){
            result[flag] = result[flag-1] * 2;
            flag++;
        }else if(ops[i]=="C" && flag>0){
            result[--flag]=0;
        }else{
            result[flag] = stoi(ops[i]);
            flag++;
        }
    }
    int sum = 0;
    for(int i=0;i<1000;i++)
        sum += result[i];
    return sum;
}
