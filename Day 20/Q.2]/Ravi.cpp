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
        int n,m,tp;
        cin>>n>>m;
        tp=n;
        vector<string> ans,test;
        while(tp--)
        {
            string temp,temp2;
            cin>>temp>>temp2;
            ans.push_back(temp);
            test.push_back(temp2);
        }
        int flag = 1,flag2=1;
        for(int i=0;i<n;i++)
        {
            string check = test[i];
            if(ans[i]=="correct")
            {
                for(int j=0;j<m;j++)
                {
                    if(check[j]=='0')
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            else
            {
                int count=0;
                for(int j=0;j<m;j++)
                {
                    if(check[j]=='0')
                    {
                        count++;
                    }
                }
                if(count==0) flag2=0;
            }
            if(flag==0) break;
        }
        if(flag==0) cout<<"INVALID"<<endl;
        else if(flag2==0) cout<<"WEAK"<<endl;
        else cout<<"FINE"<<endl;
    }
    return 0;
}
