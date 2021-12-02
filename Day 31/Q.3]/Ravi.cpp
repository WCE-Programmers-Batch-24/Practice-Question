#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int check(ll arr[],ll n,ll ans,ll h)
{
    for(ll i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]>ans)
        h -= ans;
        else
        h -= (arr[i]-arr[i-1]);
    }
    h -= ans;
    if(h > 0) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        ll arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        if(n>=h) cout<<"1"<<endl;
        else
        {
            ll low = 1 , high = h;
            while(low<high)
            {
                ll mid = low + (high-low)/2;
                if(check(arr,n,mid,h)) high = mid;
                else low = mid + 1;
            }
            cout<<low<<endl;
        }
    }
    return 0;
}
