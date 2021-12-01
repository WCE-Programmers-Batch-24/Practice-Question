class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int maxm = INT_MIN;
        int minm = INT_MAX;
        int maxi,mini;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(maxm<arr[i])
            {
                maxm = max(arr[i],maxm);
                maxi = i;
            }
            if(minm>arr[i])
            {
                minm = min(arr[i],minm);
                mini = i;
            }
        }
        int ans = min(min(max(mini+1,maxi+1),max(n-mini,n-maxi)),min(mini+1+n-maxi,maxi+1+n-mini));
        return ans;
    }
};
