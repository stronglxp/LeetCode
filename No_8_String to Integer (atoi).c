#include<stdio.h>
#include<limits.h>
#include<string.h>

/**
 * @link https://leetcode-cn.com/problems/string-to-integer-atoi/
 */ 
int myAtoi(char * str){
    
    int len = strlen(str);
    int flag = 1;
    int ans = 0;
    int pre = 1;
    
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (flag == 1 && c == ' ') {
            continue;
        } else {
            if (flag == 1) {
                flag = 0;
                
                if (c == '-') {
                    pre = -1;
                    continue;
                }
                
                if (c == '+') {
                    pre = 1;
                    continue;
                }
                
                if (c < '0' || c > '9') {
                    return 0;
                } else {
                    ans = ans * 10 + (c - '0');
                }
            } else {
                
                if (c < '0' || c > '9') {
                    break;
                }
                
                if (ans > ((INT_MAX - 1) / 10) || (ans == (INT_MAX - 1) / 10 && c > '7')) {
                    return INT_MAX;              
                }
                
                if (ans < (INT_MIN / 10) || (ans == INT_MIN / 10 && c > '8')) {
                    return INT_MIN;  
                }

                ans = ans * 10 + (c - '0') * pre;
            }
            
        }
    }
    
    return ans;
}
