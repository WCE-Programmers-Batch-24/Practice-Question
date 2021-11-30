class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1){
            return true;
        }
        else if(nums[0] == 0){
            return false;
        }
        
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i] == 0){
                for(int j=0; j<i; j++){
                    if(nums[j] > i-j){
                        break;
                    }
                    if(j == i-1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
