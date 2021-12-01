#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll maxm = 0;
    for(int i=0;i<n;i++)
    {
        maxm = max(maxm,arr[i]*(n-i));
    }
    cout<<maxm<<endl;
    return 0;
}
