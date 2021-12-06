class Solution {
    public int minimumDeletions(int[] nums) {
        int max_ind = -1, min_ind = -1, max = Integer.MIN_VALUE, min = Integer.MAX_VALUE;
        
        int n = nums.length;
        
        for (int i = 0 ; i < n ; i++)
        {
            if (nums[i] < min) {
                min = nums[i] ;
                min_ind = i+1;
            }
            
            if (nums[i] > max){
                max = nums[i] ;
                max_ind = i+1 ;
            }  
        }
        
        int ans1 = Math.max(min_ind, max_ind);
        int ans2 = Math.max(n+1-min_ind, n+1-max_ind);
        int ans3 = Math.min(max_ind, min_ind) + n+1-Math.max(max_ind, min_ind);
        
        return Math.min(ans1,Math.min( ans2, ans3));
        
        
    }
}
