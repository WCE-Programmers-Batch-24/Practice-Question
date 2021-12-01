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
        int n,m;
        cin>>n>>m;
        int arr[n+1];
        for(int i=0;i<n+1;i++) arr[i]=1;
        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            arr[temp] = 0;
        }
        vector<int> chef;
        vector<int> ass;
        int flag = 1;
        for(int i=1;i<n+1;i++)
        {
            if(arr[i]!=0 && flag)
            {
                chef.push_back(i);
                flag = 0;
            }
            else if(arr[i]!=0)
            {
                ass.push_back(i);
                flag = 1;
            }
        }
        for(auto i : chef)
        cout<<i<<" ";
        cout<<endl;
        for(auto i : ass)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
