class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        if(n%2==0)
        {
            for(int i=1;i<sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(i%2==1 || (n/i)%2==1) count++;
                }
            }
        }
        else
        {
            for(int i=1;i<sqrt(n);i++)
            {
                if(n%i==0) count += 2;
            }
            int root = sqrt(n);
            if(root*root==n) count++;
        }
        return count;
    }
};
