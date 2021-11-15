class Solution {
    public void moveZeroes(int[] nums) {
        int i = 0, count = 0, n = nums.length;
        
        
        if (nums[0] == 0) count++ ;
        
        while (i+count < n)
        {
           if (nums[i+count] == 0) count++;
           else
           nums[i] = nums[i++ +count];
        }
        
        for (; i <n ; i++) nums[i] = 0;
        
    }
}
