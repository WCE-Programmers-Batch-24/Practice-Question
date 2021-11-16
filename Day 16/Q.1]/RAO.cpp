class Solution {
public:
    // Function to find starting position of the target seq/sub-array using binary search algo
    // Returns the position or -1 if target is not found
    int Starting(vector<int>& nums, int s, int e, int target){
        int temp = -1;
        while(e>=s){
            int mid = s + (e-s)/2;
            
            if(nums[mid]>target) e = mid - 1;
            
            else if(nums[mid]<target) s = mid + 1;
            
            else{
                temp = mid;
                e = mid - 1;
            }
        }
            
        
        return temp;
    }
  
    // Function to find ending position of the target seq/sub-array using binary search algo
    // Returns the position or -1 if target is not found
    int Ending(vector<int>& nums, int s, int e, int target){
        int temp = -1;
        while(e>=s){
            int mid = s + (e-s)/2;
            
            if(nums[mid]>target) e = mid - 1;
            
            else if(nums[mid]<target) s = mid + 1;
            
            else{
                temp = mid;
                s = mid + 1;
            }
        }
        
        return temp;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int starting = 0, ending = 0;
        vector<int> V;

        starting += Starting(nums, 0, nums.size() - 1, target);
        V.push_back(starting);
        
        ending += Ending(nums, 0, nums.size() - 1, target);
        V.push_back(ending);
        
        return V;
    }
};
