class Solution {
public:
    int majorityElement(vector<int>& A) {
        sort(A.begin(), A.end(), greater<int>());
        
        int max_num = 0, cur = 1, cur_num = A[0];
        for (int i = 1; i < A.size(); i++){
            if (A[i] == A[i - 1]) cur++;
            
            else cur = 1;
            
            
            max_num = max(max_num, cur);
            if (max_num == cur) cur_num = A[i];
            
        
        }
    return cur_num  ;
        
    }
};
