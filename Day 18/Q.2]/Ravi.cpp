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
        int n;
        cin>>n;
        ll arr[n];
        int flag = 0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]%arr[i]==0) continue;
            else{
                cout<<"-1"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag) continue;
        for(auto i : arr) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
