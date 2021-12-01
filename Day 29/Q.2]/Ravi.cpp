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
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        while(n>0)
        {
            int r = n%10;
            v.push_back(r);
            n = n/10;
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<k;i++)
        {
            if(v[0]==9) continue;
            v[0]++;
            sort(v.begin(),v.end());
        }
        ll product = 1;
        for(auto i : v) product *= i;
        cout<<product<<endl;
    }
    return 0;
}
