
#define SIZE 101

/**
 * @link https://leetcode.com/problems/integer-to-roman/
 * @title Integer to Roman
 */ 
char * intToRoman(int num){
    
    char *r = (char *)malloc(sizeof(char) * SIZE);
    int count = 0;
    
    while (num > 0) {
        if (num / 1000 >= 1) {
            r[count++] = 'M';
            num -= 1000;
        } else if (num / 900 >= 1) {
            r[count++] = 'C';
            r[count++] = 'M';
            num -= 900;
        } else if (num / 500 >= 1) {
            r[count++] = 'D';
            num -= 500;
        } else if (num / 400 >= 1) {
            r[count++] = 'C';
            r[count++] = 'D';
            num -= 400;
        } else if (num / 100 >= 1) {
            r[count++] = 'C';
            num -= 100;
        } else if (num / 90 >= 1) {
            r[count++] = 'X';
            r[count++] = 'C';
            num -= 90;
        } else if (num / 50 >= 1) {
            r[count++] = 'L';
            num -= 50;
        } else if (num / 40 >= 1) {
            r[count++] = 'X';
            r[count++] = 'L';
            num -= 40;
        } else if (num / 10 >= 1) {
            r[count++] = 'X';
            num -= 10;
        } else if (num / 9 >= 1) {
            r[count++] = 'I';
            r[count++] = 'X';
            num -= 9;
        } else if (num / 5 >= 1) {
            r[count++] = 'V';
            num -= 5;
        } else if (num / 4 >= 1) {
            r[count++] = 'I';
            r[count++] = 'V';
            num -= 4;
        } else {
            r[count++] = 'I';
            num -= 1;
        }

    }
    
    r[count] = '\0';
    
    return r;
}

