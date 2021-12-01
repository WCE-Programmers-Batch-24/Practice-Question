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
        sort(arr,arr+n);
        map<int,int> map;
        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }
        for(auto i : map)
        {
            cout<<i.first<<" ";
        }
        for(auto i : map)
        {
            while(i.second>1)
            {
                cout<<i.first<<" ";
                i.second--;
            }
        }
        cout<<endl;
    }
    return 0;
}
