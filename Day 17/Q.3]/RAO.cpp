class Solution {
public:
    int pivotIndex(vector<int>& A) {
        int pivot = -1, n = A.size(), left_sum = 0, right_sum = 0, total_sum = 0;
        
        for(int i=0; i<n; i++) total_sum += A[i];
        
        for(int j=0; j<n; j++){
            right_sum += A[j];
            
            if(total_sum - right_sum == left_sum){
                pivot =  j;
                break;
            }
            else left_sum += A[j];
        }
        
        return pivot;
    }
};
