#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,l;
        cin>>n>>m>>l;
        vector<ll> store(1000001,0);
        // 1 2 3
        // 4 5 6
        // 7 9
        // v[1] = 1 , v[2] = 1 , v[3]=1
        // v[4] = 2;
        for(int j=0;j<m;j++)
        {
            ll k,temp;
            cin>>k;
            for(ll i=0;i<k;i++){
                cin>>temp;
                // ID of colour
                // Red -1 
                store[temp] = j+1;
                // v[1] = list;
            }
        }
        int strip[l];
        for(ll i=0;i<l;i++) cin>>strip[i];
        ll count = 1;
        // 1 2 3 | 4 | 9
        for(ll i=1;i<l;i++)
        {
            if(store[strip[i]]!=store[strip[i-1]])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
