/**
 * @link https://leetcode.com/problems/implement-strstr/
 * @title  Implement strStr()
 */ 
int strStr(char * haystack, char * needle){
    
    int index = 0;
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    int temp = 0;
    if (len2 == 0) {
        return 0;
    }
    
    for (int i = 0; i < len1; i++) {
        if (needle[index] == haystack[i]) {
            index++;
            if (index == len2) {
                break;
            }
        } else {
            index = 0;
            i = temp;
            temp++;
        }
    }
    
    if (index != len2) {
        return -1;
    }
    
    return temp;  
}
