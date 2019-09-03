#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * @link https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
 * @title  Find Words That Can Be Formed by Characters
 */
int getMatch(char *r, int len, char target)
{
    for (int m = 0; m < len; m++) {
        if(r[m] == target) {
            r[m] = ' ';
            return 1;
        }
    } 
    
    return 0;
    
}

int countCharacters(char ** words, int wordsSize, char * chars){

    int count = 0;
    int length = strlen(chars);
    int temp = 0;
    
    for (int i = 0; i < wordsSize; i++) {
        
        int len = strlen(words[i]);
        char *t = (char *)malloc(length + 1);
        int k = 0;
        for (k = 0; k < length; k++) {
            t[k] = chars[k];
        }
        
        t[k] = '\0';
        
        for (int j = 0; j < len; j++) {
            temp += getMatch(t, length, words[i][j]);
        }
        
        if (temp == len) {
            count += temp; 
        }
        
        temp = 0;
    }
    
    return count;
}
