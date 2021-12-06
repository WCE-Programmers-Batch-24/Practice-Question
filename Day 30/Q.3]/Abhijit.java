class Solution {
    public int[][] merge(int[][] intervals) {
        
        // sort the intervals according to starting elements
        Arrays.sort(intervals, (a, b)-> a[0] - b[0]) ;
        List<int[]> ans = new ArrayList<>() ;
        
        int start = intervals[0][0] , end = intervals[0][1] ;
        
        
        for (int[] x: intervals)
        {
            // check if intervals can be merged
            if (x[0] <= end) {
                end = Math.max(end, x[1]) ;
            } else {
                ans.add(new int[]{start, end}) ;
                start = x[0] ;
                end = x[1] ;
            }
        }
        ans.add(new int[]{start, end}) ;
        
        
        
        return ans.toArray(new int[0][]) ;
        
    
    }
    
    
    
}
