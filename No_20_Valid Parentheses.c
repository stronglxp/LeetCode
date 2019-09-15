#include<stdio.h>
#include<string.h>
#include<stdbool.h>

/**
 * @link https://leetcode.com/problems/valid-parentheses/
 * @title Valid Parentheses
 */ 
bool isValid(char * s){
    int len = strlen(s);
    if (len == 0) {
        return true;
    }
    
    char str[len + 1];
    int count = 0;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            str[count++] = c;
        } else {
            if (count > 0) {
                if (c == ')' && str[count - 1] == '(') {
                    count--;
                } else if (c == ']' && str[count - 1] == '[') {
                    count--;
                } else if (c == '}' && str[count - 1] == '{') {
                    count--;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    
    if (count == 0) {
        return true;
    }
    
    return false;
}
