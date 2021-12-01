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
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int count = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=arr[i-1]) count++;
            else arr[i]=arr[i-1];
        }
        cout<<count<<endl;
    }
    return 0;
}
