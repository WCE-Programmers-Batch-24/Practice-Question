class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
    int max_num = 0;
    int curr = 1,cur_num = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            curr++;
        }
        else
        {
            curr = 1;
        }
        max_num = max(max_num, curr);
        if (max_num == curr)
        {
            cur_num = nums[i];
        }
    }
    return cur_num  ;
        
    }
}
