//
//  matrixReshape.cpp
//  LeetCode
//
//  Created by 杨帅 on 11/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

vector<vector<int>> Solution:: matrixReshape(vector<vector<int>>& nums, int r, int c){
    if(nums.size()*nums[0].size()!=r*c)
        return nums;
    vector<vector<int>> res_nums;
    int m=0;
    int n=0;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            if(m==0){
                vector<int> tmp;
                res_nums.push_back(tmp);
            }
            res_nums[n].push_back(nums[i][j]);
            m++;
            if(m==c){
                m=0;
                n++;
            }
        }
    }
    return res_nums;
}
