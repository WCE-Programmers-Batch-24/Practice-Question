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
        vector<ll> v(n);
        ll minm = INT_MAX;
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
            minm = min(minm,v[i]);
        }
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]==minm) count++;
        }
        sort(v.begin(),v.end(),greater<ll>());
        cout<<(minm*n)+(n-count)<<endl;
    }
    return 0;
}
