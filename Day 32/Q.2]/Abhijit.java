class Solution {
    public int maxProfit(int[] prices) {
        
        int maxProfit = 0 , n = prices.length;
        
        for (int i = 0 ; i < n-1 ; i++)
        {
            if (prices[i+1] > prices[i])
                maxProfit += prices[i+1] - prices[i] ;   
        }
        
        return maxProfit ;
        
    }
}
