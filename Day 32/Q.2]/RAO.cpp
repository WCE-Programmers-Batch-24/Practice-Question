class Solution {
public:
    int maxProfit(vector<int>& A) {
        int sell = 0;
        
        for(int i=1; i<A.size(); i++){
            sell += ( A[i] > A[i-1] ) ? A[i] - A[i-1] : 0; 
        }
        
        return sell;
    }
};
