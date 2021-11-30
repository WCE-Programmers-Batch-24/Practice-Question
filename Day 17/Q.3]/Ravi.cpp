class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        for(int i=0;i<n;i++){
            totalsum += nums[i];
        }
        int currsum = 0;
        for(int i=0;i<n;i++){
            if(currsum*2 == totalsum - nums[i])
                return i;
            currsum += nums[i];
        }
        return -1;
    }
};
