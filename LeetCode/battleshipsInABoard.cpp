//
//  battleshipsInABoard.cpp
//  LeetCode
//
//  Created by 杨帅 on 21/08/2017.
//  Copyright © 2017 杨帅. All rights reserved.
//

#include "header.h"

int Solution::countBattleships(vector<vector<char>>& board){
    //横向比较
    int count = 0;
    for(int i=0;i<board.size();i++){
        vector<char>* vi = &(board[i]);
        for(int j=0;j<vi->size();j++){
            char sign = (*vi)[j];
            if(sign=='X'){
                bool ifNew = true;
                if(j>0){
                    char leftSign = (*vi)[j-1];
                    ifNew = ifNew && (leftSign=='.');
                }
                if(i>0){
                    vector<char>* viUp = &(board[i-1]);
                    char upSign = (*viUp)[j];
                    ifNew = ifNew && (upSign=='.');
                }
                if(ifNew)
                    count ++;
            }
        }
    }
    return count;
}
