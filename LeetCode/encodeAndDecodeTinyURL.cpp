//
//  encodeAndDecodeTinyURL.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/14.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

string Solution::encode(string longUrl){
    if(tinyURLLong2ShortMap.count(longUrl)<=0){
        string shortUrl = "";
        while(1){
            for(int i=0;i<6;i++){
                shortUrl.push_back(charDictStr[rand()%charDictStr.size()]);
            }
            if(tinyURLShort2LongMap.count(shortUrl)<=0)
                break;
        }
        tinyURLShort2LongMap[shortUrl]=longUrl;
        tinyURLLong2ShortMap[longUrl]=shortUrl;
    }
    return tinyUrlPrefix + tinyURLLong2ShortMap[longUrl];
}

string Solution::decode(string shortUrl){
    string shortUrlSuffix = shortUrl.substr(tinyUrlPrefix.length(),shortUrl.length());
    if(tinyURLShort2LongMap.count(shortUrlSuffix)<=0)
        return "";
    else
        return tinyURLShort2LongMap[shortUrlSuffix];
}
