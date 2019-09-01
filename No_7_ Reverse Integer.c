#include<stdio.h>
#include<limits.h>

/**
 * @link https://leetcode.com/problems/reverse-integer/
 * @title Reverse Integer
 */ 
int reverse(int x){

    int result = 0;
    
    while (x != 0) {
        int temp = x % 10;
        x = x / 10;
        
        if (result > ((INT_MAX - 1) / 10)) {
            return 0;
        }
        
        if (result < (INT_MIN / 10)) {
            return 0;
        }
        
        result = result * 10 + temp;
    }
    
    return result;
    
}
