class Solution {
    public int maximumProduct(int[] nums) {
        
        Arrays.sort(nums) ;
        int n = nums.length ;
        
        // if there are two -ve nums
        // then max of 1) product of two negatives and max(positive)
        //             2) product of max 3
        if (nums[0] < 0 && nums[1] < 0) {
            int ans1 = nums[0]*nums[1]*nums[n-1] ;
            int ans2 = nums[n-1]*nums[n-2]*nums[n-3] ;
            return Math.max(ans1, ans2) ;
        }
        
        // if all are +ve then product of max3 elements
        return (nums[n-1]*nums[n-2]*nums[n-3]) ;
        
    }
}