//
//  medianofTwoSortedArrays.cpp
//  LeetCode
//
//  Created by 杨帅 on 2017/8/18.
//  Copyright © 2017年 杨帅. All rights reserved.
//

#include "header.h"

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
	int N = nums1.size() + nums2.size();
	int n = N/2;
	if(N%2==0)
		n--;
	return findMedianSortedArrays(nums1, nums2, 0, 0, n,N%2!=0);
}

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2, int nums1Index, int nums2Index, int n, bool ifOdd){
	vector<int> *numsSmall;
	vector<int> *numsBig;
	int numsSmallIndex;
	int numsBigIndex;
	if(nums1.size()-nums1Index<nums2.size()-nums2Index){
		numsSmall = &nums1;
		numsSmallIndex = nums1Index;
		numsBig = &nums2;
		numsBigIndex = nums2Index;
	}else{
		numsSmall = &nums2;
		numsSmallIndex = nums2Index;
		numsBig = &nums1;
		numsBigIndex = nums1Index;
	}
	//如果n为0，那么开始计算结果
	if(n==0){
		if(ifOdd){
			if(numsSmall->size()>numsSmallIndex){
				int numsSmallFirstValue = (*numsSmall)[numsSmallIndex];
				int numsBigFirstValue = (*numsBig)[numsBigIndex];
				return numsSmallFirstValue<numsBigFirstValue  ? numsSmallFirstValue : numsBigFirstValue;
			}else
				return (*numsBig)[numsBigIndex];
		}else{
			if(numsSmall->size()>numsSmallIndex){
				vector<int> calMedVector;
				for(int i=0;i<2;i++){
					if(numsSmall->size()>numsSmallIndex+i)
						calMedVector.push_back( (*numsSmall)[numsSmallIndex+i]);
					if(numsBig->size()>numsBigIndex+i)
						calMedVector.push_back( (*numsBig)[numsBigIndex+i]);
				}
				sort(calMedVector.begin(),calMedVector.end());
				return ((double)calMedVector[0] + (double)calMedVector[1]) / 2.0;
			}else{
				return ((double) (*numsBig)[numsBigIndex] + (double) (*numsBig)[numsBigIndex+1]) / 2.0;
			}
		}
	}else{
		int medianOfN = (n+1)/2;
		int smallDiff = 0;
		int bigDiff = 0;
		if(numsSmall->size()-numsSmallIndex>medianOfN){
			smallDiff = medianOfN-1;
		}else{
			smallDiff = numsSmall->size()-numsSmallIndex-1;
		}
		bigDiff = n-1-smallDiff ;
		if(smallDiff<0){
			bigDiff = n-1;
			numsBigIndex += (bigDiff+1);
			n -= (bigDiff+1);
		}else{
			if( (*numsBig)[numsBigIndex+bigDiff]>(*numsSmall)[numsSmallIndex+smallDiff] ){
				numsSmallIndex += (smallDiff+1);
				n -= (smallDiff+1);
			}else{
				numsBigIndex += (bigDiff+1);
				n -= (bigDiff+1);
			}
		}
		return findMedianSortedArrays(*numsSmall, *numsBig, numsSmallIndex, numsBigIndex, n, ifOdd);
	}

}