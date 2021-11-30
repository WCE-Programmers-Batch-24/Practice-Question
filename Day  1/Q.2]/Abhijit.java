class Solution {
    public void nextPermutation(int[] nums) {
        
        int n = nums.length ;
        int i = n-2 ;
        
        // find the rightmost number such that if we fix left part
        // , we can rearrange the right part to get next permutation
        while (i >=0 && nums[i] >= nums[i+1]) i-- ;
        
        // if numbers are already in decreasing 
        // reverse the number and return
        if (i < 0) {
            reverse(nums, 0, n-1) ;
            return ;
        }
        
        int j = n-1 ;
        
        // else find number greater than nums[i] but closest to nums[i]
        // in right part
        while (nums[j] <= nums[i] && j > i) 
        {
            j-- ;
        }
        
        swap(nums, i, j) ;
        
        // right part of nums[i] should be minimum to get the closest permutation
        reverse(nums, i+1, n-1) ;
         
    }
    
    
    static void swap(int nums[], int i, int j)
    {
        int temp = nums[i] ;
        nums[i] = nums[j] ;
        nums[j] = temp ;
    }
    
    static void reverse(int nums[], int s, int e)
    {
        while (s < e){
            swap(nums, s, e) ;
            s++ ;
            e-- ;
        }
    }
    
    
}