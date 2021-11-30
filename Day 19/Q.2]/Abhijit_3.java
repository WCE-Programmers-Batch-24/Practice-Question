class Solution {
    public int findDuplicate(int[] nums) {
        
        int n = nums.length ;
        
        // mark the numbers as visited by making it negative
        for (int i = 0 ; i < n ; i++)
        {
            int pos = Math.abs(nums[i]) ;
            
            // if number is visited already i.e. it is negative
            // we got the answer return pos
            if (nums[pos] < 0 ) return pos ;
            
            nums[pos] *= -1 ;   
        }
        
        return 1 ;
    }
}
