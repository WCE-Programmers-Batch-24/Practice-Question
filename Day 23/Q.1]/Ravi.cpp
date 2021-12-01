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
        ll n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<string> a1,b1;
        string s1,s2;
        int flag=0;
        ll count = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<b[i]){
                count++;
                flag = 1;
            }
            else if(a[i]>b[i])
            {
                flag = 0;
            }
            else if(flag==1) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
