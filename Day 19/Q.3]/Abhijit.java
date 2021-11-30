class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int a = 0 , b = 0 , d = matrix.length-1, c = matrix[0].length-1 ;
        
        List<Integer> ans = new ArrayList<>() ;
        
        while (a <= c && b <= d){
            
            for (int j = a ; j <= c; j++)
            {
                ans.add(matrix[b][j]) ;
            }
            
        
            for (int i = b+1 ; i <= d ; i++)
            {
                ans.add(matrix[i][c]) ;
            }
            
            if (b < d){
            for (int j = c-1; j >= a; j--)
            {
                ans.add(matrix[d][j]) ;
            }
           }
            
            if (a < c){
            for (int i = d-1 ; i > b ; i--)
            {
                ans.add(matrix[i][a]) ;
            }
            }
            a++ ; b++ ; c-- ; d-- ;        
        }
        
        
        return ans ;
        
        
        
    }
}
