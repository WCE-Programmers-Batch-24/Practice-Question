class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                result.push_back(nums[i]);
            }
        }
        for(int i=result.size(); i<nums.size(); i++){
            result.push_back(0);
        }
        nums = result;
    }
};
