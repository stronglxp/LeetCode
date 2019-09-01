#include<stdio.h>
#include<string.h>

/**
 * @link https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

int lengthOfLongestSubstring(char * s){
    
    int len = strlen(s);
    int count = 0;
    int max = 0;
    
    for (int i = 0; i < len; i++) {
        int nums[130];
        memset(nums, 0, sizeof(nums));
        for (int j = i; j < len; j++) {
            int t = s[j] - ' ';
            nums[t]++;
            if (nums[t] > 1) {
                break;
            }
            
            count++;  
            
            if (count > max) {
                max = count;
            }
            
        }
        count = 0;
    }
    
    return max;
}
