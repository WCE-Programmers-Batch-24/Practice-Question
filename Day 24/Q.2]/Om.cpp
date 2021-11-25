class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int current=1,max=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            current = current*nums[i];
            if(current>max)
                max=current;
            if(nums[i]>max)
                max = nums[i];
            
            if(current==0)
                current=1;
            
        }
        int current2=1,max2=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--)
        {
            current2 = current2*nums[i];
            if(current2>max2)
                max2=current2;
            if(nums[i]>max2)
                max2 = nums[i];
        
            if(current2==0)
                current2=1;
            
        }
        if(max>max2)
        return max;
        else
            return max2;
    }
};