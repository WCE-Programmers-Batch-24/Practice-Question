#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum[n]={0};
        for(ll i=0;i<n;i++) 
        {
            cin>>arr[i];
            if(i!=0)
            sum[i] = sum[i-1] + arr[i];
            else sum[i] = arr[i];
        }
        ll sorted[n];
        for(ll i=0;i<n;i++) sorted[i] = arr[i];
        sort(sorted,sorted+n);
        ll sum2[n];
        for(ll i=0;i<n;i++) 
        {
            if(i!=0)
            sum2[i] = sum2[i-1] + sorted[i];
            else sum2[i] = sorted[i];
        }
        ll m;
        cin>>m;
        while(m--)
        {
            ll type,l,r;
            cin>>type>>l>>r;
            if(type==1)
            {   
                if(l!=1)
                    cout<<sum[r-1]-sum[l-2]<<endl;
                else
                    cout<<sum[r-1]<<endl;
            }
            else
            {
                if(l!=1)
                    cout<<sum2[r-1]-sum2[l-2]<<endl;
                else
                    cout<<sum2[r-1]<<endl;
            }
        }
    }
    return 0;
}
