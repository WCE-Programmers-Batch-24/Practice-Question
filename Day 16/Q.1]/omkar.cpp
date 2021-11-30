class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start_index , end_index;
        vector <int> v;
      start_index =lower_bound(nums.begin(), nums.end(), target) - nums.begin();
     end_index =  upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(start_index == nums.size() || nums[start_index]!=target )
        {
          
        v.push_back(-1);
        v.push_back(-1);
        }
        else{
        
        v.push_back(start_index);
        v.push_back(end_index-1);
        }
        return v;
        
        
    }
};
