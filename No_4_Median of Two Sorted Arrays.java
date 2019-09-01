/**
 * @link https://leetcode.com/problems/median-of-two-sorted-arrays/
 * @title Median of Two Sorted Arrays
 */

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] r = new int[nums1.length + nums2.length];
        for(int i = 0; i < nums1.length; i++) {
            r[i] = nums1[i];
        }
        for(int i = 0; i < nums2.length; i++) {
            r[nums1.length + i] = nums2[i];
        }
        Arrays.sort(r);
        double ave = 0F;
        if(r.length % 2 == 0) {
             ave = (double)(r[r.length / 2] + r[(r.length / 2) - 1]) / 2;
        } else {
            ave = r[(int)(r.length / 2)];
        }
        return ave;
    }
}
