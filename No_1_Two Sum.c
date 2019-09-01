#include<stdio.h>
#include<stdlib.h>

/**
 * @link https://leetcode.com/problems/two-sum/
 * @title  Two Sum
 */ 
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int *r;
    r = (int *)malloc(sizeof(int) * 2);
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                r[0] = i;
                r[1] = j;
                i = numsSize;
                break;
            }
        }
    }
    
    *returnSize = 2;
    
    return r;
}
