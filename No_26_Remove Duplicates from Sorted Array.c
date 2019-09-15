/**
 * @link https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * @title Remove Duplicates from Sorted Array
 */ 
int removeDuplicates(int* nums, int numsSize){
    
    if (numsSize == 0) {
        return 0;
    }
    
    int index = 0;
    
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[index]) {
            nums[++index] = nums[i];
        }
    }
    
    return index + 1;
}
