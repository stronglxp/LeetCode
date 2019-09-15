/**
 * @link https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * @title Remove Duplicates from Sorted Array
 */ 
int removeElement(int* nums, int numsSize, int val){
    
    int index = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[index++] = nums[i];
        }
    }
    
    return index;
}
