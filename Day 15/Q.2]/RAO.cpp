class Solution {
public:
    void moveZeroes(vector<int>& A) {
        int num = 0;
        
        for(int i=0; i<A.size(); i++){
            if(A[i]!=0) A[num++] = A[i];
        }
        
        while(num<A.size()) A[num++] = 0;
    }
};
