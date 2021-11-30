class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        long long int n=INT_MIN,m=INT_MAX,c,d,p;
        p=nums.size();
        for(int i=0;i<p;i++)
        {   if(n<nums[i])
        {
            c=i;
            
            n=nums[i];
        }
         
         if(m>nums[i])
         {
             d=i;
             m=nums[i];
             
             
         }}
        
    c=c+1;
        d=d+1;
        int x,y,z;
        x=max(c,d);
        z=max(p-c+1,p-d+1);
    if(c>p/2)
        c=p-c+1;
        if(d>p/2)
            d=p-d+1;
        
        y=c+d;
       
       
        
        z=min(z,min(x,y));
        
        
        
      
        
        return z;
        
        
        
        
    }
};