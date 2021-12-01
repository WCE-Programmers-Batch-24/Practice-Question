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
        int n,k;
        cin>>n>>k;
        string cross;
        cin>>cross;
        int flag;
        int count=0;
        if(cross[0]=='0') flag = 0;
        else flag=1;
        int index,index1;
        for(int i=1;i<n;i++)
        {
            if(flag)
            {
                if(cross[i]=='0')
                {
                    flag=0;
                    count++;
                }
            }
            else
            {
                if(cross[i]=='1')
                {
                    flag=1;
                    count++;
                }
            }
            if(cross[i]=='0') index = i+1;
            else index1 = i+1;
        }
        if(count<k) cout<<"-1"<<endl;
        else
        {
            if(cross[0]=='0')
            {
                if(k%2==0) cout<<index<<endl;
                else cout<<index1<<endl;
            }
            else
            {
                if(k%2==0) cout<<index1<<endl;
                else cout<<index<<endl;
            }
        }
    }
    return 0;
}
