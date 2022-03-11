/*Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

A subarray is defined as a contiguous sequence of numbers in an array.

A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi < numsi+1. Note that a subarray of size 1 is ascending.

 */

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int max=INT_MIN;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
              if(nums[i]>nums[i-1])
                  sum+=nums[i];
            else{
                if(sum>max)
                    max=sum;
                sum=nums[i];
            }
        }
        if(sum>max)
            max=sum;
        return max;
        
    }
};
