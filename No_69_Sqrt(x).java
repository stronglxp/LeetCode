/**
 * 注意两个数相乘越界的情况
 */
class Solution {
    public int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        
        int y = x / 2;
        for (int i = 1; i <= y + 1; i++) {
            if ((i * i < 0) || (i * i) > x) {
                return (i - 1);
            } else if ((i * i) < x) {
                continue;
            } else {
                return i;
            }
        }
        return 1;
    }
}