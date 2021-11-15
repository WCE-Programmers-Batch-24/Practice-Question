class Solution {
  
  
    // Moore's Voting algorithm
    public int majorityElement(int[] nums) 
    {
          int n = nums.length ;
         int ans_index = 0 , count = 1;
        
        for (int i = 1 ; i < n ; i++)
        {
            if (nums[i] == nums[ans_index]) count++ ;
            else count-- ;
            
            if (count == 0) {
                ans_index = i ;
                count = 1 ;
            }
        }
        
        return nums[ans_index] ;
        
    }
    
}
