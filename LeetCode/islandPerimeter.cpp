//
//  islandPerimeter.cpp
//  LeetCode
//
//  Created by 杨帅 on 12/11/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"
int Solution:: islandPerimeter(vector<vector<int>>& grid){
    int width = grid[0].size()-1;
    int height = grid.size()-1;
    int sum = 0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==1){
                if(i==0 || grid[i-1][j]==0) sum++;
                if(i==height || grid[i+1][j]==0) sum++;
                if(j==0 || grid[i][j-1]==0) sum++;
                if(j==width || grid[i][j+1]==0) sum++;
            }
        }
    }
    return sum;
}
