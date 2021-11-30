class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int result=0;
    sort(nums.begin(), nums.end());
   
    for(int i=1; i<=nums.size(); i++){
        if(nums[i-1]==nums[i]){
            result = nums[i];
            break;
        }
    }
    return result;
    }
};
