class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            m--;
            m = max(m,nums[i]);
            if(m==0) return false;
        }
        return true;
    }
};
