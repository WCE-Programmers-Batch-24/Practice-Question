class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;
       int start = 0 , end = nums.size()-1,mid,f_index=-1,s_index=-1;
        while(start<=end)
        {
           int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
        {
            f_index = mid;
            end = mid - 1;
        }
        else if (target <nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = f_index, end = nums.size() - 1;
         if (f_index == -1)
        {
            v.push_back(-1) ;
            v.push_back(-1) ;
            return v ;
        }
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
        {
            s_index = mid;
            start = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
        v.push_back(f_index);
        v.push_back(s_index);
        return v;
        
    }
};
