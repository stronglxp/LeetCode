int searchInsert(int* nums, int numsSize, int target){
    
    int ans = 0;
    
    if (target <= nums[0]) {
        return 0;
    }
    
    if (target > nums[numsSize - 1]) {
        return numsSize;
    }
    
    for (int i = 1; i < numsSize; i++) {
        
        if (nums[i] == target) {
            ans = i;
            break;
        }
        
        if (nums[i - 1] < target && target < nums[i]) {
            ans = i;
            break;
        } 
    }
    
    return ans;
}

