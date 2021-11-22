class Solution {
public:
    bool canJump(vector<int>& A) {
        int z = 0, n = A.size();
        bool flag = false;
        
        for(int i=0; i<=z and i <n; i++){
            z = max(z, A[i] + i);
        }
        
        flag = (z >= n-1) ? true : false;
        
        return flag;
    }
};
