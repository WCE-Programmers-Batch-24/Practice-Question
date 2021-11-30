class Solution {
    public int reversePairs(int[] nums) {
        int ans = mergeSort(nums, 0, nums.length - 1) ;
        return ans ;
    }
    
    
    static int mergeSort(int[] nums, int s, int e)
    {
        // if only one element is present in arr, it is already sorted. so return 0 as no of reverse pairs = 0
        if (e == s) return 0;
        
        int mid = (s+e)/2 ;
        // sort the left part also store number of reverse pairs in left part in lrp
        int lrp = mergeSort(nums, s, mid) ;
        // sort the right part also store number of reverse pairs in right part in rrp
        int rrp = mergeSort(nums, mid+1, e) ;
        // there may be some reverse pairs between two arrays calculate that while merging
        int irp =  merge(nums, s, mid, e) ;
        
        // return number of all reverse pairs
       return lrp + rrp + irp ;
    }
    
    static int merge(int[] nums, int s, int mid, int e)
    {
        
        // calculating reverse pairs between two arrays
        int cnt = 0 ;
        // i at start of first arr, j at start of second arr
        int i = s , j = mid+1, k = 0 ;
        
        while (i <= mid)
        {
          // keep moving j as long as we are getting reverse pairs with nums[i]
            while (j <= e && nums[i] > 2*(long)nums[j]) j++ ;
            
            // for arr[i], add num of reverse pairs in count
            cnt += j - (mid+1) ;
            
            // check for next i (element in first array) ,,,  KEEP J AT CURRENT POS 
            // if arr[i] forms reverse pairs with elements of second part till j
            // then arr[i+1] , arr[i+2] ... will definitely form as arr[i+1] > arr[i]
            i++ ;
        }
        
      
        // merge two parts of array in 
         i = s ; j = mid+1 ;
        
        int temp[] = new int[e-s+1] ;
        
        while (i <= mid && j <= e)
        {
             // add smaller element among arr[i], arr[j] in temp arr and check for next one
            if (nums[i] < nums[j]) temp[k++] = nums[i++] ;
            else temp[k++] = nums[j++] ;
        }
        
        // there may be some elements left either in left part or in right part. Copy them
        while (i <= mid) temp[k++] = nums[i++] ;
        while (j <= e) temp[k++] = nums[j++] ;
        
       // copy elements in original array
        for (int m = 0 ; m < e-s+1 ; m++) {
            nums[m+s] = temp[m] ;
        }
        
        return cnt ;

    }
    
    
}
