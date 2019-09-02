
/**
 * @link https://leetcode.com/problems/longest-palindromic-substring/
 * @title Longest Palindromic Substring
 */
char * longestPalindrome(char * s){
    
    int len = strlen(s);
    if (len <= 1) {
        return s;
    }
    
    int dp[len][len];
    memset(dp, 0, sizeof(dp));
    
    char *r = (char *)malloc(len + 1);
    r[0] = s[0];
    
    int count = 0;
    int index = 0;
    int temp = 1;
    
    for (int m = 1; m < len; m++) {
        for (int n = 0; n < m; n++) {
            if (s[n] == s[m] && (m - n <= 2 || dp[n + 1][m - 1])) {
                dp[n][m] = 1;
                
                int cur_len = m - n + 1;
            
                if (cur_len > index) {

                    index = cur_len;

                    for (int i = n; i <= m; i++) {
                        r[count++] = s[i];
                    }

                    temp = count;
                    count = 0;
                }
            }
        }
        
    }
    
    r[temp] = '\0';
    
    return r;
}

