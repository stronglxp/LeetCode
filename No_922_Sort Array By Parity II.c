#include<stdio.h>
#include<stdlib.h>

/**
 * @link https://leetcode.com/problems/sort-array-by-parity-ii/
 * @title Sort Array By Parity II
 */ 
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int* sortArrayByParityII(int* A, int ASize, int* returnSize){
    
    int *ans = (int *)malloc(sizeof(int) * ASize);
    int m = 0, n = 1;
    
    qsort(A, ASize, sizeof(int), cmp);
    
    for (int i = 0; i < ASize; i++) {
        if (A[i] % 2 == 0) {
            ans[m] = A[i];
            m += 2;
        } else {
            ans[n] = A[i];
            n += 2;
        }
    }
    
    *returnSize = ASize;
    return ans;
}

