class Solution {
    public int maxProduct(String[] words) {
        
        int n = words.length;
        
        // for each word binArr represents which chars are present in it (a to z)
        int binArr[] = new int[n] ;
        
        int j = 0 ;
        for (String word : words)
        {
            int curr = 0 ;
            
            // set the bit at currLetter - 'a' in curr
            for (int i = 0 ; i < word.length(); i++)
            {
                int c = word.charAt(i) - 'a' ;
                
                curr |= (1 << c) ;
            }
            
            binArr[j++] = curr ;  
        }
        
        int ans = 0 ;
        for (int i = 0 ; i < n-1 ; i++)
        {
            for (j = i+1 ; j < n ; j++)
            {
                // if bitwise and of two numbers == 0 ==> thw words dont have any common letter
                if ((binArr[i]&binArr[j]) == 0) {
                    ans = Math.max(ans, words[i].length()*words[j].length()) ;
                }
            }
        }
        
        return ans ;
        
        
        
        
    }
}
