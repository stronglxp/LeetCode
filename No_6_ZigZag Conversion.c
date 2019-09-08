#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * @link https://leetcode.com/problems/zigzag-conversion/
 * @title ZigZag Conversion
 */ 
char * convert(char * s, int numRows){
    
    if (numRows == 1) {
        return s;
    }
    
    int len = strlen(s);
    char *r = (char *)malloc(len + 1);
    int count = 0;
    
    for (int i = 0; i < numRows; i++) {
        int sub = 2 * i;
        int num = 2 * numRows - 2 - sub;
        int index = 0;
        int temp = -1;
        
        for (int j = i; j < len; ) {
            if (temp != j) {
                r[count++] = s[j];
            }
            index++;
            temp = j;
            if (index % 2 == 0) {
                j += sub;
            } else {
                j += num;
            }
        }
    }
    
    r[count] = '\0';
    return r;
}
