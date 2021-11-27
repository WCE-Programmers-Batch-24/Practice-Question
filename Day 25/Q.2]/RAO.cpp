class Solution {
public:
    int maxProfit(vector<int>& A) {
        int n = A.size(), profit = 0, m = A[0];
        
        for(int i=0; i<n; i++){
            m = min(m, A[i]);
            profit = max(profit, A[i] - m);
        }
        
        return profit;
    }
};
