class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int curr = 1 , max =0;
        int maxe ;
        if(n==1)
            return nums[0];
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]==nums[i])
                curr++;
            else
                curr = 1;
            if(curr>max)
            {
                max = curr;
                maxe = nums[i];
            }
        }
        return maxe;
    }
};
