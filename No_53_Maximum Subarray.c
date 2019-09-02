#include<stdio.h>
#include<limits.h>

/**
 * @link https://leetcode.com/problems/maximum-subarray/
 * @Title Maximum Subarray
 * 
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
 * Output: 6
 */ 
int maxSubArray(int* nums, int numsSize){

    int ans = INT_MIN;
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        if (sum > ans) {
            ans = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return ans;
}
