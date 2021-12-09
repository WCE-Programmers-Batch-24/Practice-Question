class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) 
    {
        
        int n = nums.length ;
        int ans[] = new int[n-k+1] ;
        
        Deque<Integer> dq = new ArrayDeque<>() ;
        
        int i = 0 ;
        
        // for first k elements
        for (; i < k ; i++)
        {
             // if we have a smaller element in deque , it is of no use so remove all smaller elements from last
            while (!dq.isEmpty() && nums[dq.peekLast()] <= nums[i]) dq.pollLast() ;
            dq.offerLast(i) ;
        }
        ans[0] = nums[dq.peekFirst()] ;
        
        
      // for next elements
        for (i = k ; i < n ; i++)
        {
            // remove all elements which are out of range for current window from starting
            while (!dq.isEmpty() && i - k >= dq.peekFirst()) dq.pollFirst() ;
            
            // remove smaller elements from last
            while (!dq.isEmpty() && nums[dq.peekLast()] <= nums[i]) dq.pollLast() ;
            
            // add current element in deque
            dq.offerLast(i) ;
            
             // for current window add the greatest element in ans array
            ans[i-k+1] = nums[dq.peekFirst()] ; 
            
        }
        
        return ans ;
        
        
        
    }
}
