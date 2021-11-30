class Solution {
    public int[] searchRange(int[] nums, int target) {
         
            return new int[]{first(nums, target), last(nums, target)};
        
    }
    
    
    static int first(int nums[], int k)
    {
        int s = 0, e = nums.length - 1, ans = -1;
        while ( s <= e)
        {
            int mid = s + (e-s)/2;
            if (nums[mid] == k){
                ans = mid;
            }
            
            if (nums[mid] < k) s = mid + 1;
            else e = mid - 1 ;
        }
        return ans;
    }
    
    static int last(int nums[], int k)
    {
        int s = 0, e = nums.length - 1, ans = -1;
        while ( s <= e)
        {
            int mid = s + (e-s)/2;
            if (nums[mid] == k){
                ans = mid;
            }
            
            if (nums[mid] > k) e = mid - 1;
            else s = mid + 1 ;
        }
        return ans;
    }

    
}
