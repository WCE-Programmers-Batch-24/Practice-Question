class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int flag = 0;
        int low = 0 , high = nums.size()-1 ;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid]<target)
                low = mid + 1;
            else if(nums[mid]>target)
                high = mid - 1;
            else
            {
                if(mid!=0)
                {
                if(nums[mid-1]==target)
                    high = mid - 1;
                else
                {
                    v.push_back(mid);
                    flag = 1;
                    break;
                }
                }
                else
                {
                    v.push_back(mid);
                    flag = 1;
                    break;
                }
            }
        }
        low = 0 ,high = nums.size()-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid]<target)
                low = mid + 1;
            else if(nums[mid]>target)
                high = mid - 1;
            else
            {
                if(mid!=nums.size()-1)
                {
                if(nums[mid+1]==target)
                    low = mid + 1;
                else
                {
                    v.push_back(mid);
                    break;
                }
                }
                else
                {
                     v.push_back(mid);
                    break;
                }
            }
        }
        if(flag)
        return v;
        else {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
            
    }
};
