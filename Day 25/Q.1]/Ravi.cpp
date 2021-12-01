#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(arr[0]!=n&&arr[n-1]!=n) cout<<"-1"<<endl;
        else
        {
            deque<int> dq;
            int low = 0,high = n-1;
            while(low<=high)
            {
                if(arr[low]<arr[high]) dq.push_front(arr[low++]);
                else dq.push_back(arr[high--]);
            }
            for(auto i : dq) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
