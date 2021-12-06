class Solution {
    public List<Integer> partitionLabels(String s) {
     
        int n = s.length() ;
        int lastOccurance[] = new int[26] ;
        
        for (int i = 0 ; i < n ; i++)
        {
            int pos = s.charAt(i) - 'a' ;
            
            lastOccurance[pos] = i ;
        }
        
        List<Integer> ans = new ArrayList<>() ;
        
        int currLastPos = -1 ;
        int start = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
            currLastPos = Math.max(currLastPos, lastOccurance[s.charAt(i) - 'a']) ;
            
            if (currLastPos == i)
            {
                ans.add(i - start + 1) ;
                start = i+1 ;
            } 
        }
        
        return ans ;
        
        
    }
}
