class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int profit = 0;
        int max_profit = 0;
        int maxm = arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(i!=n-1)
            {
                profit = max(maxm-arr[i],0);
                maxm = max(arr[i],maxm);
                max_profit = max(max_profit,profit);
            }
        }
        return max_profit;
    }
};
