class Solution {
public:
    bool canJump(vector<int>& nums) {
        int current=0;
        int n = nums.size();
        for(int i=0; i<n;i++){
            if(current<i)
                return false;
            current = max(current,  i+nums[i]);
        }
        return true;
    }
};
