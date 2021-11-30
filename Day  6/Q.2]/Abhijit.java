class Solution {
    public int maxChunksToSorted(int[] arr) 
    {
        int curr = 0 ;
        int chunks = 0 ;

        // If for index i , element i and all the
        // elements less but greater than previous
        // Chunk are present we get a new chunk
        // So store max till now in curr and if curr = i ,
        //chunks++

        for (int i = 0 ; i < arr.length; i++)
        {
            curr = Math.max(arr[i], curr) ;
            if (curr == i) chunks++ ;
        }
        
        return chunks ;
    }
}
