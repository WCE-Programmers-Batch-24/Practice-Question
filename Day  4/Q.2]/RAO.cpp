class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n, a = 0, c = 0;
        
        n = nums.size();
        
        c += nums[n-1]*nums[n-2]*nums[n-3];
        a = nums[0]*nums[1]*nums[n-1];
        
        return max(c, a);
    }
};
