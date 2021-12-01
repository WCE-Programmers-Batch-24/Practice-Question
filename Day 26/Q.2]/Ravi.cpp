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
        string s;
        cin>>s;
        int b=0,w=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1] && i<n) while(s[i]==s[i+1]) i++;
                if(s[i]=='B') b++;
                else w++;
        }
        cout<<min(w,b)<<endl;
    }
    return 0;
}
