#include<stdio.h>

/**
 * @link https://leetcode.com/problems/container-with-most-water/
 * @title  Container With Most Water
 * 暴力超时
 * 可以使用两个指针，一个指向头，一个指向尾，宽度相同的情况下，面积取决于更矮的那个
 * 所以每次让更矮的那个移动
 */ 
int maxArea(int* height, int heightSize){

    int max = 0;
    int head = 0;
    int end = heightSize - 1;
    
    while (head < end) {
        int x = end - head;
        int y = 0;
        if (height[head] > height[end]) {
            y = height[end];
            --end;
        } else {
            y = height[head];
            head++;
        }
        
        int ans = x * y;
        if (ans > max) {
            max = ans;
        }
    }
    
    return max;
}
