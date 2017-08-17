//
//  complexNumberMultiplication.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/17.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

class ComplexNumber{
private:
    int real;
    int imaginary;
    static const char plusMark = '+';
public:
    ComplexNumber(string numberString){
        int plusIndex = -1;
        for(int i=0;i<numberString.size();i++){
            if(numberString[i]==plusMark)
                plusIndex = i;
        }
        real = stoi(numberString.substr(0,plusIndex));
        imaginary = stoi(numberString.substr(plusIndex+1,numberString.size()-1));
    }
    
    ComplexNumber(int realInt, int imaginaryInt){
        real = realInt;
        imaginary = imaginaryInt;
    }
    
    int getReal(){return real;}
    
    int getImaginary(){return imaginary;}
    
    string toString(){
        char* x = new char[20];
        sprintf(x,"%d+%di",real,imaginary);
        string cnString = x;
        return cnString;
    }
    ComplexNumber mutip(ComplexNumber cn){
        int realRes = getReal()*cn.getReal() - getImaginary()*cn.getImaginary();
        int imaginaryRes = getReal()*cn.getImaginary() + getImaginary()*cn.getReal();
        ComplexNumber resCn(realRes,imaginaryRes);
        return resCn;
    }
};

string Solution::complexNumberMultiply(string a, string b) {
    ComplexNumber aCn(a);
    ComplexNumber bCn(b);
    ComplexNumber resCn = aCn.mutip(bCn);
    return resCn.toString();
}
