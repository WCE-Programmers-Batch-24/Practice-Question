class Solution {
    public int search(int[] arr, int target) {
        
        int s = 0 , e = arr.length - 1 ;
        
        while (s <= e)
        {
            int mid = (s+e)/2 ;
          
            if (arr[mid] == target) return mid ;
            
            if (arr[s] <= arr[mid])
            {
                if (arr[mid] > target && target >= arr[s]) e = mid-1 ;
               else s = mid+1 ;
            }
            else {
                if (arr[mid] < target && arr[e] >= target) s = mid+1 ;
                else e = mid-1 ;
            }
          
        }
        
        return -1 ;
        
    }
}
