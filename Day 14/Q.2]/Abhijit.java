class Solution {
  
   
    // Time complexity O(n) , space complexity O(1)
    
    public int[] sortArrayByParity(int[] nums) {
        int i = 0 ;
                         
        // as long as we are getting evens keep moving i
        while (i < nums.length && nums[i]%2==0) i++ ;
        //now i points to odd
        
        // now loop in right part and when we get even swap it with ith ele
        // and move i forward
        int j = i+1 ;
        
        for (; j < nums.length; j++)
        {
            if (nums[j]%2==0){
                int temp = nums[j] ;
                nums[j] = nums[i] ;
                nums[i] = temp ;
                i++ ;
            }
        }
        return nums ;
        
    }
}
