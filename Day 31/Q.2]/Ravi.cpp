#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll minm = INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            minm = min(arr[i],minm);
        }
        ll count = 0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]!=minm && count<n/2)
            {
                cout<<arr[i]<<" "<<minm<<endl;
                count++;
            }
        }
    }
    return 0;
}
