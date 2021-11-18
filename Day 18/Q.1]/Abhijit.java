class Solution {
    public int trap(int[] height) {
    
        int n = height.length ;
    
        if (n == 0) return 0 ;
        
        int s = 0 , e = n-1 , water = 0, l_max = height[0], r_max = height[n-1];
       
        while (s <= e)
        {
            
            if (height[s] < height[e])
            {
                l_max = Math.max(l_max, height[s]) ;
                water += l_max - height[s] ;
                s++ ;
            }
            else {
                r_max = Math.max(r_max, height[e]) ;
                water += r_max - height[e] ;
                e-- ;
            }
        }
        return water ;
        
    }
}
