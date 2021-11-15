class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =  nums.size() , current_zero;
        
        for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            current_zero = i;
            break;
        }
    }

    for (int i = current_zero; i < n; i++)
    {

        if (nums[i] != 0)
        {
            nums[current_zero] = nums[i];
            nums[i] = 0;
            current_zero++;
        }
    }
        
    }
};
