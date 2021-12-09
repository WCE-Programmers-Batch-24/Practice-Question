class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        int n = arr.size();
        int start = -1 , end = -1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                start = i;
                break;
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]<arr[i-1])
            {
                end = i;
                break;
            }
        }
        if(start==-1) return 0;
        int maxm = arr[end],minm = arr[start];
        for(int i=start;i<=end;i++)
        {
            minm = min(arr[i],minm);
            maxm = max(arr[i],maxm);
        }
        for(int i=0;i<start;i++)
        {
            if(arr[i]>minm)
            {
                start = i;
                break;
            }
        }
        for(int i=n-1;i>=end;i--)
        {
            if(arr[i]<maxm)
            {
                end = i;
                break;
            }
        }
        return end-start+1;
    }
};
