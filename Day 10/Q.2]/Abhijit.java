class Solution {
    public int maxSubArray(int[] nums) {
        int curr_sum = 0 , max_sum = Integer.MIN_VALUE ;
        
        for (int i = 0 ; i < nums.length ; i++)
        {
            // add arr[i] to curr_sum
            curr_sum += nums[i] ;
            
            // update max_sum if curr_sum is greater than max_sum
            if (curr_sum > max_sum) max_sum = curr_sum ;
            
             // we'll add curr_sum in next part of array only if curr_sum is positive else make curr_sum = 0
            if (curr_sum < 0) curr_sum = 0 ;
            
        }
        return max_sum ;
        
    }
}
