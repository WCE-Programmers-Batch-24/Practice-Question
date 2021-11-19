class Solution {
    
    
    // form a linked list cycle and perfrom floy'd algo
    
    public int findDuplicate(int[] nums) {
        int slow = nums[0] ;
        int fast = nums[0] ;
        
        do{
            slow = nums[slow] ;
            fast = nums[nums[fast]] ;
        } while(slow != fast) ;
        
        slow = nums[0] ;
        
        while (slow != fast)
        {
            slow = nums[slow] ;
            fast = nums[fast] ;
        }
        return slow ;
    }
}
