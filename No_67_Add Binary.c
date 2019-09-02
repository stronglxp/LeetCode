#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * @link https://leetcode.com/problems/add-binary/
 * @title Add Binary
 */ 
char * addBinary(char * a, char * b){
    
    int len1 = strlen(a);
    int len2 = strlen(b);
    int i = len1 - 1;
    int j = len2 - 1;
    int count = 0;
    int temp = 0;
    char *r = (char *)malloc(len1 + len2 + 1);
    char *t = (char *)malloc(len1 + len2 + 1);
    
    while (i >= 0 && j >= 0) {
        
        int t1 = a[i] - '0';
        int t2 = b[j] - '0';
        
        int sum = t1 + t2 + temp;
        if (sum == 2) {
            temp = 1;
            sum = 0;
        } else if (sum == 3) {
            temp = 1;
            sum = 1;
        } else {
            temp = 0;
        }
        
        r[count++] = (sum == 1 ? '1' : '0');
        --i;
        --j;
    }
    
    while (i >= 0) {
        int num = a[i] - '0' + temp;
        if (num == 2) {
            temp = 1;
            num = 0;
        } else if (num == 3) {
            temp = 1;
            num = 1;
        } else {
            temp = 0;
        }
        
        r[count++] = (num == 1 ? '1' : '0');
        --i;
    }
    
    while (j >= 0) {
        int num = b[j] - '0' + temp;
        if (num == 2) {
            temp = 1;
            num = 0;
        } else if (num == 3) {
            temp = 1;
            num = 1;
        } else {
            temp = 0;
        }
        
        r[count++] = (num == 1 ? '1' : '0');
        --j;
    }
    
    if (temp == 1) {
        r[count++] = '1';
    }
    
    r[count] = '\0';
    t[count] = '\0';
    j = 0;
    
    for (i = count - 1; i >= 0; --i) {
        t[j++] = r[i];
    }
    
    
    return t;
}

